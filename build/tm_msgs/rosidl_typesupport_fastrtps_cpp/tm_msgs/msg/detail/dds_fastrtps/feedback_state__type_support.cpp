// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tm_msgs:msg/FeedbackState.idl
// generated code does not contain a copyright notice
#include "tm_msgs/msg/detail/feedback_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tm_msgs/msg/detail/feedback_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace tm_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_serialize(
  const tm_msgs::msg::FeedbackState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: is_svr_connected
  cdr << (ros_message.is_svr_connected ? true : false);
  // Member: is_sct_connected
  cdr << (ros_message.is_sct_connected ? true : false);
  // Member: joint_pos
  {
    cdr << ros_message.joint_pos;
  }
  // Member: joint_vel
  {
    cdr << ros_message.joint_vel;
  }
  // Member: joint_tor
  {
    cdr << ros_message.joint_tor;
  }
  // Member: tool0_pose
  {
    cdr << ros_message.tool0_pose;
  }
  // Member: tool_pose
  {
    cdr << ros_message.tool_pose;
  }
  // Member: tcp_speed
  {
    cdr << ros_message.tcp_speed;
  }
  // Member: tcp_force
  {
    cdr << ros_message.tcp_force;
  }
  // Member: robot_link
  cdr << (ros_message.robot_link ? true : false);
  // Member: is_data_table_correct
  cdr << (ros_message.is_data_table_correct ? true : false);
  // Member: robot_error
  cdr << (ros_message.robot_error ? true : false);
  // Member: project_run
  cdr << (ros_message.project_run ? true : false);
  // Member: project_pause
  cdr << (ros_message.project_pause ? true : false);
  // Member: safetyguard_a
  cdr << (ros_message.safetyguard_a ? true : false);
  // Member: e_stop
  cdr << (ros_message.e_stop ? true : false);
  // Member: camera_light
  cdr << (ros_message.camera_light ? true : false);
  // Member: error_code
  cdr << ros_message.error_code;
  // Member: project_speed
  cdr << ros_message.project_speed;
  // Member: ma_mode
  cdr << ros_message.ma_mode;
  // Member: robot_light
  cdr << ros_message.robot_light;
  // Member: cb_digital_output
  {
    cdr << ros_message.cb_digital_output;
  }
  // Member: cb_digital_input
  {
    cdr << ros_message.cb_digital_input;
  }
  // Member: cb_analog_output
  {
    cdr << ros_message.cb_analog_output;
  }
  // Member: cb_analog_input
  {
    cdr << ros_message.cb_analog_input;
  }
  // Member: ee_digital_output
  {
    cdr << ros_message.ee_digital_output;
  }
  // Member: ee_digital_input
  {
    cdr << ros_message.ee_digital_input;
  }
  // Member: ee_analog_output
  {
    cdr << ros_message.ee_analog_output;
  }
  // Member: ee_analog_input
  {
    cdr << ros_message.ee_analog_input;
  }
  // Member: error_content
  cdr << ros_message.error_content;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tm_msgs::msg::FeedbackState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: is_svr_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_svr_connected = tmp ? true : false;
  }

  // Member: is_sct_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_sct_connected = tmp ? true : false;
  }

  // Member: joint_pos
  {
    cdr >> ros_message.joint_pos;
  }

  // Member: joint_vel
  {
    cdr >> ros_message.joint_vel;
  }

  // Member: joint_tor
  {
    cdr >> ros_message.joint_tor;
  }

  // Member: tool0_pose
  {
    cdr >> ros_message.tool0_pose;
  }

  // Member: tool_pose
  {
    cdr >> ros_message.tool_pose;
  }

  // Member: tcp_speed
  {
    cdr >> ros_message.tcp_speed;
  }

  // Member: tcp_force
  {
    cdr >> ros_message.tcp_force;
  }

  // Member: robot_link
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robot_link = tmp ? true : false;
  }

  // Member: is_data_table_correct
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_data_table_correct = tmp ? true : false;
  }

  // Member: robot_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.robot_error = tmp ? true : false;
  }

  // Member: project_run
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.project_run = tmp ? true : false;
  }

  // Member: project_pause
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.project_pause = tmp ? true : false;
  }

  // Member: safetyguard_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.safetyguard_a = tmp ? true : false;
  }

  // Member: e_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.e_stop = tmp ? true : false;
  }

  // Member: camera_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.camera_light = tmp ? true : false;
  }

  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: project_speed
  cdr >> ros_message.project_speed;

  // Member: ma_mode
  cdr >> ros_message.ma_mode;

  // Member: robot_light
  cdr >> ros_message.robot_light;

  // Member: cb_digital_output
  {
    cdr >> ros_message.cb_digital_output;
  }

  // Member: cb_digital_input
  {
    cdr >> ros_message.cb_digital_input;
  }

  // Member: cb_analog_output
  {
    cdr >> ros_message.cb_analog_output;
  }

  // Member: cb_analog_input
  {
    cdr >> ros_message.cb_analog_input;
  }

  // Member: ee_digital_output
  {
    cdr >> ros_message.ee_digital_output;
  }

  // Member: ee_digital_input
  {
    cdr >> ros_message.ee_digital_input;
  }

  // Member: ee_analog_output
  {
    cdr >> ros_message.ee_analog_output;
  }

  // Member: ee_analog_input
  {
    cdr >> ros_message.ee_analog_input;
  }

  // Member: error_content
  cdr >> ros_message.error_content;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
