// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice
#include "techman_robot_msgs/srv/detail/techman_robot_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "techman_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "techman_robot_msgs/srv/detail/techman_robot_command__struct.h"
#include "techman_robot_msgs/srv/detail/techman_robot_command__functions.h"
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

#include "rosidl_runtime_c/string.h"  // command, command_parameter_string
#include "rosidl_runtime_c/string_functions.h"  // command, command_parameter_string

// forward declare type support functions


using _TechmanRobotCommand_Request__ros_msg_type = techman_robot_msgs__srv__TechmanRobotCommand_Request;

static bool _TechmanRobotCommand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TechmanRobotCommand_Request__ros_msg_type * ros_message = static_cast<const _TechmanRobotCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    const rosidl_runtime_c__String * str = &ros_message->command;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: command_parameter_string
  {
    const rosidl_runtime_c__String * str = &ros_message->command_parameter_string;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _TechmanRobotCommand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TechmanRobotCommand_Request__ros_msg_type * ros_message = static_cast<_TechmanRobotCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command.data) {
      rosidl_runtime_c__String__init(&ros_message->command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command'\n");
      return false;
    }
  }

  // Field name: command_parameter_string
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command_parameter_string.data) {
      rosidl_runtime_c__String__init(&ros_message->command_parameter_string);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command_parameter_string,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command_parameter_string'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_techman_robot_msgs
size_t get_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TechmanRobotCommand_Request__ros_msg_type * ros_message = static_cast<const _TechmanRobotCommand_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command.size + 1);
  // field.name command_parameter_string
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command_parameter_string.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TechmanRobotCommand_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_techman_robot_msgs
size_t max_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: command_parameter_string
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

static size_t _TechmanRobotCommand_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TechmanRobotCommand_Request = {
  "techman_robot_msgs::srv",
  "TechmanRobotCommand_Request",
  _TechmanRobotCommand_Request__cdr_serialize,
  _TechmanRobotCommand_Request__cdr_deserialize,
  _TechmanRobotCommand_Request__get_serialized_size,
  _TechmanRobotCommand_Request__max_serialized_size
};

static rosidl_message_type_support_t _TechmanRobotCommand_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TechmanRobotCommand_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, techman_robot_msgs, srv, TechmanRobotCommand_Request)() {
  return &_TechmanRobotCommand_Request__type_support;
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
// #include "techman_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__struct.h"
// already included above
// #include "techman_robot_msgs/srv/detail/techman_robot_command__functions.h"
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


using _TechmanRobotCommand_Response__ros_msg_type = techman_robot_msgs__srv__TechmanRobotCommand_Response;

static bool _TechmanRobotCommand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TechmanRobotCommand_Response__ros_msg_type * ros_message = static_cast<const _TechmanRobotCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_success
  {
    cdr << (ros_message->is_success ? true : false);
  }

  return true;
}

static bool _TechmanRobotCommand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TechmanRobotCommand_Response__ros_msg_type * ros_message = static_cast<_TechmanRobotCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: is_success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_techman_robot_msgs
size_t get_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TechmanRobotCommand_Response__ros_msg_type * ros_message = static_cast<const _TechmanRobotCommand_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name is_success
  {
    size_t item_size = sizeof(ros_message->is_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TechmanRobotCommand_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_techman_robot_msgs
size_t max_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: is_success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _TechmanRobotCommand_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_techman_robot_msgs__srv__TechmanRobotCommand_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TechmanRobotCommand_Response = {
  "techman_robot_msgs::srv",
  "TechmanRobotCommand_Response",
  _TechmanRobotCommand_Response__cdr_serialize,
  _TechmanRobotCommand_Response__cdr_deserialize,
  _TechmanRobotCommand_Response__get_serialized_size,
  _TechmanRobotCommand_Response__max_serialized_size
};

static rosidl_message_type_support_t _TechmanRobotCommand_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TechmanRobotCommand_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, techman_robot_msgs, srv, TechmanRobotCommand_Response)() {
  return &_TechmanRobotCommand_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "techman_robot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "techman_robot_msgs/srv/techman_robot_command.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TechmanRobotCommand__callbacks = {
  "techman_robot_msgs::srv",
  "TechmanRobotCommand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, techman_robot_msgs, srv, TechmanRobotCommand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, techman_robot_msgs, srv, TechmanRobotCommand_Response)(),
};

static rosidl_service_type_support_t TechmanRobotCommand__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TechmanRobotCommand__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, techman_robot_msgs, srv, TechmanRobotCommand)() {
  return &TechmanRobotCommand__handle;
}

#if defined(__cplusplus)
}
#endif
