// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/connect_tm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tm_msgs/srv/detail/connect_tm__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tm_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_serialize(
  const tm_msgs::srv::ConnectTM_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: server
  cdr << ros_message.server;
  // Member: connect
  cdr << (ros_message.connect ? true : false);
  // Member: reconnect
  cdr << (ros_message.reconnect ? true : false);
  // Member: timeout
  cdr << ros_message.timeout;
  // Member: timeval
  cdr << ros_message.timeval;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tm_msgs::srv::ConnectTM_Request & ros_message)
{
  // Member: server
  cdr >> ros_message.server;

  // Member: connect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.connect = tmp ? true : false;
  }

  // Member: reconnect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.reconnect = tmp ? true : false;
  }

  // Member: timeout
  cdr >> ros_message.timeout;

  // Member: timeval
  cdr >> ros_message.timeval;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
get_serialized_size(
  const tm_msgs::srv::ConnectTM_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: server
  {
    size_t item_size = sizeof(ros_message.server);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: connect
  {
    size_t item_size = sizeof(ros_message.connect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reconnect
  {
    size_t item_size = sizeof(ros_message.reconnect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timeout
  {
    size_t item_size = sizeof(ros_message.timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timeval
  {
    size_t item_size = sizeof(ros_message.timeval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
max_serialized_size_ConnectTM_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: server
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: connect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reconnect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timeval
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ConnectTM_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::ConnectTM_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConnectTM_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tm_msgs::srv::ConnectTM_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConnectTM_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::ConnectTM_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConnectTM_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConnectTM_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ConnectTM_Request__callbacks = {
  "tm_msgs::srv",
  "ConnectTM_Request",
  _ConnectTM_Request__cdr_serialize,
  _ConnectTM_Request__cdr_deserialize,
  _ConnectTM_Request__get_serialized_size,
  _ConnectTM_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConnectTM_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConnectTM_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tm_msgs::srv::ConnectTM_Request>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_ConnectTM_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, ConnectTM_Request)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_ConnectTM_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tm_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_serialize(
  const tm_msgs::srv::ConnectTM_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ok
  cdr << (ros_message.ok ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tm_msgs::srv::ConnectTM_Response & ros_message)
{
  // Member: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ok = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
get_serialized_size(
  const tm_msgs::srv::ConnectTM_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ok
  {
    size_t item_size = sizeof(ros_message.ok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
max_serialized_size_ConnectTM_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ConnectTM_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::ConnectTM_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConnectTM_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tm_msgs::srv::ConnectTM_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConnectTM_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::ConnectTM_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConnectTM_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConnectTM_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ConnectTM_Response__callbacks = {
  "tm_msgs::srv",
  "ConnectTM_Response",
  _ConnectTM_Response__cdr_serialize,
  _ConnectTM_Response__cdr_deserialize,
  _ConnectTM_Response__get_serialized_size,
  _ConnectTM_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConnectTM_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConnectTM_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tm_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tm_msgs::srv::ConnectTM_Response>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_ConnectTM_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, ConnectTM_Response)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_ConnectTM_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tm_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ConnectTM__callbacks = {
  "tm_msgs::srv",
  "ConnectTM",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, ConnectTM_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, ConnectTM_Response)(),
};

static rosidl_service_type_support_t _ConnectTM__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConnectTM__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tm_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tm_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<tm_msgs::srv::ConnectTM>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_ConnectTM__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, ConnectTM)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_ConnectTM__handle;
}

#ifdef __cplusplus
}
#endif
