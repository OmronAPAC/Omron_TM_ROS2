import rclpy
import time
import sys
import json
import math
from math import radians

from libraries import Waiter
from libraries import Move
from libraries import IO
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
    t_end = time.time() + 1
    while time.time() < t_end:
        positions.append(modbus.get_pos())
        if (not max_rate):
            time.sleep(0.1)

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

    modbus.start_program()
    print("Start TM Driver now!")
    time.sleep(3)
    move = Move.MoveClass()

    move.set_position([0.25, -0.35, 0.30, 2.57, 0.0, 0.41])
    move.set_position([0.25, -0.35, 0.25, 2.61, 0.0, 0.369])
    move.set_position([0.30, -0.35, 0.25, 2.67, 0.0, 0.333])

    

"""
[0.25053579711914065, -0.3518865966796875, 0.26249246215820315, 2.5706063885029513, -0.1355883055119569, 0.4173074891193833], 
[0.22473092651367188, -0.3560032348632813, 0.24809053039550782, 2.6197755327607575, -0.09701182623329228, 0.36903576356990686], 
[0.20163766479492187, -0.35540664672851563, 0.23374803161621094, 2.671362294656137, -0.05590593896910844, 0.33388929429483133]
"""