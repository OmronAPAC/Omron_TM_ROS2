import rclpy
import time
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
    def feedback_callback(self, msg):
        if (msg.project_run == False) or (msg.robot_error == True) or (msg.e_stop == True):
            self.error = True

    ###################################################################
    #                             IO fn                               #
    ###################################################################
    def open(self):
        if not self.error:
            self.io_request.state = 1.0
            while not self.set_io.wait_for_service(timeout_sec=1.0):
                self.node.get_logger().info('set_io service not available, waiting again...')
            self.set_io.call_async(self.io_request)
            time.sleep(1)

    def close(self):
        if not self.error:
            self.io_request.state = 0.0
            while not self.set_io.wait_for_service(timeout_sec=1.0):
                self.node.get_logger().info('set_io service not available, waiting again...')
            self.set_io.call_async(self.io_request)
            time.sleep(1)
            

    ###################################################################
    #                           Move fn                               #
    ###################################################################
    def set_position(self, position):
        if not self.error:
            self.move_request.positions = position
            while not self.set_pos.wait_for_service(timeout_sec=1.0):
                self.node.get_logger().info('set_positions service not available, waiting again...')
            self.set_pos.call_async(self.move_request)
            time.sleep(0.1) # IMPORTANT or the order of requests sent will be wrong
            self.set_event.call_async(self.event_request)
            time.sleep(0.1)
            self.future = self.ask_sta.call_async(self.sta_request)

            while not self.future.done():
                rclpy.spin_once(self.node)



    ###################################################################
    #                          Script fn                              #
    ###################################################################
    def listener_callback(self, msg):
        if (msg.script == 'Listen1'):
            self.isNotDone = False
        if (msg.script == 'OK'):
            self.isNotConnected = False

    # Wait for the vision job to complete and the TM program to re-enter the Listen Node
    def wait_for_complete(self):
        self.isNotDone = True
        while (self.isNotDone):
            rclpy.spin_once(self.node)


    def wait_tm_connect(self):
        if not self.error:
            while (self.isNotConnected):
                self.isNotConnected = True
                self.script_request.script = ""
                resp = self.send_script.call_async(self.script_request)
                rclpy.spin_once(self.node)
                time.sleep(1)


    def exit_script(self):
        if not self.error:
            self.script_request.script = "ScriptExit()"
            while not self.send_script.wait_for_service(timeout_sec=1.0):
                self.node.get_logger().info('send_script service not available, waiting again...')
            resp = self.send_script.call_async(self.script_request)
            self.wait_for_complete()


    def change_base(self, base):
        if not self.error:
            self.script_request.script = "ChangeBase(\"" + base + "\")"
            while not self.send_script.wait_for_service(timeout_sec=1.0):
                self.node.get_logger().info('send_script service not available, waiting again...')
            resp = self.send_script.call_async(self.script_request)
  

    def stop_and_clear(self):
        if not self.error:
            self.script_request.script = "StopAndClearBuffer()"
            while not self.send_script.wait_for_service(timeout_sec=1.0):
                self.node.get_logger().info('send_script service not available, waiting again...')
            resp = self.send_script.call_async(self.script_request)




    
    



