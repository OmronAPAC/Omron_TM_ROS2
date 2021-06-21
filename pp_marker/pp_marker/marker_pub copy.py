import rclpy
import rclpy.node
from rclpy.exceptions import ParameterNotDeclaredException
from rcl_interfaces.msg import ParameterType
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
from tf2_ros.transform_broadcaster import TransformBroadcaster
from ament_index_python.packages import get_package_share_directory
from visualization_msgs.msg import Marker
from geometry_msgs.msg import TransformStamped, Vector3, Quaternion
import tf2_ros

class MarkerPublisher(rclpy.node.Node):
    def __init__(self):
        super().__init__('marker_publisher')
        timer_period = 0.02 #seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.publisher_ = self.create_publisher(Marker, '/marker', 10)

        i = 0
        self.timer = self.create_timer(timer_period, self.timer_callback)

        

    def timer_callback(self):
        marker = Marker()
        
        #marker.lifetime = self.get_clock().now().to_msg()

        marker.header.frame_id = "/marker"
        marker.header.stamp = self.get_clock().now().to_msg()

        # set shape, Arrow: 0; Cube: 1 ; Sphere: 2 ; Cylinder: 3
        marker.type = 1
        marker.id = 0
        marker.ns = 'object'

        # Set the scale of the marker
        marker.scale.x = 0.05
        marker.scale.y = 0.05
        marker.scale.z = 0.05

        # Set the color
        marker.color.r = 0.0
        print(1)
        marker.color.g = 1.0
        print(2)
        marker.color.b = 0.0
        marker.color.a = 1.0

        # Set the pose of the marker
        marker.pose.position.x = 0.0
        marker.pose.position.y = 0.0
        marker.pose.position.z = 0.0
        marker.pose.orientation.x = 0.0
        marker.pose.orientation.y = 0.0
        marker.pose.orientation.z = 0.0
        marker.pose.orientation.w = 1.0
        
        broadcaster = TransformBroadcaster(self)
        static_transformStamped = TransformStamped()

        static_transformStamped.header.stamp = self.get_clock().now().to_msg()
        static_transformStamped.header.frame_id = "flange"
        static_transformStamped.child_frame_id = "/marker"
        
        static_transformStamped.transform.translation.x = 0.0
        static_transformStamped.transform.translation.y = 0.0
        static_transformStamped.transform.translation.z = 0.15
        print(static_transformStamped.transform.translation.x)
        
        static_transformStamped.transform.rotation.x = 0.0
        static_transformStamped.transform.rotation.y = 0.0
        static_transformStamped.transform.rotation.z = 0.0
        static_transformStamped.transform.rotation.w = 1.0
        broadcaster.sendTransform(static_transformStamped)
        self.publisher_.publish(marker)

def main():
    rclpy.init()
    node = MarkerPublisher()
    rclpy.spin(node)
    
if __name__ == '__main__':
    main()