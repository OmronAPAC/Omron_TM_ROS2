import rclpy
import time

from libraries import Modbus

from geometry_msgs.msg import TransformStamped, Vector3, Quaternion

from launch import LaunchDescription
from launch import LaunchIntrospector
from launch import LaunchService 
import launch_ros.actions

"""
    - Create entry point and launch file for this program!!!
"""

def launch_pickplace(pick_position, place_position):
    #Run TM Driver and pickplace_program via launch
    ld = LaunchDescription([
        launch_ros.actions.Node(
            package='tm_driver',
            executable='tm_driver',
            output='screen',
            arguments=['192.168.2.10']
            ),
        launch_ros.actions.Node(
            package='pickplace',
            executable='pickplace',
            name='PickPlaceProgram',
            output='screen',
            emulate_tty=True,
            parameters=[
                {'pick': pick_position},
                {'place': place_position}
            ]
            )
        ])

    print('Launching TM Driver...')

    ls = LaunchService()
    ls.include_launch_description(ld)
    return ls.run()


def main():
    Modbus = Modbus.ModbusClass()

    input("Set PICK position, then press Enter to continue...")
    pick_position = Modbus.get_pos()
    input("Set PLACE position, then press Enter to continue...")
    place_position = Modbus.get_pos()

    #print('%.2f' % pick_position)
    #print('%.2f' % place_position)

    #launch_pickplace(pick_position, place_position)

if __name__ == '__main__':
    main()


