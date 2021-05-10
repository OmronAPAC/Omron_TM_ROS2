// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_IO__STRUCT_H_
#define TM_MSGS__SRV__DETAIL__SET_IO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODULE_CONTROLBOX'.
enum
{
  tm_msgs__srv__SetIO_Request__MODULE_CONTROLBOX = 0
};

/// Constant 'MODULE_ENDEFFECTOR'.
enum
{
  tm_msgs__srv__SetIO_Request__MODULE_ENDEFFECTOR = 1
};

/// Constant 'TYPE_DIGITAL_IN'.
enum
{
  tm_msgs__srv__SetIO_Request__TYPE_DIGITAL_IN = 0
};

/// Constant 'TYPE_DIGITAL_OUT'.
enum
{
  tm_msgs__srv__SetIO_Request__TYPE_DIGITAL_OUT = 1
};

/// Constant 'TYPE_INSTANT_DO'.
enum
{
  tm_msgs__srv__SetIO_Request__TYPE_INSTANT_DO = 2
};

/// Constant 'TYPE_ANALOG_IN'.
enum
{
  tm_msgs__srv__SetIO_Request__TYPE_ANALOG_IN = 3
};

/// Constant 'TYPE_ANALOG_OUT'.
enum
{
  tm_msgs__srv__SetIO_Request__TYPE_ANALOG_OUT = 4
};

/// Constant 'TYPE_INSTANT_AO'.
enum
{
  tm_msgs__srv__SetIO_Request__TYPE_INSTANT_AO = 5
};

/// Constant 'STATE_OFF'.
enum
{
  tm_msgs__srv__SetIO_Request__STATE_OFF = 0
};

/// Constant 'STATE_ON'.
enum
{
  tm_msgs__srv__SetIO_Request__STATE_ON = 1
};

// Struct defined in srv/SetIO in the package tm_msgs.
typedef struct tm_msgs__srv__SetIO_Request
{
  int8_t module;
  int8_t type;
  int8_t pin;
  float state;
} tm_msgs__srv__SetIO_Request;

// Struct for a sequence of tm_msgs__srv__SetIO_Request.
typedef struct tm_msgs__srv__SetIO_Request__Sequence
{
  tm_msgs__srv__SetIO_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetIO_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetIO in the package tm_msgs.
typedef struct tm_msgs__srv__SetIO_Response
{
  bool ok;
} tm_msgs__srv__SetIO_Response;

// Struct for a sequence of tm_msgs__srv__SetIO_Response.
typedef struct tm_msgs__srv__SetIO_Response__Sequence
{
  tm_msgs__srv__SetIO_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__SetIO_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__SET_IO__STRUCT_H_
