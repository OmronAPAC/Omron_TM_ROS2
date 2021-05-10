// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice

#ifndef TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__STRUCT_H_
#define TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'command_parameter_string'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TechmanRobotCommand in the package techman_robot_msgs.
typedef struct techman_robot_msgs__srv__TechmanRobotCommand_Request
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String command_parameter_string;
} techman_robot_msgs__srv__TechmanRobotCommand_Request;

// Struct for a sequence of techman_robot_msgs__srv__TechmanRobotCommand_Request.
typedef struct techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence
{
  techman_robot_msgs__srv__TechmanRobotCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TechmanRobotCommand in the package techman_robot_msgs.
typedef struct techman_robot_msgs__srv__TechmanRobotCommand_Response
{
  bool is_success;
} techman_robot_msgs__srv__TechmanRobotCommand_Response;

// Struct for a sequence of techman_robot_msgs__srv__TechmanRobotCommand_Response.
typedef struct techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence
{
  techman_robot_msgs__srv__TechmanRobotCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__STRUCT_H_
