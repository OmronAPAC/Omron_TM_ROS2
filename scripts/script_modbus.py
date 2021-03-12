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

    while not send_script.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('send_script service not available, waiting again...')

    print("?")
    
    """
    request = SendScript.Request()
    request.script = "PTP(\"JPP\",0,0,90,0,90,0,40,200,0,false)"
    resp = send_script.call_async(request)

    testing.script = "ScriptExit()"
    """

    testing = SendScript.Request()
    testing.script = "ChangeBase(\"RobotBase\")"
    #testing.script = "ChangeBase(\"vision_ros2_landmark_fixed\")"
    #test = send_script.call_async(testing)
    
    #request = SendScript.Request()
    #request.script = "PTP(\"CPP\",200, 0, 500, 180, 0, 0, 40,200,0,false)"
    #resp = send_script.call_async(request)

    #testing.script = "modbus_read(\"localhost\", \"preset_current_base\")"
    #testing.script = "modbus_read_float(\“localhost\”, 1, \"DI\", 8300, 1, 1)"

    test = send_script.call_async(testing)

    print("All ok!")
