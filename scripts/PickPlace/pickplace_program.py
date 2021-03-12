import rclpy
from rclpy.node import Node
import sys
import time
from tm_msgs.msg import *
from tm_msgs.srv import *

import Transform
import IO
import Modbus
import Move
import Script
import Waiter

"""
TODO:
    - Change all the class module names
    - Change the access level (private functions and attributes)
"""

def get_positions(cmd):
    listener.exit_script()
    waiter.wait_for_complete("vision")
    listener.change_base("vision_ros2_landmark_fixed")
    time.sleep(0.1)
    new_vbase = Modbus.get_base()
    listener.change_base("RobotBase")
    time.sleep(0.1)
    if (cmd == "pick"):
        return tf.get_picks(new_vbase)
    elif (cmd == "place"):
        return tf.get_places(new_vbase)
    else:
        return False # CHANGE THIS


if __name__ == '__main__':
    rclpy.init(args=sys.argv)

    waiter = Waiter.WaiterClass()
    mover = Move.MoveClass()
    IO = IO.IOClass()
    Modbus = Modbus.ModbusClass()
    listener = Script.ScriptClass()
    tf = Transform.TransformClass()

    home = [0.4, 0.0, 0.4, -3.14159, 0.0, 1.59]
    pick = [0.52, -0.19, 0.0, -3.14159, 0.0, 1.59]
    place = [0.4, 0.3, 0.2, -3.14159, 0.0, 1.59]

    mover.set_position(home)

    pick, safepick = get_positions("pick")

    mover.set_position(safepick)
    IO.open()
    waiter.wait_for_complete("io") # CHANGE THIS
    mover.set_position(pick)
    IO.close()
    waiter.wait_for_complete("io") # CHANGE THIS
    mover.set_position(safepick)

    place, safeplace = get_positions("place")

    mover.set_position(safeplace)
    mover.set_position(place)
    IO.open()
    waiter.wait_for_complete("io") # CHANGE THIS
    mover.set_position(safeplace)

    mover.set_position(home)



"""
- Make a class for sending scripts (IMPLEMENTED, ADD IT IN)
- Check if get_base gives the correct base
- Set the pick and place positions relative to the vision base

[320.17999267578125, 4.130000114440918, 3.4000000953674316, -179.86000061035156, 0.5, -89.23999786376953]
[320.17999267578125, 4.130000114440918, 3.4000000953674316, -179.86000061035156, 0.5, -89.23999786376953]
[274.0, -51.59000015258789, 3.4100000858306885, -179.99000549316406, 0.3499999940395355, -77.5999984741211]
"""