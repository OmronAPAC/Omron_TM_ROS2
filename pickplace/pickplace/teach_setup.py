import rclpy
import time
import json
import sys
import os, signal
from ament_index_python.packages import get_package_share_directory
pp_share = get_package_share_directory('pickplace')
pp_library =  pp_share + '/pickplace/pp_library'

from math import radians
from math import degrees

from pp_library import Modbus, Transform, Script

from geometry_msgs.msg import TransformStamped, Vector3, Quaternion

from launch import LaunchDescription
from launch import LaunchIntrospector
from launch import LaunchService 
import launch_ros.actions
from subprocess import Popen

"""
TODO:
    - Make variable ip address
"""

def start_program(startorstop):
    for i in range(5):
        print(startorstop + " TM program in " + 5 - i + " seconds!")
        time.sleep(1)

def run_vision(listener, vjob_name, robot_ip):
    start_program('Start')
    print("Starting TM Program......")
    time.sleep(1)
    # Launch the TM_Driver using subprocess, to enable the vision job to execute
    driver = Popen(['ros2', 'run', 'tm_driver', 'tm_driver', robot_ip], preexec_fn=os.setsid)
    time.sleep(2)
    vision_base = get_vbase(listener, modbus, vjob_name)
    os.killpg(os.getpgid(driver.pid), signal.SIGTERM)
    start_program('Stop')
    return vision_base
    

def get_vbase(listener, modbus, vjob_name):
    listener.exit_script()
    listener.change_base(vjob_name)
    time.sleep(0.1)
    new_vbase = modbus.get_base()
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

def main():
    robot_ip = ''
    if (len(sys.argv) >= 1):
        robot_ip = sys.argv[1]
    print("Starting setup...")
    rclpy.init()
    node = rclpy.create_node("init")
    modbus = Modbus.ModbusClass()
    tf = Transform.TransformClass()
    listener = Script.ScriptClass()

    modbus.init_io()
    
	# Set the starting position
    input("Set HOME position, then press Enter to continue...")
    home_pos = convert_rad(modbus.get_pos())
    
    # Get the vision base name
    vjob_name = input("Please enter the vision base name: ")
    
    # Get the landmark viewing coordinates for pick w.r.t robot base
    input("Set LANDMARK position for PICK, then press Enter to continue...")
    view_pick = convert_rad(modbus.get_pos())

    # Run the TM program to get the vision base
    pick_vision_base = run_vision(listener, vjob_name, robot_ip)

    # Get the pick coordinate w.r.t. robot base, then close the gripper
    modbus.open_io()
    input("Set PICK position, then press Enter to continue...")
    base_pick = modbus.get_pos()
    modbus.close_io()

    # Get the landmark viewing coordinates for place w.r.t robot base
    input("Set LANDMARK position for PLACE, then press Enter to continue...")
    view_place = convert_rad(modbus.get_pos())

    # Run the TM program to get the vision base
    place_vision_base = run_vision(listener, vjob_name, robot_ip)

    # Get the place coordinate w.r.t. robot base, then open the gripper
    input("Set PLACE position, then press Enter to continue...")
    base_place = modbus.get_pos()
    modbus.open_io()

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
    with open(pp_share + '/config.txt', 'w') as output:
        json.dump(config, output, indent = 3)

    print("Initialisation complete!")

if __name__ == '__main__':
    main()

