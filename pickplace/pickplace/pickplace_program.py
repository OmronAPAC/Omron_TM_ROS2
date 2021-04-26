import rclpy
import time
import sys
import json
from ament_index_python.packages import get_package_share_directory
pp_share = get_package_share_directory('pickplace')
pp_library =  pp_share + '/pickplace/pp_library'

from pp_library import Modbus, Transform, Script, Move
from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter, ParameterValue, ParameterType

"""
TODO:
    - Change the access level (private functions and attributes)
    - Create launch file
"""

def get_positions(listener, modbus, tf, vbase_name, vjob_name):
    listener.exit_script()
    listener.change_base(vjob_name)
    time.sleep(0.1)
    new_vbase = modbus.get_base()
    time.sleep(0.1)
    listener.change_base("RobotBase")
    time.sleep(0.1)
    if (vbase_name == "vbase_pick"):
        return tf.get_picks(new_vbase, vbase_name)
    elif (vbase_name == "vbase_place"):
        return tf.get_places(new_vbase, vbase_name)
    else:
        return new_vbase

def call_set_parameters(node, coordinates):
    # create client
    client = node.create_client(
        SetParameters,
        'destination_node/set_parameters'.format_map(locals()))
  
    # call as soon as ready
    ready = client.wait_for_service(timeout_sec=5.0)
    if not ready:
        raise RuntimeError('Wait for service timed out')

    request = SetParameters.Request()
    param_values = ParameterValue(type = ParameterType.PARAMETER_DOUBLE_ARRAY, double_array_value = coordinates)
    request.parameters = [Parameter(name = 'destination_param', value = param_values)]
    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future) 

    # handle response
    response = future.result()
    if response is None:
        e = future.exception()
        raise RuntimeError(
            'Exception while calling service of node '
            "'{args.node_name}': {e}".format_map(locals()))
    return response

def main():
    rclpy.init()
    pickplace_node = rclpy.create_node('pickplace_node')

    vjob_name = ""
    view_pick = []
    view_place = []
    vbase_pick = []
    vbase_place = []
    with open(pp_share + '/config.txt') as json_file:
        data = json.load(json_file)
        vjob_name = data['vjob_name']
        view_pick =  data['view_pick']
        view_place =  data['view_place']
        vbase_pick =  data['vbase_pick']
        vbase_place =  data['vbase_place']
    
    modbus = Modbus.ModbusClass()
    modbus.start_program()

    mover = Move.MoveClass()
    listener = Script.ScriptClass()
    tf = Transform.TransformClass()

    listener.wait_tm_connect()
    tf.add_vbases(vbase_pick, vbase_place)

    home = [0.3, 0.0, 0.3, -3.14159, 0.0, 1.59]
    mover.set_position(home)

    try:
        while True:
            mover.set_position(view_pick)
            pick, safepick = get_positions(listener, modbus, tf, "vbase_pick", vjob_name)
            call_set_parameters(pickplace_node, pick)
            mover.set_position(safepick)
            
            modbus.open_io()
            mover.set_position(pick)
            modbus.close_io()
            mover.set_position(safepick)

            mover.set_position(view_place)
            place, safeplace = get_positions(listener, modbus, tf, "vbase_place", vjob_name)
            call_set_parameters(pickplace_node, place)
            mover.set_position(safeplace)
            mover.set_position(place)
            modbus.open_io()
            mover.set_position(safeplace)

    except KeyboardInterrupt:
            modbus.stop_program()

    
    

if __name__ == '__main__':
    main()

