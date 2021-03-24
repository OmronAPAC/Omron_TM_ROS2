import rclpy
import rclpy.node
from rclpy.exceptions import ParameterNotDeclaredException
from rcl_interfaces.msg import ParameterType

class MinimalParam(rclpy.node.Node):
    def __init__(self):
        super().__init__('minimal_param_node')
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        from rcl_interfaces.msg import ParameterDescriptor
        my_parameter_descriptor = ParameterDescriptor(type=ParameterType.PARAMETER_STRING,
                                                      description='This parameter is mine!')

        self.declare_parameter('HEEHEE',
                               [0.52, -0.19, 0.0, -3.14159, 0.0, 1.59],
                               my_parameter_descriptor)

    def timer_callback(self):
        my_param = self.get_parameter('HEEHEE').get_parameter_value().string_value

        self.get_logger().info('Hello %s!' % my_param)


def main():
    rclpy.init()
    node = MinimalParam()
    rclpy.spin(node)

if __name__ == '__main__':
    main()