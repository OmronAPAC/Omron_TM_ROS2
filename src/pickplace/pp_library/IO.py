import rclpy
import time
from tm_msgs.srv import *

"""
TO DO:
    - Add end effector initialise sequence
    - Figure out how to check for gripper open/close completion instead of using time.sleep(1) (subscribe to feedback states to check io 2 state?)
"""

class IOClass:
    def __init__(self):
        #rclpy.init()
        self.io_node = rclpy.create_node('io_node')
        self.set_io = self.io_node.create_client(SetIO, "set_io")
        
        self.request = SetIO.Request()
        self.request.module = 1
        self.request.type = 1
        self.request.pin = 0
        
    def open(self):
        self.request.state = 1.0
        while not self.set_io.wait_for_service(timeout_sec=1.0):
            self.io_node.get_logger().info('set_io service not available, waiting again...')
        self.set_io.call_async(self.request)
        time.sleep(1)

    def close(self):
        self.request.state = 0.0
        while not self.set_io.wait_for_service(timeout_sec=1.0):
            self.io_node.get_logger().info('set_io service not available, waiting again...')
        self.set_io.call_async(self.request)
        time.sleep(1)

    def init_io(self):
        init_request = SetIO.Request()
        init_request.module = 1
        init_request.type = 1
        init_request.pin = 0
        init_request.state = 1.0
        self.set_io.call_async(init_request)
        time.sleep(0.1)
        init_request.state = 0.0
        self.set_io.call_async(self.request)
        time.sleep(0.1)
        init_request.pin = 1
        init_request.state = 1.0
        self.set_io.call_async(init_request)
        time.sleep(0.1)
        init_request.state = 0.0
        self.set_io.call_async(self.request)
        time.sleep(0.1)




