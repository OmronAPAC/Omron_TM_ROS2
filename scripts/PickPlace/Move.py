import rclpy
import sys
from tm_msgs.msg import *
from tm_msgs.srv import *
import tf2_py

class MoveClass:
    def __init__(self):
        self.move_node = rclpy.create_node('move_python')
        self.set_pos = self.move_node.create_client(SetPositions, "set_positions")
        while not self.set_pos.wait_for_service(timeout_sec=1.0):
            self.move_node.get_logger().info('set_positions service not available, waiting again...')
        self.move_request = SetPositions.Request()
        self.move_request.motion_type = 2 #SetPositions.Request.PTP_T
        self.move_request.velocity = 3.0
        self.move_request.acc_time = 0.1
        self.move_request.blend_percentage = 10
        self.move_request.fine_goal = False

        self.set_event = self.move_node.create_client(SetEvent, "set_event")
        while not self.set_event.wait_for_service(timeout_sec=1.0):
            self.move_node.get_logger().info('set_event service not available, waiting again...')
        self.event_request = SetEvent.Request()
        self.event_request.func = 1 # TAG
        self.event_request.arg1 = 1
        self.event_request.arg0 = 1

        self.ask_sta = self.move_node.create_client(AskSta, "ask_sta")
        while not self.ask_sta.wait_for_service(timeout_sec=1.0):
            self.move_node.get_logger().info('ask_sta service not available, waiting again...')
        self.sta_request = AskSta.Request()
        self.sta_request.subcmd = ""
        self.sta_request.subdata = ""
        self.sta_request.wait_time = 0.0


    def set_position(self, position):
        self.move_request.positions = position
        self.set_pos.call_async(self.move_request)
        self.set_event.call_async(self.event_request)
        resp = self.ask_sta.call_async(self.sta_request)
        rclpy.spin_until_future_complete(self.move_node, resp)



    
    

