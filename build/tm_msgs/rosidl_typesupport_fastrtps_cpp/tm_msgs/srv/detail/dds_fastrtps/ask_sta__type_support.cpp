// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tm_msgs/srv/detail/ask_sta__struct.hpp"

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
  const tm_msgs::srv::AskSta_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: subcmd
  cdr << ros_message.subcmd;
  // Member: subdata
  cdr << ros_message.subdata;
  // Member: wait_time
  cdr << ros_message.wait_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tm_msgs::srv::AskSta_Request & ros_message)
{
  // Member: subcmd
  cdr >> ros_message.subcmd;

  // Member: subdata
  cdr >> ros_message.subdata;

  // Member: wait_time
  cdr >> ros_message.wait_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
get_serialized_size(
  const tm_msgs::srv::AskSta_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: subcmd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.subcmd.size() + 1);
  // Member: subdata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.subdata.size() + 1);
  // Member: wait_time
  {
    size_t item_size = sizeof(ros_message.wait_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
max_serialized_size_AskSta_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: subcmd
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: subdata
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: wait_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _AskSta_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskSta_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AskSta_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tm_msgs::srv::AskSta_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AskSta_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskSta_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AskSta_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AskSta_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AskSta_Request__callbacks = {
  "tm_msgs::srv",
  "AskSta_Request",
  _AskSta_Request__cdr_serialize,
  _AskSta_Request__cdr_deserialize,
  _AskSta_Request__get_serialized_size,
  _AskSta_Request__max_serialized_size
};

static rosidl_message_type_support_t _AskSta_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AskSta_Request__callbacks,
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
get_message_type_support_handle<tm_msgs::srv::AskSta_Request>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskSta_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskSta_Request)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskSta_Request__handle;
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
  const tm_msgs::srv::AskSta_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ok
  cdr << (ros_message.ok ? true : false);
  // Member: subcmd
  cdr << ros_message.subcmd;
  // Member: subdata
  cdr << ros_message.subdata;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tm_msgs::srv::AskSta_Response & ros_message)
{
  // Member: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ok = tmp ? true : false;
  }

  // Member: subcmd
  cdr >> ros_message.subcmd;

  // Member: subdata
  cdr >> ros_message.subdata;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
get_serialized_size(
  const tm_msgs::srv::AskSta_Response & ros_message,
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
  // Member: subcmd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.subcmd.size() + 1);
  // Member: subdata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.subdata.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
max_serialized_size_AskSta_Response(
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

  // Member: subcmd
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: subdata
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AskSta_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskSta_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AskSta_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tm_msgs::srv::AskSta_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AskSta_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskSta_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AskSta_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AskSta_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AskSta_Response__callbacks = {
  "tm_msgs::srv",
  "AskSta_Response",
  _AskSta_Response__cdr_serialize,
  _AskSta_Response__cdr_deserialize,
  _AskSta_Response__get_serialized_size,
  _AskSta_Response__max_serialized_size
};

static rosidl_message_type_support_t _AskSta_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AskSta_Response__callbacks,
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
get_message_type_support_handle<tm_msgs::srv::AskSta_Response>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskSta_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskSta_Response)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskSta_Response__handle;
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

static service_type_support_callbacks_t _AskSta__callbacks = {
  "tm_msgs::srv",
  "AskSta",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskSta_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskSta_Response)(),
};

static rosidl_service_type_support_t _AskSta__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AskSta__callbacks,
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
get_service_type_support_handle<tm_msgs::srv::AskSta>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskSta__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskSta)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskSta__handle;
}

#ifdef __cplusplus
}
#endif
