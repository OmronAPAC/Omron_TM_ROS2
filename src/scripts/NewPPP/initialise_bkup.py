import rclpy
import time
import json

from math import radians
from math import degrees

#from libraries import Waiter
from libraries import Move
#from libraries import IO
from libraries import Modbus
from libraries import Transform
from libraries import Script

from geometry_msgs.msg import TransformStamped, Vector3, Quaternion
from launch import LaunchDescription
from launch import LaunchIntrospector
from launch import LaunchService 
import launch_ros.actions

"""
    - Test if tm driver can just be running all the way
    - Convert the mm/deg to m/rad*
"""

def start_tm():
    modbus.start_program()
    print("Starting TM Program......")
    i = 5
    while (i > 0):
        print(str(i) + " seconds left to run TM Driver...")
        i -= 1
        time.sleep(1)

def get_vbase(listener, waiter, vjob_name):
    listener.exit_script()
    waiter.wait_for_complete("vision")
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

    modbus.init_io()
    
    # Get the vision base name
    vjob_name = input("Please enter the vision base name: ")

    # Get the landmark viewing coordinates for pick w.r.t robot base
    input("Set LANDMARK position for PICK, then press Enter to continue...")
    view_pick = convert_rad(modbus.get_pos())
    

    # Run the TM program to get the vision base
    start_tm()
    print("debug")
    listener = Script.ScriptClass()
    waiter = Waiter.WaiterClass()
    pick_vision_base = get_vbase(listener, waiter, vjob_name)
    modbus.stop_program()
    modbus.open_io()

    # Get the pick coordinate w.r.t. robot base, then close the gripper
    input("Set PICK position, then press Enter to continue...")
    base_pick = modbus.get_pos()
    modbus.close_io()

    # Get the landmark viewing coordinates for place w.r.t robot base
    input("Set LANDMARK position for PLACE, then press Enter to continue...")
    view_place = convert_rad(modbus.get_pos())

    # Run the TM program to get the vision base
    start_tm()
    place_vision_base = get_vbase(listener, waiter, vjob_name)
    modbus.stop_program()

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
        "vjob_name": vjob_name,
        "view_pick": view_pick,
        "view_place": view_place,
        "vbase_pick": convert_deg(vbase_pick),
        "vbase_place": convert_deg(vbase_place),
        "base_pick": convert_rad(base_pick),
        "base_place": convert_rad(base_place)
        
    }

    with open('config.txt', 'w') as output:
        json.dump(config, output, indent = 3)

    print("Initialisation complete!")

if __name__ == '__main__':
    rclpy.init()
    node = rclpy.create_node("init")

    modbus = Modbus.ModbusClass()
    tf = Transform.TransformClass()

    main()

