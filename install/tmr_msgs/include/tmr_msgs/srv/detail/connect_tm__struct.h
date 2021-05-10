// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tmr_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_H_
#define TMR_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_H_

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
  tmr_msgs__srv__ConnectTM_Request__TMSVR = 0
};

/// Constant 'TMSCT'.
enum
{
  tmr_msgs__srv__ConnectTM_Request__TMSCT = 1
};

// Struct defined in srv/ConnectTM in the package tmr_msgs.
typedef struct tmr_msgs__srv__ConnectTM_Request
{
  int8_t server;
  bool connect;
  bool reconnect;
  double timeout;
  double timeval;
} tmr_msgs__srv__ConnectTM_Request;

// Struct for a sequence of tmr_msgs__srv__ConnectTM_Request.
typedef struct tmr_msgs__srv__ConnectTM_Request__Sequence
{
  tmr_msgs__srv__ConnectTM_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__srv__ConnectTM_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConnectTM in the package tmr_msgs.
typedef struct tmr_msgs__srv__ConnectTM_Response
{
  bool ok;
} tmr_msgs__srv__ConnectTM_Response;

// Struct for a sequence of tmr_msgs__srv__ConnectTM_Response.
typedef struct tmr_msgs__srv__ConnectTM_Response__Sequence
{
  tmr_msgs__srv__ConnectTM_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tmr_msgs__srv__ConnectTM_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMR_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_H_
