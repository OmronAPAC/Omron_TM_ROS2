import rclpy
import rclpy.node
from tf2_ros.transform_broadcaster import TransformBroadcaster
from ament_index_python.packages import get_package_share_directory
from tm_msgs.srv import *
pp_share = get_package_share_directory('pickplace')
pp_library =  pp_share + '/pickplace/pp_library'

from pp_library import Transform

class TcpPublisher(rclpy.node.Node):
    def __init__(self):
        super().__init__('tcp_transform_node')
        self.ask_item_client = self.create_client(AskItem, "ask_item")
        while not self.ask_item_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        timer_period = 0.2  # seconds
        self.tf = Transform.TransformClass() 
        self.tfbroadcaster = TransformBroadcaster(self)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        # get the tcp value somehow


    def get_tcp_coord(self):
        self.tcp_coords = AskItem.Request()
        self.tcp_coords.id = "tcp"
        self.tcp_coords.item = "TCP_Value"
        self.tcp_coords.wait_time = 1.0
        # value of result is TCP_Value={X,Y,Z,RX,RY,RZ} where X Y and Z are in mm and RX RY RZ are in degrees
        self.get_logger().info("before call")
        self.future = self.ask_item_client.call_async(self.tcp_coords)
        self.get_logger().info("after call")
    
    def timer_callback(self):
        if self.future is None:
            return
        coords_str = self.future.result().value[11:-1]
        # self.get_logger().info(coords_str)
        coords = coords_str.split(',')
        for x in range(0,6):
            if x <=2:
                coords[x] = float(coords[x])/1000
            else:
                coords[x] = float(coords[x])/57.2958
        #convert the return string into a list of coordinates then use the function below to generate a transform
        stamped_coord_params = self.tf.euler_to_stamped('flange', 'TCP', coords)
        stamped_coord_params.header.stamp = self.get_clock().now().to_msg()
        self.tfbroadcaster.sendTransform(stamped_coord_params)
        


def main(args=None):
    rclpy.init(args=args)
    node = TcpPublisher()
    node.get_tcp_coord()
    while rclpy.ok():
        node.get_logger().info('loop')
        rclpy.spin_once(node)
        if node.future.done():
            try:
                response = node.future.result()
            except Exception as e:
                node.get_logger().info('get tcp failed')
            else:
                node.get_logger().info(response.value)
                break
    rclpy.spin(node)

if __name__ == '__main__':
    main() 
    