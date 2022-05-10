import rclpy
import time
from tm_msgs.msg import *
from tm_msgs.srv import *

class ScriptClass:
    def __init__(self):
        self.listen_node = rclpy.create_node('listen_python')
        self.send_script = self.listen_node.create_client(SendScript, "send_script")

        self.script_request = SendScript.Request()
        
        self.isNotDone = True
        self.isNotConnected = True
        self.subscription = self.listen_node.create_subscription(SctResponse, 'sct_response', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning


    def listener_callback(self, msg):
        if (msg.script == 'Listen1'):
            self.isNotDone = False
        if (msg.script == 'OK'):
            self.isNotConnected = False

    # Wait for the vision job to complete and the TM program to re-enter the Listen Node
    def wait_for_complete(self):
        self.isNotDone = True
        while (self.isNotDone):
            rclpy.spin_once(self.listen_node)


    def wait_tm_connect(self):
        while (self.isNotConnected):
            self.isNotConnected = True
            self.script_request.script = ""
            resp = self.send_script.call_async(self.script_request)
            rclpy.spin_once(self.listen_node)
            time.sleep(1)


    def exit_script(self):
        self.script_request.script = "ScriptExit()"
        while not self.send_script.wait_for_service(timeout_sec=1.0):
            self.listen_node.get_logger().info('At exit_script: send_script service not available, waiting again...')
        resp = self.send_script.call_async(self.script_request)
        self.wait_for_complete()


    def change_base(self, base):
        self.script_request.script = "ChangeBase(\"" + base + "\")"
        while not self.send_script.wait_for_service(timeout_sec=1.0):
            self.listen_node.get_logger().info('At change_base: send_script service not available, waiting again...')
        resp = self.send_script.call_async(self.script_request)
  

    def stop_and_clear(self):
        self.script_request.script = "StopAndClearBuffer()"
        while not self.send_script.wait_for_service(timeout_sec=1.0):
            self.listen_node.get_logger().info('At stop_and_clear: send_script service not available, waiting again...')
        resp = self.send_script.call_async(self.script_request)




    
    

