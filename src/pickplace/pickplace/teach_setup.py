import rclpy
import time
import json
import sys
import os, signal
from ament_index_python.packages import get_package_share_directory
pickplace_share = get_package_share_directory('pickplace')
pp_library =  get_package_share_directory('pickplace') + '/pp_library'

from math import radians
from math import degrees

from pp_library import IO, Transform, Script
from pickplace_msgs.srv import AskModbus
from geometry_msgs.msg import TransformStamped, Vector3, Quaternion

# from launch import LaunchDescription
# from launch import LaunchIntrospector
# from launch import LaunchService 
# import launch_ros.actions
# from subprocess import Popen

"""
TODO:
    - Make variable ip address
"""

def start_program(startorstop):
    input(startorstop + " the TM Program, then press Enter to continue...")

def run_vision(listener, node, cli, vjob_name, robot_ip):
    start_program('Start')
    # Launch the TM_Driver using subprocess, to enable the vision job to execute
    #driver = Popen(['ros2', 'run', 'tm_driver', 'tm_driver', robot_ip], preexec_fn=os.setsid)
    print('Connecting...')
    time.sleep(4)
    vision_base = get_vbase(listener, node, cli, vjob_name)
    #os.killpg(os.getpgid(driver.pid), signal.SIGTERM)
    start_program('Stop')
    print("Vision base coords: " + str(vision_base[0:5]))
    return vision_base
    
def modbus_call(node, cli, call):
    while not cli.wait_for_service(timeout_sec=1.0):
        print("Service not available...")
    req = AskModbus.Request()
    req.req = call
    future = cli.call_async(req)
    rclpy.spin_until_future_complete(node, future)
    return future.result().position

def get_vbase(listener, node, cli, vjob_name):
    listener.exit_script()
    listener.change_base(vjob_name)
    time.sleep(0.1)
    new_vbase = modbus_call(node, cli, 'get_base')
    time.sleep(0.1)
    listener.change_base("RobotBase")
    time.sleep(0.1)
    return new_vbase

def convert_rad(obj):
    x = obj[0] * 0.001
    y = obj[1] * 0.001
    z = obj[2] * 0.001
    roll = radians(obj[3])
    pitch = radians(obj[4])
    yaw = radians(obj[5])
    return [x, y, z, roll, pitch, yaw]

def convert_deg(obj):
    x = obj[0] * 1000
    y = obj[1] * 1000
    z = obj[2] * 1000
    roll = degrees(obj[3])
    pitch = degrees(obj[4])
    yaw = degrees(obj[5])
    return [x, y, z, roll, pitch, yaw]



############################################################################3
def main():
    robot_ip = ''
    if (len(sys.argv) >= 1):
        robot_ip = sys.argv[1]
    print("Starting setup...")

    rclpy.init()
    node = rclpy.create_node("init")
    cli = node.create_client(AskModbus, 'ask_modbus')
    io = IO.IOClass()
    tf = Transform.TransformClass()
    listener = Script.ScriptClass()
    modbus_call(node, cli, 'init_io') #Initialise IO
    
	# Set the starting position
    input("Set HOME position, then press Enter to continue...")
    home_pos = convert_rad(modbus_call(node, cli, 'get_pos'))
    
    # Get the vision base name
    vjob_name = input("Please enter the vision base name: ")
    
    # Get the landmark viewing coordinates for pick w.r.t robot base
    input("Set LANDMARK position for PICK, then press Enter to continue...")
    view_pick = convert_rad(modbus_call(node, cli, 'get_pos'))

    # Run the TM program to get the vision base
    pick_vision_base = run_vision(listener, node, cli, vjob_name, robot_ip)

    # Get the pick coordinate w.r.t. robot base, then close the gripper
    io.open()
    input("Set PICK position, then press Enter to continue...")
    base_pick = modbus_call(node, cli, 'get_pos')
    io.close()

    # Get the landmark viewing coordinates for place w.r.t robot base
    input("Set LANDMARK position for PLACE, then press Enter to continue...")
    view_place = convert_rad(modbus_call(node, cli, 'get_pos'))

    # Run the TM program to get the vision base
    place_vision_base = run_vision(listener, node, cli, vjob_name, robot_ip)

    # Get the place coordinate w.r.t. robot base, then open the gripper
    input("Set PLACE position, then press Enter to continue...")
    base_place = modbus_call(node, cli, 'get_pos')
    io.open()

    print("Initialising pickplace configuration...")

    # Obtain the pick and place coordinates w.r.t VISION base
    vbase_pick = tf.transform_pp(base_pick, pick_vision_base, 'pick', 'vbase_pick')
    vbase_place = tf.transform_pp(base_place, place_vision_base, 'place', 'vbase_place')

    # Export variables to a txt file
    config = {
        "home_pos": home_pos,
        "vjob_name": vjob_name,
        "view_pick": view_pick,
        "view_place": view_place,
        "vbase_pick": convert_deg(vbase_pick),
        "vbase_place": convert_deg(vbase_place)
    }

    # Output the results in a json file
    with open(pickplace_share + '/config.txt', 'w') as output:
        json.dump(config, output, indent = 3)

    print("Initialisation complete!")

if __name__ == '__main__':
    main()

