// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/msg/detail/sta_response__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/msg/detail/sta_response__functions.h"
#include "tm_msgs/msg/detail/sta_response__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `subcmd`
// Member `subdata`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StaResponse__rosidl_typesupport_introspection_c__StaResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__msg__StaResponse__init(message_memory);
}

void StaResponse__rosidl_typesupport_introspection_c__StaResponse_fini_function(void * message_memory)
{
  tm_msgs__msg__StaResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__StaResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subcmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__StaResponse, subcmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "subdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__msg__StaResponse, subdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_members = {
  "tm_msgs__msg",  // message namespace
  "StaResponse",  // message name
  3,  // number of fields
  sizeof(tm_msgs__msg__StaResponse),
  StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_member_array,  // message members
  StaResponse__rosidl_typesupport_introspection_c__StaResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  StaResponse__rosidl_typesupport_introspection_c__StaResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_type_support_handle = {
  0,
  &StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, msg, StaResponse)() {
  StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_type_support_handle.typesupport_identifier) {
    StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StaResponse__rosidl_typesupport_introspection_c__StaResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
