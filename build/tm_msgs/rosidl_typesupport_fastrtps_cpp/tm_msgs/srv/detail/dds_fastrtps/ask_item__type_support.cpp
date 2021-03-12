// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tm_msgs:srv/AskItem.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/ask_item__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tm_msgs/srv/detail/ask_item__struct.hpp"

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
  const tm_msgs::srv::AskItem_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: item
  cdr << ros_message.item;
  // Member: wait_time
  cdr << ros_message.wait_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tm_msgs::srv::AskItem_Request & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: item
  cdr >> ros_message.item;

  // Member: wait_time
  cdr >> ros_message.wait_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
get_serialized_size(
  const tm_msgs::srv::AskItem_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);
  // Member: item
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.item.size() + 1);
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
max_serialized_size_AskItem_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: item
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

static bool _AskItem_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskItem_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AskItem_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tm_msgs::srv::AskItem_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AskItem_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskItem_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AskItem_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AskItem_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _AskItem_Request__callbacks = {
  "tm_msgs::srv",
  "AskItem_Request",
  _AskItem_Request__cdr_serialize,
  _AskItem_Request__cdr_deserialize,
  _AskItem_Request__get_serialized_size,
  _AskItem_Request__max_serialized_size
};

static rosidl_message_type_support_t _AskItem_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AskItem_Request__callbacks,
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
get_message_type_support_handle<tm_msgs::srv::AskItem_Request>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskItem_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskItem_Request)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskItem_Request__handle;
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
  const tm_msgs::srv::AskItem_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ok
  cdr << (ros_message.ok ? true : false);
  // Member: id
  cdr << ros_message.id;
  // Member: value
  cdr << ros_message.value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tm_msgs::srv::AskItem_Response & ros_message)
{
  // Member: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ok = tmp ? true : false;
  }

  // Member: id
  cdr >> ros_message.id;

  // Member: value
  cdr >> ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
get_serialized_size(
  const tm_msgs::srv::AskItem_Response & ros_message,
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
  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);
  // Member: value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.value.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tm_msgs
max_serialized_size_AskItem_Response(
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

  // Member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: value
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

static bool _AskItem_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskItem_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AskItem_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tm_msgs::srv::AskItem_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AskItem_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tm_msgs::srv::AskItem_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AskItem_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AskItem_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _AskItem_Response__callbacks = {
  "tm_msgs::srv",
  "AskItem_Response",
  _AskItem_Response__cdr_serialize,
  _AskItem_Response__cdr_deserialize,
  _AskItem_Response__get_serialized_size,
  _AskItem_Response__max_serialized_size
};

static rosidl_message_type_support_t _AskItem_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AskItem_Response__callbacks,
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
get_message_type_support_handle<tm_msgs::srv::AskItem_Response>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskItem_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskItem_Response)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskItem_Response__handle;
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

static service_type_support_callbacks_t _AskItem__callbacks = {
  "tm_msgs::srv",
  "AskItem",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskItem_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskItem_Response)(),
};

static rosidl_service_type_support_t _AskItem__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AskItem__callbacks,
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
get_service_type_support_handle<tm_msgs::srv::AskItem>()
{
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskItem__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tm_msgs, srv, AskItem)() {
  return &tm_msgs::srv::typesupport_fastrtps_cpp::_AskItem__handle;
}

#ifdef __cplusplus
}
#endif
