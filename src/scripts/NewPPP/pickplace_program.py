import rclpy
import time
import sys
import json

from libraries import Move
from libraries import Modbus
from libraries import Transform
from libraries import Script

"""
TODO:
    - Change the access level (private functions and attributes)
    - Create launch file
"""

def get_positions(listener, modbus, tf, vbase_name, vjob_name):
    listener.exit_script()
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


def main():
    rclpy.init()

    vjob_name = ""
    view_pick = []
    view_place = []
    vbase_pick = []
    vbase_place = []
    with open('config.txt') as json_file:
        data = json.load(json_file)
        vjob_name = data['vjob_name']
        view_pick =  data['view_pick']
        view_place =  data['view_place']
        vbase_pick =  data['vbase_pick']
        vbase_place =  data['vbase_place']
    
    modbus = Modbus.ModbusClass()
    mover = Move.MoveClass()
    listener = Script.ScriptClass()
    tf = Transform.TransformClass()

    tf.add_vbases(vbase_pick, vbase_place)

    home = [0.3, 0.0, 0.3, -3.14159, 0.0, 1.59]
    mover.set_position(home)

    while True:
        mover.set_position(view_pick)
        pick, safepick = get_positions(listener, modbus, tf, "vbase_pick", vjob_name)
        mover.set_position(safepick)
        
        modbus.open_io()
        mover.set_position(pick)
        modbus.close_io()
        mover.set_position(safepick)

        mover.set_position(view_place)
        place, safeplace = get_positions(listener, modbus, tf, "vbase_place", vjob_name)
        mover.set_position(safeplace)
        mover.set_position(place)
        modbus.open_io()
        mover.set_position(safeplace)


if __name__ == '__main__':
    main()

