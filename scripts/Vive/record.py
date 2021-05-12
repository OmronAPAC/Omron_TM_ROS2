import rclpy
import time
import sys
import json
import math
from math import radians

from libraries import Move
from libraries import Modbus
from libraries import Transform
from libraries import Script


def ready_up():
    i = 3
    while (i > 0):
        print("Start in " + str(i) + " ...")
        i -= 1
        time.sleep(1)

        
def record_modbus(max_rate = False):
    positions = []
    t_end = time.time() + 6.5
    while time.time() < t_end:
        positions.append(convert_units(modbus.get_pos()))
        if (not max_rate):
            time.sleep(0.05) # 20 Hz

    return positions


def convert_units(obj):
        x = obj[0] * 0.001
        y = obj[1] * 0.001
        z = obj[2] * 0.001
        roll = radians(obj[3])
        pitch = radians(obj[4])
        yaw = radians(obj[5])

        return [x, y, z, roll, pitch, yaw]

if __name__ == '__main__':
    rclpy.init()
    modbus = Modbus.ModbusClass()
    #modbus.init_io()
    #ready_up()
    positions = record_modbus(True)
    print(len(positions))
    #print(positions)
    # Output the results in a json file
    with open('positions.txt', 'w') as output:
        json.dump(positions, output, indent = 2)


    """
    print("Start TM Driver now!")
    time.sleep(1)
    modbus.start_program()
    time.sleep(3)
    move = Move.MoveClass()
    
    for x in positions:
        move.set_position(x)
    """

