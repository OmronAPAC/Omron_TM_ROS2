import rclpy
import time
import sys
import json
import math
from math import radians

from libraries import Script, Modbus, MoveSpecial

def main(args=None):
    rclpy.init(args=args)
    script = Script.ScriptClass()
    movespecial = MoveSpecial.MoveClass()

    #script.socket_read()
    #script.stop_and_clear()
    
    movespecial.set_position_special([0.35,-0.16,0.28,3.037,0.339,1.160], 3)
    movespecial.set_position_special([0.495,-0.009,0.365,2.906,-0.035,1.010], 5)
    movespecial.set_position_special([0.465,0.0049,0.1976,-3.044,0.0668,1.4293], 4)
    movespecial.asksta()
    

if __name__ == '__main__':
    main()