import rclpy
import time
import sys
import json

from libraries import Waiter
from libraries import Move
from libraries import IO
from libraries import Modbus
from libraries import Transform
from libraries import Script

"""
TODO:
    - Change the access level (private functions and attributes)
    - Create launch file
    - Add timer for vision node failure case
"""

def get_positions(vbase_name, vjob_name):
    listener.exit_script()
    waiter.wait_for_complete("vision")
    listener.change_base(vjob_name)
    time.sleep(0.1)
    new_vbase = modbus.get_base()
    time.sleep(0.1)
    listener.change_base("RobotBase")
    time.sleep(0.1)
    if (vbase_name == "vbase_pick"):
        return tf.get_picks(new_vbase, vbase_name)
    elif (vbase_name == "vbase_place"):
        return tf.get_places(new_vbase, vbase_name)
    else:
        return new_vbase


if __name__ == '__main__':
    rclpy.init()
    move = Move.MoveClass()
    modbus = Modbus.ModbusClass()
    #modbus.init_io()
    move.set_position([0.52, -0.19, 0.1, -3.14159, 0.0, 1.59])
    modbus.open_io()
    move.set_position([0.52, -0.19, 0.2, -3.14159, 0.0, 1.59])
    modbus.close_io()

    

