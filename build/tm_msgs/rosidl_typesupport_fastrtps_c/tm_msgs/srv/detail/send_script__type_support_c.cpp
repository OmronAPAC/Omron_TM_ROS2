// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tm_msgs:srv/SendScript.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/send_script__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_msgs/srv/detail/send_script__struct.h"
#include "tm_msgs/srv/detail/send_script__functions.h"
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

#include "rosidl_runtime_c/string.h"  // id, script
#include "rosidl_runtime_c/string_functions.h"  // id, script

// forward declare type support functions


using _SendScript_Request__ros_msg_type = tm_msgs__srv__SendScript_Request;

static bool _SendScript_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendScript_Request__ros_msg_type * ros_message = static_cast<const _SendScript_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: script
  {
    const rosidl_runtime_c__String * str = &ros_message->script;
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

static bool _SendScript_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendScript_Request__ros_msg_type * ros_message = static_cast<_SendScript_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: script
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->script.data) {
      rosidl_runtime_c__String__init(&ros_message->script);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->script,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'script'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__SendScript_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendScript_Request__ros_msg_type * ros_message = static_cast<const _SendScript_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name script
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->script.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SendScript_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__SendScript_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__SendScript_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: script
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

static size_t _SendScript_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__SendScript_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SendScript_Request = {
  "tm_msgs::srv",
  "SendScript_Request",
  _SendScript_Request__cdr_serialize,
  _SendScript_Request__cdr_deserialize,
  _SendScript_Request__get_serialized_size,
  _SendScript_Request__max_serialized_size
};

static rosidl_message_type_support_t _SendScript_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendScript_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SendScript_Request)() {
  return &_SendScript_Request__type_support;
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
// #include "tm_msgs/srv/detail/send_script__struct.h"
// already included above
// #include "tm_msgs/srv/detail/send_script__functions.h"
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


using _SendScript_Response__ros_msg_type = tm_msgs__srv__SendScript_Response;

static bool _SendScript_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendScript_Response__ros_msg_type * ros_message = static_cast<const _SendScript_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    cdr << (ros_message->ok ? true : false);
  }

  return true;
}

static bool _SendScript_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendScript_Response__ros_msg_type * ros_message = static_cast<_SendScript_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ok = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__SendScript_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendScript_Response__ros_msg_type * ros_message = static_cast<const _SendScript_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _SendScript_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__SendScript_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__SendScript_Response(
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

static size_t _SendScript_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__SendScript_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SendScript_Response = {
  "tm_msgs::srv",
  "SendScript_Response",
  _SendScript_Response__cdr_serialize,
  _SendScript_Response__cdr_deserialize,
  _SendScript_Response__get_serialized_size,
  _SendScript_Response__max_serialized_size
};

static rosidl_message_type_support_t _SendScript_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendScript_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SendScript_Response)() {
  return &_SendScript_Response__type_support;
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
#include "tm_msgs/srv/send_script.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SendScript__callbacks = {
  "tm_msgs::srv",
  "SendScript",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SendScript_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SendScript_Response)(),
};

static rosidl_service_type_support_t SendScript__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SendScript__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SendScript)() {
  return &SendScript__handle;
}

#if defined(__cplusplus)
}
#endif
