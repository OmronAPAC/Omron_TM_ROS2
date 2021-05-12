// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tmr_msgs:srv/AskItem.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__ASK_ITEM__STRUCT_H_
#define TMR_MSGS__SRV__DETAIL__ASK_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'item'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/AskItem in the package tmr_msgs.
typedef struct tmr_msgs__srv__AskItem_Request
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String item;
  double wait_time;
} tmr_msgs__srv__AskItem_Request;

// Struct for a sequence of tmr_msgs__srv__AskItem_Request.
typedef struct tmr_msgs__srv__AskItem_Request__Sequence
{
  tmr_msgs__srv__AskItem_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__srv__AskItem_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'value'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/AskItem in the package tmr_msgs.
typedef struct tmr_msgs__srv__AskItem_Response
{
  bool ok;
  rosidl_runtime_c__String id;
  rosidl_runtime_c__String value;
} tmr_msgs__srv__AskItem_Response;

// Struct for a sequence of tmr_msgs__srv__AskItem_Response.
typedef struct tmr_msgs__srv__AskItem_Response__Sequence
{
  tmr_msgs__srv__AskItem_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__srv__AskItem_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMR_MSGS__SRV__DETAIL__ASK_ITEM__STRUCT_H_