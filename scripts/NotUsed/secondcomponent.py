import rclpy
from rclpy.node import Node
import sys
import time
from tm_msgs.msg import *
from tm_msgs.srv import *


if __name__ == "__main__":
    A = [0.4, -0.2, 0.4, -3.14159, 0.0, 1.59]
    B = [0.4, 0.2, 0.4, -3.14159, 0.0, 1.59]
    
    rclpy.init()
    node = rclpy.create_node('move_python')

    set_pos = node.create_client(SetPositions, "set_positions")
    while not set_pos.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('set_positions service not available, waiting again...')
    move_request = SetPositions.Request()
    move_request.motion_type = 2 #SetPositions.Request.PTP_T
    move_request.velocity = 3.0
    move_request.acc_time = 0.1
    move_request.blend_percentage = 10
    move_request.fine_goal = False

    set_event = node.create_client(SetEvent, "set_event")
    while not set_event.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('set_event service not available, waiting again...')


    ask_sta = node.create_client(AskSta, "ask_sta")
    while not ask_sta.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('ask_sta service not available, waiting again...')

    move_request.positions = B
    set_pos.call_async(move_request)
    time.sleep(3)

    set_event.call_async(SetEvent.Request(func = 1, arg0 = 1, arg1 = 1))
    resp = ask_sta.call_async(AskSta.Request(subcmd = "", subdata = "", wait_time = 1.0))
    rclpy.spin_until_future_complete(node, resp)
    print(resp.result())

    move_request.positions = A
    set_pos.call_async(move_request)
    time.sleep(3)
    set_event.call_async(SetEvent.Request(func = 1, arg0 = 2, arg1 = 1))
    resp = ask_sta.call_async(AskSta.Request(subcmd = "", subdata = "", wait_time = 1.0))
    rclpy.spin_until_future_complete(node, resp)
    print(resp.result())
