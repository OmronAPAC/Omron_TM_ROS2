// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tmr_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_H_
#define TMR_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_H_

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

// Struct defined in msg/StaResponse in the package tmr_msgs.
typedef struct tmr_msgs__msg__StaResponse
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String subcmd;
  rosidl_runtime_c__String subdata;
} tmr_msgs__msg__StaResponse;

// Struct for a sequence of tmr_msgs__msg__StaResponse.
typedef struct tmr_msgs__msg__StaResponse__Sequence
{
  tmr_msgs__msg__StaResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__msg__StaResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMR_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_H_
