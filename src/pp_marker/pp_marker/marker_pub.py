import rclpy
import rclpy.node
from tf2_ros.transform_broadcaster import TransformBroadcaster
from visualization_msgs.msg import Marker
from geometry_msgs.msg import TransformStamped
from std_msgs.msg import Bool

class MarkerPublisher(rclpy.node.Node):
    marker = Marker()
    
    
    def __init__(self):
        super().__init__('marker_publisher')
        timer_period = 0.01 #seconds
        self.broadcaster = TransformBroadcaster(self)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.publisher_ = self.create_publisher(Marker, '/marker', 10)
        self.flagsub = self.create_subscription(Bool, 'objectflag', self.get_flag, 10)
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.transformStamped = TransformStamped()
        self.create_transformStamped()
        self.flag = "True"

    def timer_callback(self):
        self.create_transformStamped()
        self.broadcaster.sendTransform(self.transformStamped)
        self.create_marker()
        self.publisher_.publish(self.marker)

    def get_flag(self, msg):
        self.flag = msg.data

    def create_transformStamped(self):
        self.transformStamped = TransformStamped()

        # Set the pose of the self.marker
        self.transformStamped.header.stamp = self.get_clock().now().to_msg()
        self.transformStamped.header.frame_id = "EOAT"
        self.transformStamped.child_frame_id = "/marker"
        
        # translation of 0.15 in the y-axis puts the cube at approximately the gripper location
        self.transformStamped.transform.translation.x = 0.0
        self.transformStamped.transform.translation.y = 0.0
        self.transformStamped.transform.translation.z = 0.15
        
        self.transformStamped.transform.rotation.x = 0.0
        self.transformStamped.transform.rotation.y = 0.0
        self.transformStamped.transform.rotation.z = 0.0
        self.transformStamped.transform.rotation.w = 1.0
        
        
    def create_marker(self):        
        self.marker = Marker()
        self.marker.header.frame_id = "/marker"
        self.marker.header.stamp = self.get_clock().now().to_msg()

        # set shape, Arrow: 0; Cube: 1 ; Sphere: 2 ; Cylinder: 3
        self.marker.type = 1
        self.marker.id = 0
        self.marker.ns = 'cube'

        self.marker.scale.x = 0.05
        self.marker.scale.y = 0.05
        self.marker.scale.z = 0.05

        self.marker.color.r = 1.0
        self.marker.color.g = 1.0
        self.marker.color.b = 0.0
        
        if self.flag == True:
            self.marker.color.a = 1.0
        else:
            self.marker.color.a = 0.0
        self.marker_orientation()
        
    def marker_orientation(self):
        self.marker.pose.position.x = 0.0
        self.marker.pose.position.y = 0.0
        self.marker.pose.position.z = 0.0
        self.marker.pose.orientation.x = 0.0
        self.marker.pose.orientation.y = 0.0
        self.marker.pose.orientation.z = 0.0
        self.marker.pose.orientation.w = 1.0
        
        
def main():
    rclpy.init()
    node = MarkerPublisher()
    rclpy.spin(node)
    
    
if __name__ == '__main__':
    main()