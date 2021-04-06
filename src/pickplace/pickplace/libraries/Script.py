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
        

    def exit_script(self):
        self.script_request.script = "ScriptExit()"
        resp = self.send_script.call_async(self.script_request)


    def change_base(self, base):
        self.script_request.script = "ChangeBase(\"" + base + "\")"
        #print("ChangeBase(\"" + base + "\")")
        resp = self.send_script.call_async(self.script_request)
  






    
    

