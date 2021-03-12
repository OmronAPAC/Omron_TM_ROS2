// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_POSITIONS__STRUCT_H_
#define TM_MSGS__SRV__DETAIL__SET_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PTP_J'.
enum
{
  tm_msgs__srv__SetPositions_Request__PTP_J = 1
};

/// Constant 'PTP_T'.
enum
{
  tm_msgs__srv__SetPositions_Request__PTP_T = 2
};

/// Constant 'LINE_T'.
enum
{
  tm_msgs__srv__SetPositions_Request__LINE_T = 4
};

/// Constant 'CIRC_T'.
enum
{
  tm_msgs__srv__SetPositions_Request__CIRC_T = 6
};

/// Constant 'PLINE_T'.
enum
{
  tm_msgs__srv__SetPositions_Request__PLINE_T = 8
};

// Include directives for member types
// Member 'positions'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/SetPositions in the package tm_msgs.
typedef struct tm_msgs__srv__SetPositions_Request
{
  int8_t motion_type;
  rosidl_runtime_c__double__Sequence positions;
  double velocity;
  double acc_time;
  int32_t blend_percentage;
  bool fine_goal;
} tm_msgs__srv__SetPositions_Request;

// Struct for a sequence of tm_msgs__srv__SetPositions_Request.
typedef struct tm_msgs__srv__SetPositions_Request__Sequence
{
  tm_msgs__srv__SetPositions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetPositions_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetPositions in the package tm_msgs.
typedef struct tm_msgs__srv__SetPositions_Response
{
  bool ok;
} tm_msgs__srv__SetPositions_Response;

// Struct for a sequence of tm_msgs__srv__SetPositions_Response.
typedef struct tm_msgs__srv__SetPositions_Response__Sequence
{
  tm_msgs__srv__SetPositions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetPositions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__SET_POSITIONS__STRUCT_H_
