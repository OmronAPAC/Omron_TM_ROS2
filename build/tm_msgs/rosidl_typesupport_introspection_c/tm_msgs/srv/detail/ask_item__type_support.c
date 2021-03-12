// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:srv/AskItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/srv/detail/ask_item__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/srv/detail/ask_item__functions.h"
#include "tm_msgs/srv/detail/ask_item__struct.h"


// Include directives for member types
// Member `id`
// Member `item`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__AskItem_Request__init(message_memory);
}

void AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_fini_function(void * message_memory)
{
  tm_msgs__srv__AskItem_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskItem_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "item",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskItem_Request, item),  // bytes offset in struct
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
    offsetof(tm_msgs__srv__AskItem_Request, wait_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_members = {
  "tm_msgs__srv",  // message namespace
  "AskItem_Request",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__AskItem_Request),
  AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_member_array,  // message members
  AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_type_support_handle = {
  0,
  &AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskItem_Request)() {
  if (!AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_type_support_handle.typesupport_identifier) {
    AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AskItem_Request__rosidl_typesupport_introspection_c__AskItem_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/ask_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/ask_item__functions.h"
// already included above
// #include "tm_msgs/srv/detail/ask_item__struct.h"


// Include directives for member types
// Member `id`
// Member `value`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__AskItem_Response__init(message_memory);
}

void AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_fini_function(void * message_memory)
{
  tm_msgs__srv__AskItem_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_member_array[3] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskItem_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskItem_Response, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__AskItem_Response, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_members = {
  "tm_msgs__srv",  // message namespace
  "AskItem_Response",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__AskItem_Response),
  AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_member_array,  // message members
  AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_type_support_handle = {
  0,
  &AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskItem_Response)() {
  if (!AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_type_support_handle.typesupport_identifier) {
    AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AskItem_Response__rosidl_typesupport_introspection_c__AskItem_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/ask_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_service_members = {
  "tm_msgs__srv",  // service namespace
  "AskItem",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_Request_message_type_support_handle,
  NULL  // response message
  // tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_Response_message_type_support_handle
};

static rosidl_service_type_support_t tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_service_type_support_handle = {
  0,
  &tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskItem_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskItem_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskItem)() {
  if (!tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_service_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskItem_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, AskItem_Response)()->data;
  }

  return &tm_msgs__srv__detail__ask_item__rosidl_typesupport_introspection_c__AskItem_service_type_support_handle;
}
