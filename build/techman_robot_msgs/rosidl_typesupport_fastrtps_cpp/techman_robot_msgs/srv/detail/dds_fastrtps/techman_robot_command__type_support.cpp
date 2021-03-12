// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice
#include "techman_robot_msgs/srv/detail/techman_robot_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "techman_robot_msgs/srv/detail/techman_robot_command__struct.hpp"

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

namespace techman_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
cdr_serialize(
  const techman_robot_msgs::srv::TechmanRobotCommand_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: command
  cdr << ros_message.command;
  // Member: command_parameter_string
  cdr << ros_message.command_parameter_string;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  techman_robot_msgs::srv::TechmanRobotCommand_Request & ros_message)
{
  // Member: command
  cdr >> ros_message.command;

  // Member: command_parameter_string
  cdr >> ros_message.command_parameter_string;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
get_serialized_size(
  const techman_robot_msgs::srv::TechmanRobotCommand_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command.size() + 1);
  // Member: command_parameter_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.command_parameter_string.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
max_serialized_size_TechmanRobotCommand_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: command_parameter_string
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

static bool _TechmanRobotCommand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const techman_robot_msgs::srv::TechmanRobotCommand_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TechmanRobotCommand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<techman_robot_msgs::srv::TechmanRobotCommand_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TechmanRobotCommand_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const techman_robot_msgs::srv::TechmanRobotCommand_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TechmanRobotCommand_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TechmanRobotCommand_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TechmanRobotCommand_Request__callbacks = {
  "techman_robot_msgs::srv",
  "TechmanRobotCommand_Request",
  _TechmanRobotCommand_Request__cdr_serialize,
  _TechmanRobotCommand_Request__cdr_deserialize,
  _TechmanRobotCommand_Request__get_serialized_size,
  _TechmanRobotCommand_Request__max_serialized_size
};

static rosidl_message_type_support_t _TechmanRobotCommand_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TechmanRobotCommand_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace techman_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_techman_robot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<techman_robot_msgs::srv::TechmanRobotCommand_Request>()
{
  return &techman_robot_msgs::srv::typesupport_fastrtps_cpp::_TechmanRobotCommand_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, techman_robot_msgs, srv, TechmanRobotCommand_Request)() {
  return &techman_robot_msgs::srv::typesupport_fastrtps_cpp::_TechmanRobotCommand_Request__handle;
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

namespace techman_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
cdr_serialize(
  const techman_robot_msgs::srv::TechmanRobotCommand_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_success
  cdr << (ros_message.is_success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  techman_robot_msgs::srv::TechmanRobotCommand_Response & ros_message)
{
  // Member: is_success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
get_serialized_size(
  const techman_robot_msgs::srv::TechmanRobotCommand_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_success
  {
    size_t item_size = sizeof(ros_message.is_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_techman_robot_msgs
max_serialized_size_TechmanRobotCommand_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: is_success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TechmanRobotCommand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const techman_robot_msgs::srv::TechmanRobotCommand_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TechmanRobotCommand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<techman_robot_msgs::srv::TechmanRobotCommand_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TechmanRobotCommand_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const techman_robot_msgs::srv::TechmanRobotCommand_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TechmanRobotCommand_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TechmanRobotCommand_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TechmanRobotCommand_Response__callbacks = {
  "techman_robot_msgs::srv",
  "TechmanRobotCommand_Response",
  _TechmanRobotCommand_Response__cdr_serialize,
  _TechmanRobotCommand_Response__cdr_deserialize,
  _TechmanRobotCommand_Response__get_serialized_size,
  _TechmanRobotCommand_Response__max_serialized_size
};

static rosidl_message_type_support_t _TechmanRobotCommand_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TechmanRobotCommand_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace techman_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_techman_robot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<techman_robot_msgs::srv::TechmanRobotCommand_Response>()
{
  return &techman_robot_msgs::srv::typesupport_fastrtps_cpp::_TechmanRobotCommand_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, techman_robot_msgs, srv, TechmanRobotCommand_Response)() {
  return &techman_robot_msgs::srv::typesupport_fastrtps_cpp::_TechmanRobotCommand_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace techman_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TechmanRobotCommand__callbacks = {
  "techman_robot_msgs::srv",
  "TechmanRobotCommand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, techman_robot_msgs, srv, TechmanRobotCommand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, techman_robot_msgs, srv, TechmanRobotCommand_Response)(),
};

static rosidl_service_type_support_t _TechmanRobotCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TechmanRobotCommand__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace techman_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_techman_robot_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<techman_robot_msgs::srv::TechmanRobotCommand>()
{
  return &techman_robot_msgs::srv::typesupport_fastrtps_cpp::_TechmanRobotCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, techman_robot_msgs, srv, TechmanRobotCommand)() {
  return &techman_robot_msgs::srv::typesupport_fastrtps_cpp::_TechmanRobotCommand__handle;
}

#ifdef __cplusplus
}
#endif
