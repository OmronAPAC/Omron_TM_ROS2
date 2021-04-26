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

def call_set_parameters(node, coordinates):
    # create client
    client = node.create_client(
        SetParameters,
        'visionbase_node/set_parameters'.format_map(locals()))
  
    # call as soon as ready
    ready = client.wait_for_service(timeout_sec=5.0)
    if not ready:
        raise RuntimeError('Wait for service timed out')

    request = SetParameters.Request()
    param_values = ParameterValue(type = ParameterType.PARAMETER_DOUBLE_ARRAY, double_array_value = coordinates)
    request.parameters = [Parameter(name = 'visionbase_frame', value = param_values)]
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
    node = rclpy.create_node('test')

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

    potato = [0.3, 0.0, 0.3, -3.14159, 0.0, 1.59]
    call_set_parameters(node, potato)


    
    

if __name__ == '__main__':
    main()

