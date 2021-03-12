// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/srv/detail/ask_sta__functions.h"
#include "tm_msgs/srv/detail/ask_sta__struct.h"


// Include directives for member types
// Member `subcmd`
// Member `subdata`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__AskSta_Request__init(message_memory);
}

void AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_fini_function(void * message_memory)
{
  tm_msgs__srv__AskSta_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_member_array[3] = {
  {
    "subcmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Request, subcmd),  // bytes offset in struct
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
    offsetof(tm_msgs__srv__AskSta_Request, subdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wait_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Request, wait_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_members = {
  "tm_msgs__srv",  // message namespace
  "AskSta_Request",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__AskSta_Request),
  AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_member_array,  // message members
  AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle = {
  0,
  &AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Request)() {
  if (!AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle.typesupport_identifier) {
    AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AskSta_Request__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__functions.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__struct.h"


// Include directives for member types
// Member `subcmd`
// Member `subdata`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__AskSta_Response__init(message_memory);
}

void AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_fini_function(void * message_memory)
{
  tm_msgs__srv__AskSta_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_member_array[3] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskSta_Response, ok),  // bytes offset in struct
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
    offsetof(tm_msgs__srv__AskSta_Response, subcmd),  // bytes offset in struct
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
    offsetof(tm_msgs__srv__AskSta_Response, subdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_members = {
  "tm_msgs__srv",  // message namespace
  "AskSta_Response",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__AskSta_Response),
  AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_member_array,  // message members
  AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle = {
  0,
  &AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Response)() {
  if (!AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle.typesupport_identifier) {
    AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AskSta_Response__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/ask_sta__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_members = {
  "tm_msgs__srv",  // service namespace
  "AskSta",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_Request_message_type_support_handle,
  NULL  // response message
  // tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_Response_message_type_support_handle
};

static rosidl_service_type_support_t tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle = {
  0,
  &tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta)() {
  if (!tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskSta_Response)()->data;
  }

  return &tm_msgs__srv__detail__ask_sta__rosidl_typesupport_introspection_c__AskSta_service_type_support_handle;
}
