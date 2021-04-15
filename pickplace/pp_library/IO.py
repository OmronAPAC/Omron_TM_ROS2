import rclpy
from tm_msgs.srv import *
from libraries import Waiter

"""
TO DO:
    - Add end effector initialise sequence
    - Do Modbus reading for IO
"""

class IOClass:
    def __init__(self):
        #rclpy.init()
        self.io_node = rclpy.create_node('io_python')
        self.set_io = self.io_node.create_client(SetIO, "set_io")
        while not self.set_io.wait_for_service(timeout_sec=1.0):
            self.io_node.get_logger().info('set_io service not available, waiting again...')
        self.request = SetIO.Request()
        self.request.module = 1
        self.request.type = 1
        self.request.pin = 0
        
    def open(self):
        self.request.state = 1.0
        self.set_io.call_async(self.request)
        #print("Opening")

    def close(self):
        self.request.state = 0.0
        self.set_io.call_async(self.request)
        #print("Closing")



