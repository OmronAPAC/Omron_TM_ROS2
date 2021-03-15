import rclpy
import time
from tm_msgs.msg import *

"""
    TODO:
        - Change time.sleep() for IO to something more...graceful
"""

class WaiterClass():
    def __init__(self):
        self.waiter_node = rclpy.create_node('waiter_python')
        self.cmd = ""
        self.isNotDone = True
        self.subscription = self.waiter_node.create_subscription(SctResponse, 'sct_response', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        #self.waiter_node.get_logger().info('I heard: "%s"' % msg.script)
        if (self.cmd == "vision"):
            if (msg.script == 'Listen1'):
                self.isNotDone = False
        elif (self.cmd == "io"):
            if (msg.script == "OK;1"):
                time.sleep(1)
                self.isNotDone = False

    def wait_for_complete(self, cmd):
        #print("Waiting...")
        self.cmd = cmd
        self.isNotDone = True
        while (self.isNotDone):
            rclpy.spin_once(self.waiter_node)