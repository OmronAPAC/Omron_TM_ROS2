// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/srv/detail/set_positions__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/srv/detail/set_positions__functions.h"
#include "tm_msgs/srv/detail/set_positions__struct.h"


// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__SetPositions_Request__init(message_memory);
}

void SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_fini_function(void * message_memory)
{
  tm_msgs__srv__SetPositions_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_member_array[6] = {
  {
    "motion_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetPositions_Request, motion_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetPositions_Request, positions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetPositions_Request, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetPositions_Request, acc_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blend_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetPositions_Request, blend_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fine_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetPositions_Request, fine_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_members = {
  "tm_msgs__srv",  // message namespace
  "SetPositions_Request",  // message name
  6,  // number of fields
  sizeof(tm_msgs__srv__SetPositions_Request),
  SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_member_array,  // message members
  SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_type_support_handle = {
  0,
  &SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetPositions_Request)() {
  if (!SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_type_support_handle.typesupport_identifier) {
    SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetPositions_Request__rosidl_typesupport_introspection_c__SetPositions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/set_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/set_positions__functions.h"
// already included above
// #include "tm_msgs/srv/detail/set_positions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__SetPositions_Response__init(message_memory);
}

void SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_fini_function(void * message_memory)
{
  tm_msgs__srv__SetPositions_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetPositions_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_members = {
  "tm_msgs__srv",  // message namespace
  "SetPositions_Response",  // message name
  1,  // number of fields
  sizeof(tm_msgs__srv__SetPositions_Response),
  SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_member_array,  // message members
  SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_type_support_handle = {
  0,
  &SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetPositions_Response)() {
  if (!SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_type_support_handle.typesupport_identifier) {
    SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetPositions_Response__rosidl_typesupport_introspection_c__SetPositions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/set_positions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_service_members = {
  "tm_msgs__srv",  // service namespace
  "SetPositions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_Request_message_type_support_handle,
  NULL  // response message
  // tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_Response_message_type_support_handle
};

static rosidl_service_type_support_t tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_service_type_support_handle = {
  0,
  &tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetPositions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetPositions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetPositions)() {
  if (!tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_service_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetPositions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetPositions_Response)()->data;
  }

  return &tm_msgs__srv__detail__set_positions__rosidl_typesupport_introspection_c__SetPositions_service_type_support_handle;
}
