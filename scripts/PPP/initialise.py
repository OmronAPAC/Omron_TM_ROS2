import rclpy
import time

from libraries import Modbus

from geometry_msgs.msg import TransformStamped, Vector3, Quaternion

from launch import LaunchDescription
from launch import LaunchIntrospector
from launch import LaunchService 
import launch_ros.actions


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
    modbus = Modbus.ModbusClass()

    home = [0.4, 0.0, 0.4, -3.14159, 0.0, 1.59]
    pick = [0.52, -0.19, 0.0, -3.14159, 0.0, 1.59]
    place = [0.4, 0.3, 0.2, -3.14159, 0.0, 1.59]

    input("Set PICK position, then press Enter to continue...")
    pick_position = modbus.get_pos()
    print(pick_position)
    input("Set PLACE position, then press Enter to continue...")
    place_position = modbus.get_pos()
    print(place_position)

    #launch_pickplace(pick_position, place_position)

if __name__ == '__main__':
    main()

 

"""
    test = TransformStamped()
    test.transform.translation = Vector3(x = 0.4, y = 0.3, z = 0.2)
    test.transform.rotation = Quaternion(x = 0.0, y = 0.0, z = 0.0, w = 1.0)
    print(test)
"""

