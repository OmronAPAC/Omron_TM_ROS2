import rclpy
import time
import sys
import json
import math
from math import radians

from libraries import Script

def main(args=None):
    rclpy.init(args=args)
    script = Script.ScriptClass()

    script.com_read()


if __name__ == '__main__':
    main()