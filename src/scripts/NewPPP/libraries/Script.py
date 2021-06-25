import rclpy
from tm_msgs.msg import *
from tm_msgs.srv import *

class ScriptClass:
    def __init__(self):
        self.listen_node = rclpy.create_node('listen_python')
        self.send_script = self.listen_node.create_client(SendScript, "send_script")
        while not self.send_script.wait_for_service(timeout_sec=1.0):
            self.listen_node.get_logger().info('send_script service not available, waiting again...')

        self.script_request = SendScript.Request()
        
        self.isNotDone = True
        self.subscription = self.listen_node.create_subscription(SctResponse, 'sct_response', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        #self.listen_node.get_logger().info('I heard: "%s"' % msg.script)
        if (msg.script == 'Listen1'):
            self.isNotDone = False


    def wait_for_complete(self):
        #print("Waiting...")
        self.isNotDone = True
        while (self.isNotDone):
            rclpy.spin_once(self.listen_node)


    def exit_script(self):
        self.script_request.script = "ScriptExit()"
        resp = self.send_script.call_async(self.script_request)
        self.wait_for_complete()


    def change_base(self, base):
        self.script_request.script = "ChangeBase(\"" + base + "\")"
        #print("ChangeBase(\"" + base + "\")")
        resp = self.send_script.call_async(self.script_request)
  






    
    

