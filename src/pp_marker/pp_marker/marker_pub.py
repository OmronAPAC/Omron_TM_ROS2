import rclpy
import rclpy.node
import math
from tf2_ros.transform_broadcaster import TransformBroadcaster
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from visualization_msgs.msg import Marker
from geometry_msgs.msg import TransformStamped
from pickplace_msgs.msg import MoveCube

from ament_index_python.packages import get_package_share_directory
pp_library =  get_package_share_directory('pickplace') + '/pickplace/pp_library'

from pp_library import Transform

class MarkerPublisher(rclpy.node.Node):
    
    def __init__(self):
        super().__init__('marker_publisher')
        self.tf = Transform.TransformClass()
        
        timer_period = 0.1 #seconds
        self.broadcaster = TransformBroadcaster(self)
        self.transformStamped = TransformStamped()
        
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        self.parent = "world"
        
        self.publisher_ = self.create_publisher(Marker, 'object_marker', 10)
        self.flagsub = self.create_subscription(MoveCube, 'objectflag', self.get_coordinates, 10)
        
        self.marker = Marker()
        self.marker.header.frame_id = "object_marker"
        self.marker.scale.x = 0.05
        self.marker.scale.y = 0.05
        self.marker.scale.z = 0.05        
        self.marker.type = 1
        self.marker.ns = 'cube'        
        self.marker.color.r = 1.0
        self.marker.color.g = 1.0
        self.marker.color.a = 1.0        
        self.marker.pose.orientation.w = 1.0
        
        self.transformStamped.header.frame_id = "world"
        self.transformStamped.child_frame_id = "object_marker"
        
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
    """
    Publish updated location of marker
    """
    def timer_callback(self):
        # Updates stamps
        self.transformStamped.header.stamp = self.get_clock().now().to_msg()
        self.marker.header.stamp = self.get_clock().now().to_msg()
        now = rclpy.time.Time()
        if self.parent == "EOAT":
            new_coords = self.tf_buffer.lookup_transform("world", "EOAT", now)
            self.transformStamped.transform = new_coords.transform
        elif self.parent == "tm_base":
            new_coords = self.tf_buffer.lookup_transform("world", "destination", now)
            self.transformStamped.transform = new_coords.transform
        # Deletes all markers saved in RViz then prepares it to add new objects again
        # TODO: publish it in a separate timer
        self.marker.action = 3
        self.marker.action = 0
        self.broadcaster.sendTransform(self.transformStamped)
        self.publisher_.publish(self.marker)

    def get_coordinates(self, msg):
        self.parent = msg.parent
        self.coordinates = msg.coordinates
        
        
def main():
    rclpy.init()
    node = MarkerPublisher()
    rclpy.spin(node)
    
    
if __name__ == '__main__':
    main()