import rclpy
import time
from pp_library.TM_Exception import TM_Exception
from tm_msgs.srv import *
from tm_msgs.msg import *
"""
TO DO:
    - Add end effector initialise sequence
    - Figure out how to check for gripper open/close completion instead of using time.sleep(1) (subscribe to feedback states to check io 2 state?)
"""

class PickPlaceClass:
    def __init__(self):
        ###################################################################
        #                          Node init                              #
        ###################################################################
        self.node = rclpy.create_node('pickplace_driver_node')

        ###################################################################
        #                           Error init                            #
        ###################################################################
        self.error = False

        self.error_subscription = self.node.create_subscription(
            FeedbackState,
            'feedback_states',
            self.feedback_callback,
            10)

        ###################################################################
        #                           IO init                               #
        ###################################################################
        
        self.set_io = self.node.create_client(SetIO, "set_io")
        self.io_request = SetIO.Request()
        self.io_request.module = 1
        self.io_request.type = 1
        self.io_request.pin = 0
        

        ###################################################################
        #                          Move init                              #
        ###################################################################
        self.set_pos = self.node.create_client(SetPositions, "set_positions")
        self.move_request = SetPositions.Request()
        self.move_request.motion_type = 2 #SetPositions.Request.PTP_T
        self.move_request.velocity = 3.14
        self.move_request.acc_time = 0.1
        self.move_request.blend_percentage = 10
        self.move_request.fine_goal = False

        self.set_event = self.node.create_client(SetEvent, "set_event")
        while not self.set_event.wait_for_service(timeout_sec=5.0):
            self.node.get_logger().info('set_event service not available, waiting again...')
        self.event_request = SetEvent.Request()
        self.event_request.func = 1 # TAG mode
        self.event_request.arg0 = 3 # queuetag number
        self.event_request.arg1 = 1 # 1 = wait, 0 = no wait
        
        self.ask_sta = self.node.create_client(AskSta, "ask_sta")
        while not self.ask_sta.wait_for_service(timeout_sec=5.0):
            self.node.get_logger().info('ask_sta service not available, waiting again...')
        self.sta_request = AskSta.Request()
        self.sta_request.wait_time = 20.0



        ###################################################################
        #                          Script init                            #
        ###################################################################

        self.send_script = self.node.create_client(SendScript, "send_script")

        self.script_request = SendScript.Request()
        
        self.isNotDone = True
        self.isNotConnected = True
        self.subscription = self.node.create_subscription(SctResponse, 'sct_response', self.listener_callback, 10)
        self.subscription  # prevent unused variable warning


    ###################################################################
    #                         Error callback                          #
    ###################################################################
    """Assigns the error message when an exception occursUses the service client for IO control with modbus to open the end effector"""
    def feedback_callback(self, msg):
        self.error_code = msg.error_code
        if msg.robot_error == True:
            self.error_code = msg.error_code
            self.error = True
            self.error_msg = "TM Robot Error."
        if msg.project_run == False:
            self.error = True
            self.error_msg = "Project is not running!"
        if msg.e_stop == True:
            self.error = True
            self.error_msg = "Emergency stop activated!"

    ###################################################################
    #                             IO fn                               #
    ###################################################################
    """Uses the service client for IO control with modbus to open the end effector"""
    def open(self):
        if self.error:
            raise TM_Exception(self.error_msg, self.error_code)
        self.io_request.state = 1.0
        while not self.set_io.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('set_io service not available, waiting again...')
        self.set_io.call_async(self.io_request)
        time.sleep(1)

    """Uses the service client for IO control with modbus to close the end effector"""
    def close(self):
        if self.error:
            raise TM_Exception(self.error_msg, self.error_code)
        self.io_request.state = 0.0
        while not self.set_io.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('set_io service not available, waiting again...')
        self.set_io.call_async(self.io_request)
        time.sleep(1)
            

    ###################################################################
    #                           Move fn                               #
    ###################################################################
    """Uses service client to set cartesian position for TM robot to move to"""
    def set_position(self, position):
        if self.error:
            raise TM_Exception(self.error_msg, self.error_code)
        self.move_request.positions = position
        while not self.set_pos.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('set_positions service not available, waiting again...')
        self.set_pos.call_async(self.move_request)
        time.sleep(0.1) # IMPORTANT or the order of requests sent will be wrong
        self.set_event.call_async(self.event_request)
        time.sleep(0.1)
        self.future = self.ask_sta.call_async(self.sta_request)
        while not self.future.done():
            # Raise exception during motion if error occurs
            if self.error:
                raise TM_Exception(self.error_msg, self.error_code)
            rclpy.spin_once(self.node)



    ###################################################################
    #                          Script fn                              #
    ###################################################################
    """Checks if TM Robot is done initializing"""
    def listener_callback(self, msg):
        if (msg.script == 'Listen1'):
            self.isNotDone = False
        if (msg.script == 'OK'):
            self.isNotConnected = False

    """Wait for the vision job to complete and the TM program to re-enter the Listen Node"""
    def wait_for_complete(self):
        self.isNotDone = True
        while (self.isNotDone):
            if self.error:
                raise TM_Exception(self.error_msg, self.error_code)
            rclpy.spin_once(self.node)

    """Waits until TM Robot is connected"""
    def wait_tm_connect(self):
        if self.error:
            raise TM_Exception(self.error_msg, self.error_code)
        while (self.isNotConnected): 
            if self.error:
                raise TM_Exception(self.error_msg, self.error_code)
            self.isNotConnected = True
            self.script_request.script = ""
            resp = self.send_script.call_async(self.script_request)
            rclpy.spin_once(self.node)
            time.sleep(1)


    """Makes TM Robot exit listen node to the Pass route before """
    def exit_script(self):
        if self.error:
            raise TM_Exception(self.error_msg, self.error_code)
        self.script_request.script = "ScriptExit()"
        while not self.send_script.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('send_script service not available, waiting again...')
        resp = self.send_script.call_async(self.script_request)
        self.wait_for_complete()

    """Uses the Listen Node to change the Base of the TM Robot"""
    def change_base(self, base):
        if self.error:
            raise TM_Exception(self.error_msg, self.error_code)
        self.script_request.script = "ChangeBase(\"" + base + "\")"
        while not self.send_script.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('send_script service not available, waiting again...')
        resp = self.send_script.call_async(self.script_request)
  

    """Uses the Listen Node to Stop the TM Robot and clear the buffer"""
    def stop_and_clear(self):
        if self.error:
            raise TM_Exception(self.error_msg, self.error_code)
        self.script_request.script = "StopAndClearBuffer()"
        while not self.send_script.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('send_script service not available, waiting again...')
        resp = self.send_script.call_async(self.script_request)




    
    



