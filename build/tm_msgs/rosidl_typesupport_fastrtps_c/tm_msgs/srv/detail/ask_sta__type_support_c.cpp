// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_msgs/srv/detail/ask_sta__struct.h"
#include "tm_msgs/srv/detail/ask_sta__functions.h"
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

#include "rosidl_runtime_c/string.h"  // subcmd, subdata
#include "rosidl_runtime_c/string_functions.h"  // subcmd, subdata

// forward declare type support functions


using _AskSta_Request__ros_msg_type = tm_msgs__srv__AskSta_Request;

static bool _AskSta_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AskSta_Request__ros_msg_type * ros_message = static_cast<const _AskSta_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: subcmd
  {
    const rosidl_runtime_c__String * str = &ros_message->subcmd;
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

  // Field name: subdata
  {
    const rosidl_runtime_c__String * str = &ros_message->subdata;
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

  // Field name: wait_time
  {
    cdr << ros_message->wait_time;
  }

  return true;
}

static bool _AskSta_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AskSta_Request__ros_msg_type * ros_message = static_cast<_AskSta_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: subcmd
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->subcmd.data) {
      rosidl_runtime_c__String__init(&ros_message->subcmd);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->subcmd,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'subcmd'\n");
      return false;
    }
  }

  // Field name: subdata
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->subdata.data) {
      rosidl_runtime_c__String__init(&ros_message->subdata);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->subdata,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'subdata'\n");
      return false;
    }
  }

  // Field name: wait_time
  {
    cdr >> ros_message->wait_time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__AskSta_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AskSta_Request__ros_msg_type * ros_message = static_cast<const _AskSta_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name subcmd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->subcmd.size + 1);
  // field.name subdata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->subdata.size + 1);
  // field.name wait_time
  {
    size_t item_size = sizeof(ros_message->wait_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AskSta_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__AskSta_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__AskSta_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: subcmd
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: subdata
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: wait_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AskSta_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__AskSta_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AskSta_Request = {
  "tm_msgs::srv",
  "AskSta_Request",
  _AskSta_Request__cdr_serialize,
  _AskSta_Request__cdr_deserialize,
  _AskSta_Request__get_serialized_size,
  _AskSta_Request__max_serialized_size
};

static rosidl_message_type_support_t _AskSta_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AskSta_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, AskSta_Request)() {
  return &_AskSta_Request__type_support;
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
// #include "tm_msgs/srv/detail/ask_sta__struct.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // subcmd, subdata
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // subcmd, subdata

// forward declare type support functions


using _AskSta_Response__ros_msg_type = tm_msgs__srv__AskSta_Response;

static bool _AskSta_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AskSta_Response__ros_msg_type * ros_message = static_cast<const _AskSta_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    cdr << (ros_message->ok ? true : false);
  }

  // Field name: subcmd
  {
    const rosidl_runtime_c__String * str = &ros_message->subcmd;
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

  // Field name: subdata
  {
    const rosidl_runtime_c__String * str = &ros_message->subdata;
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

static bool _AskSta_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AskSta_Response__ros_msg_type * ros_message = static_cast<_AskSta_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ok = tmp ? true : false;
  }

  // Field name: subcmd
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->subcmd.data) {
      rosidl_runtime_c__String__init(&ros_message->subcmd);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->subcmd,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'subcmd'\n");
      return false;
    }
  }

  // Field name: subdata
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->subdata.data) {
      rosidl_runtime_c__String__init(&ros_message->subdata);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->subdata,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'subdata'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__AskSta_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AskSta_Response__ros_msg_type * ros_message = static_cast<const _AskSta_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name subcmd
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->subcmd.size + 1);
  // field.name subdata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->subdata.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _AskSta_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__AskSta_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__AskSta_Response(
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
  // member: subcmd
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: subdata
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

static size_t _AskSta_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__AskSta_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AskSta_Response = {
  "tm_msgs::srv",
  "AskSta_Response",
  _AskSta_Response__cdr_serialize,
  _AskSta_Response__cdr_deserialize,
  _AskSta_Response__get_serialized_size,
  _AskSta_Response__max_serialized_size
};

static rosidl_message_type_support_t _AskSta_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AskSta_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, AskSta_Response)() {
  return &_AskSta_Response__type_support;
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
#include "tm_msgs/srv/ask_sta.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t AskSta__callbacks = {
  "tm_msgs::srv",
  "AskSta",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, AskSta_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, AskSta_Response)(),
};

static rosidl_service_type_support_t AskSta__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &AskSta__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, AskSta)() {
  return &AskSta__handle;
}

#if defined(__cplusplus)
}
#endif
