import rclpy
import time
from rclpy.node import Node
from math import radians
from std_msgs.msg import Float32MultiArray

from libraries import MoveSpecial
from libraries import Modbus
from libraries import Script

class MoveSubscriber(Node):
    def __init__(self):
        super().__init__('move_subscriber')
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'vive_coordinates',
            self.listener_callback,
            10)
        self.mover = MoveSpecial.MoveClass()
        self.script = Script.ScriptClass()
        self.subscription  # prevent unused variable warning
        self.tagnum = 1
        self.currtag = 1
        self.buffsize = 10

    def listener_callback(self, msg):
        #self.get_logger().info(str(list(msg.data)))
        
        self.mover.set_position_special(list(msg.data), self.tagnum)
        self.tagnum =  (self.tagnum % self.buffsize) + 1 # tagnum will be from 1 - 15 inclusive
        """
        if (self.tagnum != self.buffsize):
            self.mover.set_position_special(list(msg.data), self.tagnum)
            self.tagnum =  (self.tagnum % self.buffsize) + 1 # tagnum will be from 1 - 5 inclusive
        else:
            self.currtag = self.mover.asksta()
            if (self.currtag >= self.buffsize - 5): # Reducing this will ensure the buffer has stuff but need to watch out cos it will; continuously increase stuff in the buffer
                self.tagnum = (self.tagnum % self.buffsize) + 1 # tagnum will be from 1 - 5 inclusive
        """
        

def main(args=None):
    rclpy.init(args=args)
    move_subscriber = MoveSubscriber()

    rclpy.spin(move_subscriber)
    move_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
