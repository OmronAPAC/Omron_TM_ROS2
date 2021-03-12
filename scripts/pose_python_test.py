import rclpy
import sys
from tm_msgs.msg import *
from tm_msgs.srv import *

#home = [0.0,-0.5, 0.5,-3.14159, 0.0, 0.0]

if __name__ == '__main__':
    home = [0.0, -0.5, 0.5, -3.14159, 0.0, 0.0]

    rclpy.init(args=sys.argv)
    node = rclpy.create_node('pose_pythontest')
    set_positions = node.create_client(SetPositions, "set_positions")
    while not set_positions.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('service not available, waiting again...')
    print("?")
    
    request = SetPositions.Request()
    request.motion_type = SetPositions.Request.PTP_J
    request.positions = [0.0, 0.0, 1.58, 0.0, 1.58, 0.0]
    request.velocity = 1.0
    request.acc_time = 0.2
    request.blend_percentage = 10
    request.fine_goal = False


    resp = set_positions.call_async(request)
    print("All ok!")
    rclpy.spin_until_future_complete(node, resp)
    print("??")


"""
"SetPositions.Request.PTP_J, home, 1, 0.4, 0, False"

# rospy.wait_for_service('add_two_ints')
# add_two_ints = rospy.ServiceProxy('add_two_ints', AddTwoInts)
# resp = add_two_ints(req)
add_two_ints = node.create_client(AddTwoInts, 'add_two_ints')
while not add_two_ints.wait_for_service(timeout_sec=1.0):
    node.get_logger().info('service not available, waiting again...')
resp = add_two_ints.call_async(req)
rclpy.spin_until_future_complete(node, resp)


#rospy.wait_for_service('tm_driver/set_positions')
#set_positions = rospy.ServiceProxy('tm_driver/set_positions', SetPositions)
#home = [0.0,-0.5, 0.5,-3.14159, 0.0, 0.0]
#set_positions(SetPositionsRequest.PTP_J, home, 1, 0.4, 0, False)

set_positions = node.create_client(SetPositions, 'tm_driver/set_positions')
while not set_positions.wait_for_service(timeout_sec=1.0):
    node.get_logger().info('service not available, waiting again...')

"""