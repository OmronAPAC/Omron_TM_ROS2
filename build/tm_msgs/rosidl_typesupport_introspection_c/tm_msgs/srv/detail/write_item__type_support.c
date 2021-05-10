// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tm_msgs:srv/WriteItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tm_msgs/srv/detail/write_item__rosidl_typesupport_introspection_c.h"
#include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tm_msgs/srv/detail/write_item__functions.h"
#include "tm_msgs/srv/detail/write_item__struct.h"


// Include directives for member types
// Member `id`
// Member `item`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__WriteItem_Request__init(message_memory);
}

void WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_fini_function(void * message_memory)
{
  tm_msgs__srv__WriteItem_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__WriteItem_Request, id),  // bytes offset in struct
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
    offsetof(tm_msgs__srv__WriteItem_Request, item),  // bytes offset in struct
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
    offsetof(tm_msgs__srv__WriteItem_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_members = {
  "tm_msgs__srv",  // message namespace
  "WriteItem_Request",  // message name
  3,  // number of fields
  sizeof(tm_msgs__srv__WriteItem_Request),
  WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_member_array,  // message members
  WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_type_support_handle = {
  0,
  &WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, WriteItem_Request)() {
  if (!WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_type_support_handle.typesupport_identifier) {
    WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WriteItem_Request__rosidl_typesupport_introspection_c__WriteItem_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tm_msgs/srv/detail/write_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tm_msgs/srv/detail/write_item__functions.h"
// already included above
// #include "tm_msgs/srv/detail/write_item__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tm_msgs__srv__WriteItem_Response__init(message_memory);
}

void WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_fini_function(void * message_memory)
{
  tm_msgs__srv__WriteItem_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_member_array[1] = {
  {
    "ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tm_msgs__srv__WriteItem_Response, ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_members = {
  "tm_msgs__srv",  // message namespace
  "WriteItem_Response",  // message name
  1,  // number of fields
  sizeof(tm_msgs__srv__WriteItem_Response),
  WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_member_array,  // message members
  WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_type_support_handle = {
  0,
  &WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, WriteItem_Response)() {
  if (!WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_type_support_handle.typesupport_identifier) {
    WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WriteItem_Response__rosidl_typesupport_introspection_c__WriteItem_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tm_msgs/srv/detail/write_item__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_service_members = {
  "tm_msgs__srv",  // service namespace
  "WriteItem",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_Request_message_type_support_handle,
  NULL  // response message
  // tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_Response_message_type_support_handle
};

static rosidl_service_type_support_t tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_service_type_support_handle = {
  0,
  &tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, WriteItem_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, WriteItem_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, WriteItem)() {
  if (!tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_service_type_support_handle.typesupport_identifier) {
    tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, WriteItem_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tm_msgs, srv, WriteItem_Response)()->data;
  }

  return &tm_msgs__srv__detail__write_item__rosidl_typesupport_introspection_c__WriteItem_service_type_support_handle;
}
