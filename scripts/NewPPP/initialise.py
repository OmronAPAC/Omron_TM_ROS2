import rclpy
import time
import json

from libraries import Modbus

from geometry_msgs.msg import TransformStamped, Vector3, Quaternion
from launch import LaunchDescription
from launch import LaunchIntrospector
from launch import LaunchService 
import launch_ros.actions

"""
def launch_driver(ip = '192.168.2.10'):
    ld = LaunchDescription([
        launch_ros.actions.Node(
            package='tm_driver',
            executable='tm_driver',
            output='screen',
            arguments=[ip]
            )
        ])

    print('Launching TM Driver...')

    ls = LaunchService()
    ls.include_launch_description(ld)
    return ls.run()


def get_vbase(basename):
    listener.exit_script()
    waiter.wait_for_complete("vision")
    listener.change_base(basename)
    time.sleep(0.1)
    vbase = Modbus.get_base()
    listener.change_base("RobotBase")
    time.sleep(0.1)

    return vbase
"""

def main():
    modbus = Modbus.ModbusClass()

    input("Set PICK position, then press Enter to continue...")
    pick_position = modbus.get_pos()
    input("Set PLACE position, then press Enter to continue...")
    place_position = modbus.get_pos()
    vbase_name = input("Please enter the vision base name: ")

    config = {
        "init_pick": pick_position,
        "init_place": place_position,
        "vbase_name": vbase_name
    }

    with open('config.txt', 'w') as output:
        json.dump(config, output, indent = 3)


if __name__ == '__main__':
    main()
