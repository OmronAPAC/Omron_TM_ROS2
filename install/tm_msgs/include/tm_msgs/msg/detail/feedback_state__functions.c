// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tm_msgs:msg/FeedbackState.idl
// generated code does not contain a copyright notice
#include "tm_msgs/msg/detail/feedback_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_pos`
// Member `joint_vel`
// Member `joint_tor`
// Member `tool0_pose`
// Member `tool_pose`
// Member `tcp_speed`
// Member `tcp_force`
// Member `cb_digital_output`
// Member `cb_digital_input`
// Member `cb_analog_output`
// Member `cb_analog_input`
// Member `ee_digital_output`
// Member `ee_digital_input`
// Member `ee_analog_output`
// Member `ee_analog_input`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `error_content`
#include "rosidl_runtime_c/string_functions.h"

bool
tm_msgs__msg__FeedbackState__init(tm_msgs__msg__FeedbackState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // is_svr_connected
  // is_sct_connected
  // joint_pos
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_pos, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // joint_vel
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_vel, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // joint_tor
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_tor, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // tool0_pose
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tool0_pose, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // tool_pose
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tool_pose, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // tcp_speed
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tcp_speed, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // tcp_force
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tcp_force, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // robot_link
  // is_data_table_correct
  // robot_error
  // project_run
  // project_pause
  // safetyguard_a
  // e_stop
  // camera_light
  // error_code
  // project_speed
  // ma_mode
  // robot_light
  // cb_digital_output
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->cb_digital_output, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // cb_digital_input
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->cb_digital_input, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // cb_analog_output
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cb_analog_output, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // cb_analog_input
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cb_analog_input, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // ee_digital_output
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->ee_digital_output, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // ee_digital_input
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->ee_digital_input, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // ee_analog_output
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ee_analog_output, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // ee_analog_input
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ee_analog_input, 0)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  // error_content
  if (!rosidl_runtime_c__String__init(&msg->error_content)) {
    tm_msgs__msg__FeedbackState__fini(msg);
    return false;
  }
  return true;
}

void
tm_msgs__msg__FeedbackState__fini(tm_msgs__msg__FeedbackState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // is_svr_connected
  // is_sct_connected
  // joint_pos
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_pos);
  // joint_vel
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_vel);
  // joint_tor
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_tor);
  // tool0_pose
  rosidl_runtime_c__double__Sequence__fini(&msg->tool0_pose);
  // tool_pose
  rosidl_runtime_c__double__Sequence__fini(&msg->tool_pose);
  // tcp_speed
  rosidl_runtime_c__double__Sequence__fini(&msg->tcp_speed);
  // tcp_force
  rosidl_runtime_c__double__Sequence__fini(&msg->tcp_force);
  // robot_link
  // is_data_table_correct
  // robot_error
  // project_run
  // project_pause
  // safetyguard_a
  // e_stop
  // camera_light
  // error_code
  // project_speed
  // ma_mode
  // robot_light
  // cb_digital_output
  rosidl_runtime_c__uint8__Sequence__fini(&msg->cb_digital_output);
  // cb_digital_input
  rosidl_runtime_c__uint8__Sequence__fini(&msg->cb_digital_input);
  // cb_analog_output
  rosidl_runtime_c__float__Sequence__fini(&msg->cb_analog_output);
  // cb_analog_input
  rosidl_runtime_c__float__Sequence__fini(&msg->cb_analog_input);
  // ee_digital_output
  rosidl_runtime_c__uint8__Sequence__fini(&msg->ee_digital_output);
  // ee_digital_input
  rosidl_runtime_c__uint8__Sequence__fini(&msg->ee_digital_input);
  // ee_analog_output
  rosidl_runtime_c__float__Sequence__fini(&msg->ee_analog_output);
  // ee_analog_input
  rosidl_runtime_c__float__Sequence__fini(&msg->ee_analog_input);
  // error_content
  rosidl_runtime_c__String__fini(&msg->error_content);
}

tm_msgs__msg__FeedbackState *
tm_msgs__msg__FeedbackState__create()
{
  tm_msgs__msg__FeedbackState * msg = (tm_msgs__msg__FeedbackState *)malloc(sizeof(tm_msgs__msg__FeedbackState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tm_msgs__msg__FeedbackState));
  bool success = tm_msgs__msg__FeedbackState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tm_msgs__msg__FeedbackState__destroy(tm_msgs__msg__FeedbackState * msg)
{
  if (msg) {
    tm_msgs__msg__FeedbackState__fini(msg);
  }
  free(msg);
}


bool
tm_msgs__msg__FeedbackState__Sequence__init(tm_msgs__msg__FeedbackState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tm_msgs__msg__FeedbackState * data = NULL;
  if (size) {
    data = (tm_msgs__msg__FeedbackState *)calloc(size, sizeof(tm_msgs__msg__FeedbackState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tm_msgs__msg__FeedbackState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tm_msgs__msg__FeedbackState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tm_msgs__msg__FeedbackState__Sequence__fini(tm_msgs__msg__FeedbackState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tm_msgs__msg__FeedbackState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tm_msgs__msg__FeedbackState__Sequence *
tm_msgs__msg__FeedbackState__Sequence__create(size_t size)
{
  tm_msgs__msg__FeedbackState__Sequence * array = (tm_msgs__msg__FeedbackState__Sequence *)malloc(sizeof(tm_msgs__msg__FeedbackState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tm_msgs__msg__FeedbackState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tm_msgs__msg__FeedbackState__Sequence__destroy(tm_msgs__msg__FeedbackState__Sequence * array)
{
  if (array) {
    tm_msgs__msg__FeedbackState__Sequence__fini(array);
  }
  free(array);
}
