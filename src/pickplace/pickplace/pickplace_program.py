import rclpy
import time
import sys
import json
from ament_index_python.packages import get_package_share_directory
pp_share = get_package_share_directory('pickplace')
pp_library =  pp_share + '/pickplace/pp_library'

from pp_library import Modbus, Transform, Script, Move, TM_Exception
from rcl_interfaces.srv import SetParameters
from rcl_interfaces.msg import Parameter, ParameterValue, ParameterType
from std_msgs.msg import Bool
from pickplace_msgs.srv import AskModbus
from pickplace_msgs.msg import MoveCube
pp_library =  get_package_share_directory('pickplace') + '/pickplace/pp_library'

from pp_library import Pickplace_Driver, Transform

# Get the new pick or place positions w.r.t the new vision base
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


# Sets the coordinates of the destination (pick/place) to a parameter in a 
# publisher, to be displayed in RViz
def call_set_parameters(node, coordinates):
    client = node.create_client(
        SetParameters,
        'destination_node/set_parameters'.format_map(locals()))
  
    ready = client.wait_for_service(timeout_sec=5.0)
    if not ready:
        raise RuntimeError('Wait for service timed out')

    request = SetParameters.Request()
    param_values = ParameterValue(type = ParameterType.PARAMETER_DOUBLE_ARRAY, double_array_value = coordinates)
    request.parameters = [Parameter(name = 'destination_param', value = param_values)]
    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future) 

    response = future.result()
    if response is None:
        e = future.exception()
        raise RuntimeError(
            'Exception while calling service of node '
            "'{args.node_name}': {e}".format_map(locals()))
    return response

# Changes the parent of the marker to change its apparent position in RViz
def change_marker(parent, coordinates, publisher, msg):
    msg.parent = parent
    msg.coordinates = coordinates
    publisher.publish(msg)

def main():
    rclpy.init()
    pickplace_node = rclpy.create_node('pickplace_node')
    flagpublisher = pickplace_node.create_publisher(MoveCube, 'objectflag', 10)
    vjob_name = ""
    view_pick = []
    view_place = []
    vbase_pick = []
    vbase_place = []
    with open(pp_share + '/config.txt') as json_file:
        data = json.load(json_file)
        home_pos = data['home_pos']
        vjob_name = data['vjob_name']
        view_pick = data['view_pick']
        view_place = data['view_place']
        vbase_pick = data['vbase_pick']
        vbase_place = data['vbase_place']
    
    modbus = Modbus.ModbusClass()
    modbus.start_program()
    pickplace_driver = Pickplace_Driver.PickPlaceClass()
    
    cli = pickplace_node.create_client(AskModbus, 'ask_modbus')
    while not cli.wait_for_service(timeout_sec=1.0):
        print("Service not available...")
    req = AskModbus.Request()
    req.req = 'init_io'
    future = cli.call_async(req)
    rclpy.spin_until_future_complete(pickplace_node, future)
    tf = Transform.TransformClass()

    pickplace_driver.wait_tm_connect()
    tf.add_vbases(vbase_pick, vbase_place)
    msg = MoveCube()

    try:
        while True:
            pickplace_driver.set_position(view_pick)
            pick, safepick = get_positions(pickplace_driver, modbus, tf, "vbase_pick", vjob_name)
            call_set_parameters(pickplace_node, pick)
            change_marker("base", pick, flagpublisher, msg)
            pickplace_driver.set_position(safepick)
            
            pickplace_driver.open()
            pickplace_driver.set_position(pick)
            pickplace_driver.close()
            change_marker("EOAT", pick, flagpublisher, msg)
            pickplace_driver.set_position(safepick)

            pickplace_driver.set_position(view_place)
            place, safeplace = get_positions(pickplace_driver, modbus, tf, "vbase_place", vjob_name)
            call_set_parameters(pickplace_node, place)
            pickplace_driver.set_position(safeplace)
            pickplace_driver.set_position(place)
            pickplace_driver.open()
            change_marker("base", place, flagpublisher, msg)
            pickplace_driver.set_position(safeplace)
    except TM_Exception.TM_Exception as e:
            pickplace_node.get_logger().error(str(e))
            modbus.stop_program()
    except KeyboardInterrupt:
            modbus.stop_program()

    
    

if __name__ == '__main__':
    main()

