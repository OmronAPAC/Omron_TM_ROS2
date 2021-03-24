from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='pickplace',
            executable='pickplace',
            name='PickPlaceProgram',
            output='screen',
            emulate_tty=True,
            parameters=[
                {'base_to_pick': [0.4, 0.0, 0.4, -3.14159, 0.0, 1.59]}
            ]
        )
    ])