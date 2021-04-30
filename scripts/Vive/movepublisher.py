import rclpy
import json
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray


class MovePublisher(Node):

    def __init__(self):
        super().__init__('move_publisher')
        self.data = []
        self.count = 0
        with open('scripts/Vive/positions.txt') as json_file:
            self.data = json.load(json_file)
        self.max = len(self.data) - 1

        #self.home = [0.3, 0.1, 0.3, -3.14159, 0.0, 1.59]
        self.publisher_ = self.create_publisher(Float32MultiArray, 'vive_coordinates', 10)
        timer_period = 0.2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Float32MultiArray()
        msg.data = list(self.data[self.count])
        self.publisher_.publish(msg)
        self.get_logger().info(str(list(msg.data)))
        self.count = (self.count + 1) % self.max



def main(args=None):
    rclpy.init(args=args)

    move_publisher = MovePublisher()

    rclpy.spin(move_publisher)

    move_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()