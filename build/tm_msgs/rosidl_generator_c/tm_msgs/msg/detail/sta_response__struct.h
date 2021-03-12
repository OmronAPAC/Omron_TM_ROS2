// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_H_
#define TM_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_H_

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
// Member 'subcmd'
// Member 'subdata'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/StaResponse in the package tm_msgs.
typedef struct tm_msgs__msg__StaResponse
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String subcmd;
  rosidl_runtime_c__String subdata;
} tm_msgs__msg__StaResponse;

// Struct for a sequence of tm_msgs__msg__StaResponse.
typedef struct tm_msgs__msg__StaResponse__Sequence
{
  tm_msgs__msg__StaResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__msg__StaResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_H_