get_serialized_size(
  const tm_msgs::msg::FeedbackState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: is_svr_connected
  {
    size_t item_size = sizeof(ros_message.is_svr_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_sct_connected
  {
    size_t item_size = sizeof(ros_message.is_sct_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_pos
  {
    size_t array_size = ros_message.joint_pos.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.joint_pos[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_vel
  {
    size_t array_size = ros_message.joint_vel.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.joint_vel[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_tor
  {
    size_t array_size = ros_message.joint_tor.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.joint_tor[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool0_pose
  {
    size_t array_size = ros_message.tool0_pose.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tool0_pose[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tool_pose
  {
    size_t array_size = ros_message.tool_pose.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tool_pose[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tcp_speed
  {
    size_t array_size = ros_message.tcp_speed.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tcp_speed[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tcp_force
  {
    size_t array_size = ros_message.tcp_force.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.tcp_force[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_link
  {
    size_t item_size = sizeof(ros_message.robot_link);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_data_table_correct
  {
    size_t item_size = sizeof(ros_message.is_data_table_correct);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_error
  {
    size_t item_size = sizeof(ros_message.robot_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: project_run
  {
    size_t item_size = sizeof(ros_message.project_run);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: project_pause
  {
    size_t item_size = sizeof(ros_message.project_pause);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safetyguard_a
  {
    size_t item_size = sizeof(ros_message.safetyguard_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: e_stop
  {
    size_t item_size = sizeof(ros_message.e_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera_light
  {
    size_t item_size = sizeof(ros_message.camera_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: project_speed
  {
    size_t item_size = sizeof(ros_message.project_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ma_mode
  {
    size_t item_size = sizeof(ros_message.ma_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_light
  {
    size_t item_size = sizeof(ros_message.robot_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cb_digital_output
  {
    size_t array_size = ros_message.cb_digital_output.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cb_digital_output[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cb_digital_input
  {
    size_t array_size = ros_message.cb_digital_input.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cb_digital_input[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cb_analog_output
  {
    size_t array_size = ros_message.cb_analog_output.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cb_analog_output[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cb_analog_input
  {
    size_t array_size = ros_message.cb_analog_input.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.cb_analog_input[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ee_digital_output
  {
    size_t array_size = ros_message.ee_digital_output.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ee_digital_output[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ee_digital_input
  {
    size_t array_size = ros_message.ee_digital_input.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ee_digital_input[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ee_analog_output
  {
    size_t array_size = ros_message.ee_analog_output.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ee_analog_output[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ee_analog_input
  {
    size_t array_size = ros_message.ee_analog_input.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ee_analog_input[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_content
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error_content.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
max_serialized_size_FeedbackState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: is_svr_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_sct_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_pos
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_vel
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: joint_tor
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool0_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tool_pose
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tcp_speed
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tcp_force
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: robot_link
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: is_data_table_correct
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: robot_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: project_run
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: project_pause
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safetyguard_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: e_stop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: camera_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_code
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: project_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ma_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robot_light
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cb_digital_output
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cb_digital_input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cb_analog_output
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cb_analog_input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ee_digital_output
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ee_digital_input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ee_analog_output
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ee_analog_input
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: error_content
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _FeedbackState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tm_msgs::msg::FeedbackState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FeedbackState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tm_msgs::msg::FeedbackState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FeedbackState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tm_msgs::msg::FeedbackState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FeedbackState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FeedbackState(full_bounded, 0);
}

static message_type_support_callbacks_t _FeedbackState__callbacks = {
  "tm_msgs::msg",
  "FeedbackState",
  _FeedbackState__cdr_serialize,
  _FeedbackState__cdr_deserialize,
  _FeedbackState__get_serialized_size,
  _FeedbackState__max_serialized_size
};

static rosidl_message_type_support_t _FeedbackState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FeedbackState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tm_msgs::msg::FeedbackState>()
{
  return &tm_msgs::msg::typesupport_fastrtps_cpp::_FeedbackState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, msg, FeedbackState)() {
  return &tm_msgs::msg::typesupport_fastrtps_cpp::_FeedbackState__handle;
}

#ifdef __cplusplus
}
#endif
