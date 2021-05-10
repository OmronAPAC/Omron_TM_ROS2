// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_
#define TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_

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
  tm_msgs__srv__SetEvent_Request__TAG = 1
};

/// Constant 'WAIT_TAG'.
enum
{
  tm_msgs__srv__SetEvent_Request__WAIT_TAG = 2
};

/// Constant 'STOP'.
enum
{
  tm_msgs__srv__SetEvent_Request__STOP = 11
};

/// Constant 'PAUSE'.
enum
{
  tm_msgs__srv__SetEvent_Request__PAUSE = 12
};

/// Constant 'RESUME'.
enum
{
  tm_msgs__srv__SetEvent_Request__RESUME = 13
};

/// Constant 'EXIT'.
enum
{
  tm_msgs__srv__SetEvent_Request__EXIT = -1
};

// Struct defined in srv/SetEvent in the package tm_msgs.
typedef struct tm_msgs__srv__SetEvent_Request
{
  int8_t func;
  int8_t arg0;
  int8_t arg1;
} tm_msgs__srv__SetEvent_Request;

// Struct for a sequence of tm_msgs__srv__SetEvent_Request.
typedef struct tm_msgs__srv__SetEvent_Request__Sequence
{
  tm_msgs__srv__SetEvent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetEvent_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetEvent in the package tm_msgs.
typedef struct tm_msgs__srv__SetEvent_Response
{
  bool ok;
} tm_msgs__srv__SetEvent_Response;

// Struct for a sequence of tm_msgs__srv__SetEvent_Response.
typedef struct tm_msgs__srv__SetEvent_Response__Sequence
{
  tm_msgs__srv__SetEvent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetEvent_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_H_
