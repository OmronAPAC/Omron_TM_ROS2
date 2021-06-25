import rclpy
import time
from tm_msgs.srv import *

class MoveClass:
    def __init__(self):
        self.move_node = rclpy.create_node('move_python')
        self.set_pos = self.move_node.create_client(SetPositions, "set_positions")
        self.move_request = SetPositions.Request()
        self.move_request.motion_type = 2 #SetPositions.Request.PTP_T
        self.move_request.velocity = 3.14
        self.move_request.acc_time = 0.01
        self.move_request.blend_percentage = 100
        self.move_request.fine_goal = False
  
    def set_position(self, position):
        self.move_request.positions = position
        while not self.set_pos.wait_for_service(timeout_sec=1.0):
            self.move_node.get_logger().info('set_positions service not available, waiting again...')
        resp = self.set_pos.call_async(self.move_request)
        rclpy.spin_until_future_complete(self.move_node, resp)


