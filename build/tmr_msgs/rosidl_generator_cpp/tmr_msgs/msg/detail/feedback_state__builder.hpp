// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:msg/FeedbackState.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__FEEDBACK_STATE__BUILDER_HPP_
#define TMR_MSGS__MSG__DETAIL__FEEDBACK_STATE__BUILDER_HPP_

#include "tmr_msgs/msg/detail/feedback_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace msg
{

namespace builder
{

class Init_FeedbackState_error_content
{
public:
  explicit Init_FeedbackState_error_content(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::msg::FeedbackState error_content(::tmr_msgs::msg::FeedbackState::_error_content_type arg)
  {
    msg_.error_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_ee_analog_input
{
public:
  explicit Init_FeedbackState_ee_analog_input(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_error_content ee_analog_input(::tmr_msgs::msg::FeedbackState::_ee_analog_input_type arg)
  {
    msg_.ee_analog_input = std::move(arg);
    return Init_FeedbackState_error_content(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_ee_analog_output
{
public:
  explicit Init_FeedbackState_ee_analog_output(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_ee_analog_input ee_analog_output(::tmr_msgs::msg::FeedbackState::_ee_analog_output_type arg)
  {
    msg_.ee_analog_output = std::move(arg);
    return Init_FeedbackState_ee_analog_input(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_ee_digital_input
{
public:
  explicit Init_FeedbackState_ee_digital_input(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_ee_analog_output ee_digital_input(::tmr_msgs::msg::FeedbackState::_ee_digital_input_type arg)
  {
    msg_.ee_digital_input = std::move(arg);
    return Init_FeedbackState_ee_analog_output(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_ee_digital_output
{
public:
  explicit Init_FeedbackState_ee_digital_output(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_ee_digital_input ee_digital_output(::tmr_msgs::msg::FeedbackState::_ee_digital_output_type arg)
  {
    msg_.ee_digital_output = std::move(arg);
    return Init_FeedbackState_ee_digital_input(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_cb_analog_input
{
public:
  explicit Init_FeedbackState_cb_analog_input(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_ee_digital_output cb_analog_input(::tmr_msgs::msg::FeedbackState::_cb_analog_input_type arg)
  {
    msg_.cb_analog_input = std::move(arg);
    return Init_FeedbackState_ee_digital_output(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_cb_analog_output
{
public:
  explicit Init_FeedbackState_cb_analog_output(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_cb_analog_input cb_analog_output(::tmr_msgs::msg::FeedbackState::_cb_analog_output_type arg)
  {
    msg_.cb_analog_output = std::move(arg);
    return Init_FeedbackState_cb_analog_input(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_cb_digital_input
{
public:
  explicit Init_FeedbackState_cb_digital_input(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_cb_analog_output cb_digital_input(::tmr_msgs::msg::FeedbackState::_cb_digital_input_type arg)
  {
    msg_.cb_digital_input = std::move(arg);
    return Init_FeedbackState_cb_analog_output(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_cb_digital_output
{
public:
  explicit Init_FeedbackState_cb_digital_output(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_cb_digital_input cb_digital_output(::tmr_msgs::msg::FeedbackState::_cb_digital_output_type arg)
  {
    msg_.cb_digital_output = std::move(arg);
    return Init_FeedbackState_cb_digital_input(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_robot_light
{
public:
  explicit Init_FeedbackState_robot_light(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_cb_digital_output robot_light(::tmr_msgs::msg::FeedbackState::_robot_light_type arg)
  {
    msg_.robot_light = std::move(arg);
    return Init_FeedbackState_cb_digital_output(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_ma_mode
{
public:
  explicit Init_FeedbackState_ma_mode(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_robot_light ma_mode(::tmr_msgs::msg::FeedbackState::_ma_mode_type arg)
  {
    msg_.ma_mode = std::move(arg);
    return Init_FeedbackState_robot_light(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_project_speed
{
public:
  explicit Init_FeedbackState_project_speed(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_ma_mode project_speed(::tmr_msgs::msg::FeedbackState::_project_speed_type arg)
  {
    msg_.project_speed = std::move(arg);
    return Init_FeedbackState_ma_mode(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_error_code
{
public:
  explicit Init_FeedbackState_error_code(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_project_speed error_code(::tmr_msgs::msg::FeedbackState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FeedbackState_project_speed(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_camera_light
{
public:
  explicit Init_FeedbackState_camera_light(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_error_code camera_light(::tmr_msgs::msg::FeedbackState::_camera_light_type arg)
  {
    msg_.camera_light = std::move(arg);
    return Init_FeedbackState_error_code(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_e_stop
{
public:
  explicit Init_FeedbackState_e_stop(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_camera_light e_stop(::tmr_msgs::msg::FeedbackState::_e_stop_type arg)
  {
    msg_.e_stop = std::move(arg);
    return Init_FeedbackState_camera_light(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_safetyguard_a
{
public:
  explicit Init_FeedbackState_safetyguard_a(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_e_stop safetyguard_a(::tmr_msgs::msg::FeedbackState::_safetyguard_a_type arg)
  {
    msg_.safetyguard_a = std::move(arg);
    return Init_FeedbackState_e_stop(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_project_pause
{
public:
  explicit Init_FeedbackState_project_pause(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_safetyguard_a project_pause(::tmr_msgs::msg::FeedbackState::_project_pause_type arg)
  {
    msg_.project_pause = std::move(arg);
    return Init_FeedbackState_safetyguard_a(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_project_run
{
public:
  explicit Init_FeedbackState_project_run(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_project_pause project_run(::tmr_msgs::msg::FeedbackState::_project_run_type arg)
  {
    msg_.project_run = std::move(arg);
    return Init_FeedbackState_project_pause(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_robot_error
{
public:
  explicit Init_FeedbackState_robot_error(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_project_run robot_error(::tmr_msgs::msg::FeedbackState::_robot_error_type arg)
  {
    msg_.robot_error = std::move(arg);
    return Init_FeedbackState_project_run(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_robot_link
{
public:
  explicit Init_FeedbackState_robot_link(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_robot_error robot_link(::tmr_msgs::msg::FeedbackState::_robot_link_type arg)
  {
    msg_.robot_link = std::move(arg);
    return Init_FeedbackState_robot_error(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_tcp_force
{
public:
  explicit Init_FeedbackState_tcp_force(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_robot_link tcp_force(::tmr_msgs::msg::FeedbackState::_tcp_force_type arg)
  {
    msg_.tcp_force = std::move(arg);
    return Init_FeedbackState_robot_link(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_tcp_speed
{
public:
  explicit Init_FeedbackState_tcp_speed(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_tcp_force tcp_speed(::tmr_msgs::msg::FeedbackState::_tcp_speed_type arg)
  {
    msg_.tcp_speed = std::move(arg);
    return Init_FeedbackState_tcp_force(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_tool_pose
{
public:
  explicit Init_FeedbackState_tool_pose(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_tcp_speed tool_pose(::tmr_msgs::msg::FeedbackState::_tool_pose_type arg)
  {
    msg_.tool_pose = std::move(arg);
    return Init_FeedbackState_tcp_speed(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_flange_pose
{
public:
  explicit Init_FeedbackState_flange_pose(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_tool_pose flange_pose(::tmr_msgs::msg::FeedbackState::_flange_pose_type arg)
  {
    msg_.flange_pose = std::move(arg);
    return Init_FeedbackState_tool_pose(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_joint_tor
{
public:
  explicit Init_FeedbackState_joint_tor(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_flange_pose joint_tor(::tmr_msgs::msg::FeedbackState::_joint_tor_type arg)
  {
    msg_.joint_tor = std::move(arg);
    return Init_FeedbackState_flange_pose(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_joint_vel
{
public:
  explicit Init_FeedbackState_joint_vel(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_joint_tor joint_vel(::tmr_msgs::msg::FeedbackState::_joint_vel_type arg)
  {
    msg_.joint_vel = std::move(arg);
    return Init_FeedbackState_joint_tor(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_joint_pos
{
public:
  explicit Init_FeedbackState_joint_pos(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_joint_vel joint_pos(::tmr_msgs::msg::FeedbackState::_joint_pos_type arg)
  {
    msg_.joint_pos = std::move(arg);
    return Init_FeedbackState_joint_vel(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_is_sct_connected
{
public:
  explicit Init_FeedbackState_is_sct_connected(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_joint_pos is_sct_connected(::tmr_msgs::msg::FeedbackState::_is_sct_connected_type arg)
  {
    msg_.is_sct_connected = std::move(arg);
    return Init_FeedbackState_joint_pos(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_is_svr_connected
{
public:
  explicit Init_FeedbackState_is_svr_connected(::tmr_msgs::msg::FeedbackState & msg)
  : msg_(msg)
  {}
  Init_FeedbackState_is_sct_connected is_svr_connected(::tmr_msgs::msg::FeedbackState::_is_svr_connected_type arg)
  {
    msg_.is_svr_connected = std::move(arg);
    return Init_FeedbackState_is_sct_connected(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

class Init_FeedbackState_header
{
public:
  Init_FeedbackState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FeedbackState_is_svr_connected header(::tmr_msgs::msg::FeedbackState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FeedbackState_is_svr_connected(msg_);
  }

private:
  ::tmr_msgs::msg::FeedbackState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::msg::FeedbackState>()
{
  return tmr_msgs::msg::builder::Init_FeedbackState_header();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__MSG__DETAIL__FEEDBACK_STATE__BUILDER_HPP_
