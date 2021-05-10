// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_H_
#define TM_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TMSVR'.
enum
{
  tm_msgs__srv__ConnectTM_Request__TMSVR = 0
};

/// Constant 'TMSCT'.
enum
{
  tm_msgs__srv__ConnectTM_Request__TMSCT = 1
};

// Struct defined in srv/ConnectTM in the package tm_msgs.
typedef struct tm_msgs__srv__ConnectTM_Request
{
  int8_t server;
  bool connect;
  bool reconnect;
  double timeout;
  double timeval;
} tm_msgs__srv__ConnectTM_Request;

// Struct for a sequence of tm_msgs__srv__ConnectTM_Request.
typedef struct tm_msgs__srv__ConnectTM_Request__Sequence
{
  tm_msgs__srv__ConnectTM_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__ConnectTM_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConnectTM in the package tm_msgs.
typedef struct tm_msgs__srv__ConnectTM_Response
{
  bool ok;
} tm_msgs__srv__ConnectTM_Response;

// Struct for a sequence of tm_msgs__srv__ConnectTM_Response.
typedef struct tm_msgs__srv__ConnectTM_Response__Sequence
{
  tm_msgs__srv__ConnectTM_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__ConnectTM_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_H_
