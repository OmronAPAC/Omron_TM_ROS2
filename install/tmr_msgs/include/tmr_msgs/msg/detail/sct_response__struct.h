// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tmr_msgs:msg/SctResponse.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__SCT_RESPONSE__STRUCT_H_
#define TMR_MSGS__MSG__DETAIL__SCT_RESPONSE__STRUCT_H_

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
// Member 'id'
// Member 'script'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SctResponse in the package tmr_msgs.
typedef struct tmr_msgs__msg__SctResponse
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String script;
} tmr_msgs__msg__SctResponse;

// Struct for a sequence of tmr_msgs__msg__SctResponse.
typedef struct tmr_msgs__msg__SctResponse__Sequence
{
  tmr_msgs__msg__SctResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__msg__SctResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMR_MSGS__MSG__DETAIL__SCT_RESPONSE__STRUCT_H_
