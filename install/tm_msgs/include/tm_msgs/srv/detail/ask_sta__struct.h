// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__ASK_STA__STRUCT_H_
#define TM_MSGS__SRV__DETAIL__ASK_STA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'subcmd'
// Member 'subdata'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AskSta in the package tm_msgs.
typedef struct tm_msgs__srv__AskSta_Request
{
  rosidl_runtime_c__String subcmd;
  rosidl_runtime_c__String subdata;
  double wait_time;
} tm_msgs__srv__AskSta_Request;

// Struct for a sequence of tm_msgs__srv__AskSta_Request.
typedef struct tm_msgs__srv__AskSta_Request__Sequence
{
  tm_msgs__srv__AskSta_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__AskSta_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'subcmd'
// Member 'subdata'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AskSta in the package tm_msgs.
typedef struct tm_msgs__srv__AskSta_Response
{
  bool ok;
  rosidl_runtime_c__String subcmd;
  rosidl_runtime_c__String subdata;
} tm_msgs__srv__AskSta_Response;

// Struct for a sequence of tm_msgs__srv__AskSta_Response.
typedef struct tm_msgs__srv__AskSta_Response__Sequence
{
  tm_msgs__srv__AskSta_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__AskSta_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__ASK_STA__STRUCT_H_
