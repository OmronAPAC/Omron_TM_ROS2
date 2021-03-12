// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tm_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/set_positions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tm_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tm_msgs/srv/detail/set_positions__struct.h"
#include "tm_msgs/srv/detail/set_positions__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // positions
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // positions

// forward declare type support functions


using _SetPositions_Request__ros_msg_type = tm_msgs__srv__SetPositions_Request;

static bool _SetPositions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPositions_Request__ros_msg_type * ros_message = static_cast<const _SetPositions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_type
  {
    cdr << ros_message->motion_type;
  }

  // Field name: positions
  {
    size_t size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    cdr << ros_message->velocity;
  }

  // Field name: acc_time
  {
    cdr << ros_message->acc_time;
  }

  // Field name: blend_percentage
  {
    cdr << ros_message->blend_percentage;
  }

  // Field name: fine_goal
  {
    cdr << (ros_message->fine_goal ? true : false);
  }

  return true;
}

static bool _SetPositions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPositions_Request__ros_msg_type * ros_message = static_cast<_SetPositions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_type
  {
    cdr >> ros_message->motion_type;
  }

  // Field name: positions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->positions.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->positions);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->positions, size)) {
      return "failed to create array for field 'positions'";
    }
    auto array_ptr = ros_message->positions.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: velocity
  {
    cdr >> ros_message->velocity;
  }

  // Field name: acc_time
  {
    cdr >> ros_message->acc_time;
  }

  // Field name: blend_percentage
  {
    cdr >> ros_message->blend_percentage;
  }

  // Field name: fine_goal
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fine_goal = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__SetPositions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPositions_Request__ros_msg_type * ros_message = static_cast<const _SetPositions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motion_type
  {
    size_t item_size = sizeof(ros_message->motion_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name positions
  {
    size_t array_size = ros_message->positions.size;
    auto array_ptr = ros_message->positions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_time
  {
    size_t item_size = sizeof(ros_message->acc_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blend_percentage
  {
    size_t item_size = sizeof(ros_message->blend_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fine_goal
  {
    size_t item_size = sizeof(ros_message->fine_goal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPositions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__SetPositions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__SetPositions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: motion_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: positions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: acc_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: blend_percentage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fine_goal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPositions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__SetPositions_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPositions_Request = {
  "tm_msgs::srv",
  "SetPositions_Request",
  _SetPositions_Request__cdr_serialize,
  _SetPositions_Request__cdr_deserialize,
  _SetPositions_Request__get_serialized_size,
  _SetPositions_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPositions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPositions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SetPositions_Request)() {
  return &_SetPositions_Request__type_support;
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
// #include "tm_msgs/srv/detail/set_positions__struct.h"
// already included above
// #include "tm_msgs/srv/detail/set_positions__functions.h"
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


using _SetPositions_Response__ros_msg_type = tm_msgs__srv__SetPositions_Response;

static bool _SetPositions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPositions_Response__ros_msg_type * ros_message = static_cast<const _SetPositions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    cdr << (ros_message->ok ? true : false);
  }

  return true;
}

static bool _SetPositions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPositions_Response__ros_msg_type * ros_message = static_cast<_SetPositions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ok
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ok = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t get_serialized_size_tm_msgs__srv__SetPositions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPositions_Response__ros_msg_type * ros_message = static_cast<const _SetPositions_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _SetPositions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tm_msgs__srv__SetPositions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tm_msgs
size_t max_serialized_size_tm_msgs__srv__SetPositions_Response(
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

static size_t _SetPositions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tm_msgs__srv__SetPositions_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPositions_Response = {
  "tm_msgs::srv",
  "SetPositions_Response",
  _SetPositions_Response__cdr_serialize,
  _SetPositions_Response__cdr_deserialize,
  _SetPositions_Response__get_serialized_size,
  _SetPositions_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPositions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPositions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SetPositions_Response)() {
  return &_SetPositions_Response__type_support;
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
#include "tm_msgs/srv/set_positions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPositions__callbacks = {
  "tm_msgs::srv",
  "SetPositions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SetPositions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SetPositions_Response)(),
};

static rosidl_service_type_support_t SetPositions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetPositions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tm_msgs, srv, SetPositions)() {
  return &SetPositions__handle;
}

#if defined(__cplusplus)
}
#endif
