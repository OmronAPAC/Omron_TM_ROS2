// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tmr_msgs:msg/SvrResponse.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__SVR_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TMR_MSGS__MSG__DETAIL__SVR_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tmr_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tmr_msgs/msg/detail/svr_response__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace tmr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmr_msgs
cdr_serialize(
  const tmr_msgs::msg::SvrResponse & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tmr_msgs::msg::SvrResponse & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmr_msgs
get_serialized_size(
  const tmr_msgs::msg::SvrResponse & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmr_msgs
max_serialized_size_SvrResponse(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tmr_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tmr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tmr_msgs, msg, SvrResponse)();

#ifdef __cplusplus
}
#endif

#endif  // TMR_MSGS__MSG__DETAIL__SVR_RESPONSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
