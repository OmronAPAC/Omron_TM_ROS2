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

def get_positions(cmd, vbase_name):
    listener.exit_script()
    waiter.wait_for_complete("vision")
    listener.change_base(vbase_name)
    time.sleep(0.1)
    new_vbase = modbus.get_base()
    listener.change_base("RobotBase")
    time.sleep(0.1)
    if (cmd == "pick"):
        return tf.get_picks(new_vbase)
    elif (cmd == "place"):
        return tf.get_places(new_vbase)
    else:
        return new_vbase


if __name__ == '__main__':
    rclpy.init()
    node = rclpy.create_node("PickPlaceNode")

    init_pick = []
    init_place = []
    vbase_name = ""
    with open('config.txt') as json_file:
        data = json.load(json_file)
        init_pick =  data['init_pick']
        init_place =  data['init_place']
        vbase_name = data['vbase_name']


    waiter = Waiter.WaiterClass()
    mover = Move.MoveClass()
    io = IO.IOClass()
    modbus = Modbus.ModbusClass()
    listener = Script.ScriptClass()
    tf = Transform.TransformClass()


    home = [0.3, 0.0, 0.3, -3.14159, 0.0, 1.59]
    """
    pick = [0.52, -0.19, 0.0, -3.14159, 0.0, 1.59]
    place = [0.4, 0.3, 0.2, -3.14159, 0.0, 1.59]
    """
    #modbus.start_program()
    mover.set_position(home)

    tf.add_pick_and_place(init_pick, init_place, get_positions("null", vbase_name))

    while True:
        pick, safepick = get_positions("pick", vbase_name)

        mover.set_position(safepick)
        
        io.open()
        waiter.wait_for_complete("io") # CHANGE THIS
        mover.set_position(pick)
        io.close()
        waiter.wait_for_complete("io") # CHANGE THIS
        mover.set_position(safepick)
        
        place, safeplace = get_positions("place", vbase_name)

        mover.set_position(safeplace)
        mover.set_position(place)
        io.open()
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