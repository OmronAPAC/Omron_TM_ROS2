import os
import sys
import json
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

pp_share = get_package_share_directory('pickplace')
pp_library =  pp_share + '/pickplace/pp_library'

from pp_library import Transform

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

    tf = Transform.TransformClass()

    # Component yaml files are grouped in separate namespaces
    robot_description_config = load_file('tmr_description', 'urdf/tm5-900.urdf')
    #robot_description_config = load_file('tm_models', 'urdf/tm12.urdf')
    robot_description = {'robot_description' : robot_description_config}

    pp_config = get_package_share_directory('pickplace') + '/config.txt'
    view_pick = []
    view_place = []
    with open(pp_config) as json_file:
        data = json.load(json_file)
        view_pick =  data['view_pick']
        view_place =  data['view_place']
    view_pick = tf.rpy_to_ypr(view_pick)
    view_place = tf.rpy_to_ypr(view_place)
    view_pick = [str(i) for i in view_pick] + ['base', 'view_pick']
    view_place = [str(i) for i in view_place] + ['base', 'view_place']
  

    # RViz
    rviz_config_file = get_package_share_directory('pickplace') + "/config.rviz"
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
    static_world = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='world_publisher',
        output='log',
        arguments=['0.0', '0.0', '0.0', '0.0', '0.0', '0.0', 'base', 'world']
    )

    static_viewpick = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='viewpick_publisher',
        output='log',
        arguments= view_pick
    )
    
    static_viewplace = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='viewplace_publisher',
        output='log',
        arguments= view_place
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
        #prefix=["bash -c 'sleep 6.0; $0 $@' "]
    )
        

    # Pickplace Program
    pickplace_node = Node(
        package='pickplace',
        executable='pickplace',
        output='screen'
    )

    # Marker Publisher
    marker_publisher_node = Node(
        package='pp_marker',
        executable='marker',
        output='screen'
    )
    
    # Destination Publisher
    destination_publisher_node = Node(
        package='pickplace',
        executable='destination_publisher',
        output='screen'
    )

    modbus_server_node = Node(
        package='pickplace',
        executable='modbus_server',
        output='screen',
    )
    
    static_viewpick = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='viewpick_publisher',
        output='log',
        arguments= view_pick
    )
    
    static_viewplace = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='viewplace_publisher',
        output='log',
        arguments= view_place
    )

    return LaunchDescription([ tm_driver_node, pickplace_node, robot_state_publisher, 
        static_world, rviz_node, marker_publisher_node, destination_publisher_node, modbus_server_node,
        static_viewpick, static_viewplace])

