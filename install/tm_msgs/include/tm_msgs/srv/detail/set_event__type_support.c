// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/srv/detail/set_event__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/srv/detail/set_event__functions.h"
#include "tm_msgs/srv/detail/set_event__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__SetEvent_Request__init(message_memory);
}

void SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_fini_function(void * message_memory)
{
  tm_msgs__srv__SetEvent_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_member_array[3] = {
  {
    "func",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetEvent_Request, func),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arg0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetEvent_Request, arg0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arg1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetEvent_Request, arg1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_members = {
  "tm_msgs__srv",  // message namespace
  "SetEvent_Request",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__SetEvent_Request),
  SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_member_array,  // message members
  SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_type_support_handle = {
  0,
  &SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetEvent_Request)() {
  if (!SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_type_support_handle.typesupport_identifier) {
    SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetEvent_Request__rosidl_typesupport_introspection_c__SetEvent_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/set_event__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/set_event__functions.h"
// already included above
// #include "tm_msgs/srv/detail/set_event__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__SetEvent_Response__init(message_memory);
}

void SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_fini_function(void * message_memory)
{
  tm_msgs__srv__SetEvent_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__SetEvent_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_members = {
  "tm_msgs__srv",  // message namespace
  "SetEvent_Response",  // message name
  1,  // number of fields
  sizeof(tm_msgs__srv__SetEvent_Response),
  SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_member_array,  // message members
  SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_type_support_handle = {
  0,
  &SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetEvent_Response)() {
  if (!SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_type_support_handle.typesupport_identifier) {
    SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetEvent_Response__rosidl_typesupport_introspection_c__SetEvent_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/set_event__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_service_members = {
  "tm_msgs__srv",  // service namespace
  "SetEvent",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_Request_message_type_support_handle,
  NULL  // response message
  // tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_Response_message_type_support_handle
};

static rosidl_service_type_support_t tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_service_type_support_handle = {
  0,
  &tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetEvent_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetEvent_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetEvent)() {
  if (!tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_service_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetEvent_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, SetEvent_Response)()->data;
  }

  return &tm_msgs__srv__detail__set_event__rosidl_typesupport_introspection_c__SetEvent_service_type_support_handle;
}
