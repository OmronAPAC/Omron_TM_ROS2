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
    - CHANGE THE IO
    - Make sense of the metre/mm and deg/rad shit
    - Test blending for motion
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
    node = rclpy.create_node("PickPlaceNode")

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
    #modbus.start_program()

    waiter = Waiter.WaiterClass()
    mover = Move.MoveClass()
    io = IO.IOClass()
    listener = Script.ScriptClass()
    tf = Transform.TransformClass()

    tf.add_vbases(vbase_pick, vbase_place)

    home = [0.3, 0.0, 0.3, -3.14159, 0.0, 1.59]
    """
    pick = [0.52, -0.19, 0.0, -3.14159, 0.0, 1.59]
    place = [0.4, 0.3, 0.2, -3.14159, 0.0, 1.59]

    [-7.3963594399684144e-06, -4.510994414622327e-06, -6.983935811755021e-06, -0.00235, 0.00233, -0.05412]
    [5.2753929178495256e-05, 0.00010902219917894851, -8.75984270292442e-05, -0.00067, -0.00035, -0.05475]
    """
    mover.set_position(home)


    while True:
        #mover.set_position([0.45870121753581106, 0.13466882171274527, 0.002098824908049317, 3.13485, -0.01156, -1.52058])
        mover.set_position(view_pick)
        pick, safepick = get_positions("vbase_pick", vjob_name)
        mover.set_position(safepick)
        
        io.open()
        waiter.wait_for_complete("io") # CHANGE THIS
        mover.set_position(pick)
        io.close()
        waiter.wait_for_complete("io") # CHANGE THIS
        mover.set_position(safepick)
        
        mover.set_position(view_place)
        place, safeplace = get_positions("vbase_place", vjob_name)
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
[446.3699951171875, -138.80999755859375, 53.849998474121094, -166.94000244140625, 2.990000009536743, -98.88999938964844]
[457.25, 139.61000061035156, 3.3399999141693115, -179.2899932861328, -0.18000000715255737, -94.80000305175781]