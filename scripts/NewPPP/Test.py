import rclpy
import time
import json

from libraries import Waiter
from libraries import Move
from libraries import IO
from libraries import Modbus
from libraries import Transform
from libraries import Script



if __name__ == '__main__':
    rclpy.init()
    modbus = Modbus.ModbusClass()
    print(modbus.get_pos())
    time.sleep(1)
    move = Move.MoveClass()
    move.set_position([0.3, 0.0, 0.3, -3.14159, 0.0, 1.59])

