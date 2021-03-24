import rclpy
import time
import sys

from libraries import Waiter
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
    - Get Params
"""

def get_positions(cmd):
    listener.exit_script()
    waiter.wait_for_complete("vision")
    listener.change_base("vision_ros2_landmark_fixed")
    time.sleep(0.1)
    new_vbase = modbus.get_base()
    listener.change_base("RobotBase")
    time.sleep(0.1)
    if (cmd == "pick"):
        return tf.get_picks(new_vbase)
    elif (cmd == "place"):
        return tf.get_places(new_vbase)
    else:
        return False # CHANGE THIS



def main():
    rclpy.init()
    node = rclpy.create_node("PickPlaceNode")
    node.declare_parameter('pick', [0.52, -0.19, 0.0, -3.14159, 0.0, 1.59])

    my_param = node.get_parameter('pick').get_parameter_value().double_array_value
    node.get_logger().info('Hello %s!' % list(my_param))
    
    waiter = Waiter.WaiterClass()
    mover = Move.MoveClass()
    IO = IO.IOClass()
    modbus = Modbus.ModbusClass()
    listener = Script.ScriptClass()
    tf = Transform.TransformClass()

    home = [0.4, 0.0, 0.4, -3.14159, 0.0, 1.59]
    pick = [0.52, -0.19, 0.0, -3.14159, 0.0, 1.59]
    place = [0.4, 0.3, 0.2, -3.14159, 0.0, 1.59]

    modbus.start_program()
    time.sleep(3)

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

if __name__ == '__main__':
    main()
    



"""
- Make a class for sending scripts (IMPLEMENTED, ADD IT IN)
- Check if get_base gives the correct base
- Set the pick and place positions relative to the vision base

[320.17999267578125, 4.130000114440918, 3.4000000953674316, -179.86000061035156, 0.5, -89.23999786376953]
[320.17999267578125, 4.130000114440918, 3.4000000953674316, -179.86000061035156, 0.5, -89.23999786376953]
[274.0, -51.59000015258789, 3.4100000858306885, -179.99000549316406, 0.3499999940395355, -77.5999984741211]
"""