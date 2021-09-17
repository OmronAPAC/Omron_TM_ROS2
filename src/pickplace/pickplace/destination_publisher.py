import rclpy
import rclpy.node
from tf2_ros.transform_broadcaster import TransformBroadcaster
from ament_index_python.packages import get_package_share_directory
pp_share = get_package_share_directory('pickplace')
pp_library =  pp_share + '/pickplace/pp_library'

from pp_library import Transform

class DestinationPublisher(rclpy.node.Node):
    def __init__(self):
        super().__init__('destination_node')
        timer_period = 0.1  # seconds
        self.tf = Transform.TransformClass() 
        self.tfbroadcaster = TransformBroadcaster(self)
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.declare_parameter('destination_param', [0.0, 0.0, 0.0, 0.0, 0.0, 0.0])


    def timer_callback(self):
        coord_params = self.get_parameter('destination_param').get_parameter_value().double_array_value
        stamped_coord_params = self.tf.euler_to_stamped('tm_base', 'destination', list(coord_params))
        stamped_coord_params.header.stamp = self.get_clock().now().to_msg()
        self.tfbroadcaster.sendTransform(stamped_coord_params)


def main():
    rclpy.init()
    node = DestinationPublisher()
    rclpy.spin(node)

if __name__ == '__main__':
    main() 