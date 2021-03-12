// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:msg/FeedbackState.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__FEEDBACK_STATE__STRUCT_H_
#define TM_MSGS__MSG__DETAIL__FEEDBACK_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'joint_pos'
// Member 'joint_vel'
// Member 'joint_tor'
// Member 'tool0_pose'
// Member 'tool_pose'
// Member 'tcp_speed'
// Member 'tcp_force'
// Member 'cb_digital_output'
// Member 'cb_digital_input'
// Member 'cb_analog_output'
// Member 'cb_analog_input'
// Member 'ee_digital_output'
// Member 'ee_digital_input'
// Member 'ee_analog_output'
// Member 'ee_analog_input'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'error_content'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FeedbackState in the package tm_msgs.
typedef struct tm_msgs__msg__FeedbackState
{
  std_msgs__msg__Header header;
  bool is_svr_connected;
  bool is_sct_connected;
  rosidl_runtime_c__double__Sequence joint_pos;
  rosidl_runtime_c__double__Sequence joint_vel;
  rosidl_runtime_c__double__Sequence joint_tor;
  rosidl_runtime_c__double__Sequence tool0_pose;
  rosidl_runtime_c__double__Sequence tool_pose;
  rosidl_runtime_c__double__Sequence tcp_speed;
  rosidl_runtime_c__double__Sequence tcp_force;
  bool robot_link;
  bool is_data_table_correct;
  bool robot_error;
  bool project_run;
  bool project_pause;
  bool safetyguard_a;
  bool e_stop;
  bool camera_light;
  int32_t error_code;
  int32_t project_speed;
  int32_t ma_mode;
  int32_t robot_light;
  rosidl_runtime_c__uint8__Sequence cb_digital_output;
  rosidl_runtime_c__uint8__Sequence cb_digital_input;
  rosidl_runtime_c__float__Sequence cb_analog_output;
  rosidl_runtime_c__float__Sequence cb_analog_input;
  rosidl_runtime_c__uint8__Sequence ee_digital_output;
  rosidl_runtime_c__uint8__Sequence ee_digital_input;
  rosidl_runtime_c__float__Sequence ee_analog_output;
  rosidl_runtime_c__float__Sequence ee_analog_input;
  rosidl_runtime_c__String error_content;
} tm_msgs__msg__FeedbackState;

// Struct for a sequence of tm_msgs__msg__FeedbackState.
typedef struct tm_msgs__msg__FeedbackState__Sequence
{
  tm_msgs__msg__FeedbackState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__msg__FeedbackState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__MSG__DETAIL__FEEDBACK_STATE__STRUCT_H_
