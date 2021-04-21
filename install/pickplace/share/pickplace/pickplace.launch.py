import os
import sys
import yaml
import json
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def load_file(package_name, file_path):
    package_path = get_package_share_directory(package_name)
    absolute_file_path = os.path.join(package_path, file_path)

    try:
        with open(absolute_file_path, 'r') as file:
            return file.read()
    except EnvironmentError: # parent of IOError, OSError *and* WindowsError where available
        return None


def generate_launch_description():
    args = []
    length = len(sys.argv)
    if (len(sys.argv) >= 5):
        i = 4
        while i < len(sys.argv):
            args.append(sys.argv[i])
            i = i + 1

    # Component yaml files are grouped in separate namespaces
    robot_description_config = load_file('tmr_description', 'urdf/tm5-900.urdf')
    robot_description = {'robot_description' : robot_description_config}

    # RViz
    rviz_config_file = get_package_share_directory('rviz_tm') + "/rviz_tm.rviz"
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='log',
        arguments=['-d', rviz_config_file],
        parameters=[robot_description],
        #prefix="bash -c 'sleep 5.0; $0 $@'"
        )

    # Static TF
    static_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='world_publisher',
        output='log',
        arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'world', 'base']
    )

    pp_share = get_package_share_directory('pickplace') + '/config.txt'
    view_pick = []
    view_place = []
    with open(pp_share) as json_file:
        data = json.load(json_file)
        view_pick =  data['view_pick']
        view_place =  data['view_place']

    static_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='viewpick_publisher',
        output='log',
        arguments= view_pick + ['base', 'view_pick']
    )
    static_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='viewplace_publisher',
        output='log',
        arguments= view_place + ['base', 'view_place']
    )

    # Publish TF
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='log',
        parameters=[robot_description],
        #prefix="bash -c 'sleep 5.0; $0 $@'"
    )

    # TM Driver
    tm_driver_node = Node(
        package='tm_driver',
        executable='tm_driver',
        #name='tm_driver',
        output='screen',
        arguments=[str(args)[12:-2]],
        #prefix="bash -c 'sleep 4.0; $0 $@' "
    )

    # Pickplace Program
    pickplace_node = Node(
        package='pickplace',
        executable='pickplace',
        output='screen'
    )

    return LaunchDescription([ tm_driver_node, pickplace_node, robot_state_publisher, static_tf, rviz_node ])
