import rclpy
from rclpy.node import Node
from ament_index_python.packages import get_package_share_directory
pp_share = get_package_share_directory('pickplace')
pp_library =  pp_share + '/pickplace/pp_library'

from pp_library import Modbus
from pickplace_msgs.srv import AskModbus


class ModbusService(Node):

    def __init__(self):
        super().__init__('modbus_service')
        self.modbus = Modbus.ModbusClass()
        self.srv = self.create_service(AskModbus, 'ask_modbus', self.ask_modbus_callback)

    def ask_modbus_callback(self, request, response):
        if (request.req == 'get_base'):
            response.position = self.modbus.get_base()
        elif (request.req == 'get_pos'):
            response.position = self.modbus.get_pos()
        elif (request.req == 'init_io'):
            self.modbus.init_io()
        elif (request.req == 'open_io'):
            self.modbus.open_io()
        elif (request.req == 'close_io'):
            self.modbus.close_io()
        return response


def main(args=None):
    rclpy.init(args=args)
    modbus_service = ModbusService()
    rclpy.spin(modbus_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()