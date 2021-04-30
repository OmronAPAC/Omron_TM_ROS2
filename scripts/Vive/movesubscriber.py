import rclpy
import time
from rclpy.node import Node
from math import radians
from std_msgs.msg import Float32MultiArray

from libraries import Move
from libraries import Modbus

class MoveSubscriber(Node):
    def __init__(self, mover):
        super().__init__('move_subscriber')
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'vive_coordinates',
            self.listener_callback,
            10)
        self.mover = mover
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info(str(list(msg.data)))
        self.mover.set_position(list(msg.data))


def main(args=None):
    rclpy.init(args=args)
    mover = Move.MoveClass()
    move_subscriber = MoveSubscriber(mover)

    rclpy.spin(move_subscriber)
    move_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
