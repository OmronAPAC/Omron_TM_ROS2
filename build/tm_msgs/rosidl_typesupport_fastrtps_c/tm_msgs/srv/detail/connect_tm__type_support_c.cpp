// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/connect_tm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_msgs/srv/detail/connect_tm__struct.h"
#include "tm_msgs/srv/detail/connect_tm__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ConnectTM_Request__ros_msg_type = tm_msgs__srv__ConnectTM_Request;

static bool _ConnectTM_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectTM_Request__ros_msg_type * ros_message = static_cast<const _ConnectTM_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: server
  {
    cdr << ros_message->server;
  }

  // Field name: connect
  {
    cdr << (ros_message->connect ? true : false);
  }

  // Field name: reconnect
  {
    cdr << (ros_message->reconnect ? true : false);
  }

  // Field name: timeout
  {
    cdr << ros_message->timeout;
  }

  // Field name: timeval
  {
    cdr << ros_message->timeval;
  }

  return true;
}

static bool _ConnectTM_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectTM_Request__ros_msg_type * ros_message = static_cast<_ConnectTM_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: server
  {
    cdr >> ros_message->server;
  }

  // Field name: connect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->connect = tmp ? true : false;
  }

  // Field name: reconnect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reconnect = tmp ? true : false;
  }

  // Field name: timeout
  {
    cdr >> ros_message->timeout;
  }

  // Field name: timeval
  {
    cdr >> ros_message->timeval;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__ConnectTM_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectTM_Request__ros_msg_type * ros_message = static_cast<const _ConnectTM_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name server
  {
    size_t item_size = sizeof(ros_message->server);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name connect
  {
    size_t item_size = sizeof(ros_message->connect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reconnect
  {
    size_t item_size = sizeof(ros_message->reconnect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timeout
  {
    size_t item_size = sizeof(ros_message->timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timeval
  {
    size_t item_size = sizeof(ros_message->timeval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConnectTM_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__ConnectTM_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__ConnectTM_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: server
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: connect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reconnect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timeval
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ConnectTM_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__ConnectTM_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectTM_Request = {
  "tm_msgs::srv",
  "ConnectTM_Request",
  _ConnectTM_Request__cdr_serialize,
  _ConnectTM_Request__cdr_deserialize,
  _ConnectTM_Request__get_serialized_size,
  _ConnectTM_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConnectTM_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectTM_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, ConnectTM_Request)() {
  return &_ConnectTM_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/connect_tm__struct.h"
// already included above
// #include "tm_msgs/srv/detail/connect_tm__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ConnectTM_Response__ros_msg_type = tm_msgs__srv__ConnectTM_Response;

static bool _ConnectTM_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConnectTM_Response__ros_msg_type * ros_message = static_cast<const _ConnectTM_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    cdr << (ros_message->ok ? true : false);
  }

  return true;
}

static bool _ConnectTM_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConnectTM_Response__ros_msg_type * ros_message = static_cast<_ConnectTM_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ok = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__ConnectTM_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConnectTM_Response__ros_msg_type * ros_message = static_cast<const _ConnectTM_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ok
  {
    size_t item_size = sizeof(ros_message->ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConnectTM_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__ConnectTM_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__ConnectTM_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ConnectTM_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__ConnectTM_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConnectTM_Response = {
  "tm_msgs::srv",
  "ConnectTM_Response",
  _ConnectTM_Response__cdr_serialize,
  _ConnectTM_Response__cdr_deserialize,
  _ConnectTM_Response__get_serialized_size,
  _ConnectTM_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConnectTM_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConnectTM_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, ConnectTM_Response)() {
  return &_ConnectTM_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_msgs/srv/connect_tm.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConnectTM__callbacks = {
  "tm_msgs::srv",
  "ConnectTM",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, ConnectTM_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, ConnectTM_Response)(),
};

static rosidl_service_type_support_t ConnectTM__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConnectTM__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, ConnectTM)() {
  return &ConnectTM__handle;
}

#if defined(__cplusplus)
}
#endif
