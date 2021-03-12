import rclpy
import sys
from tm_msgs.msg import *
from tm_msgs.srv import *

#home = [0.0,-0.5, 0.5,-3.14159, 0.0, 0.0]

if __name__ == '__main__':
    home = [0.0, -0.5, 0.5, -3.14159, 0.0, 0.0]

    rclpy.init(args=sys.argv)
    node = rclpy.create_node('script_pythontest')
    send_script = node.create_client(SendScript, "send_script")
    set_io = node.create_client(SetIO, "set_io")

    while not send_script.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('send_script service not available, waiting again...')
    while not set_io.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('set_io service not available, waiting again...')
    
    print("?")
    
    request = SendScript.Request()
    request.script = "PTP(\"JPP\",0,0,90,0,90,0,40,200,0,false)"

    requestio = SetIO.Request()
    requestio.module = 1
    requestio.type = 1
    requestio.pin = 0
    requestio.state = 1.0


    resp = send_script.call_async(request)
    
    set_io.call_async(requestio)
    print("All ok!")
    rclpy.spin_until_future_complete(node, resp)
    print("??")

