// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tmr_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_
#define TMR_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TAG'.
enum
{
  tmr_msgs__srv__SetEvent_Request__TAG = 1
};

/// Constant 'WAIT_TAG'.
enum
{
  tmr_msgs__srv__SetEvent_Request__WAIT_TAG = 2
};

/// Constant 'STOP'.
enum
{
  tmr_msgs__srv__SetEvent_Request__STOP = 11
};

/// Constant 'PAUSE'.
enum
{
  tmr_msgs__srv__SetEvent_Request__PAUSE = 12
};

/// Constant 'RESUME'.
enum
{
  tmr_msgs__srv__SetEvent_Request__RESUME = 13
};

/// Constant 'EXIT'.
enum
{
  tmr_msgs__srv__SetEvent_Request__EXIT = -1
};

// Struct defined in srv/SetEvent in the package tmr_msgs.
typedef struct tmr_msgs__srv__SetEvent_Request
{
  int8_t func;
  int8_t arg0;
  int8_t arg1;
} tmr_msgs__srv__SetEvent_Request;

// Struct for a sequence of tmr_msgs__srv__SetEvent_Request.
typedef struct tmr_msgs__srv__SetEvent_Request__Sequence
{
  tmr_msgs__srv__SetEvent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__srv__SetEvent_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetEvent in the package tmr_msgs.
typedef struct tmr_msgs__srv__SetEvent_Response
{
  bool ok;
} tmr_msgs__srv__SetEvent_Response;

// Struct for a sequence of tmr_msgs__srv__SetEvent_Response.
typedef struct tmr_msgs__srv__SetEvent_Response__Sequence
{
  tmr_msgs__srv__SetEvent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__srv__SetEvent_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMR_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_
