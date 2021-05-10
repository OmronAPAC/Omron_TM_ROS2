// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tm_msgs:srv/SendScript.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SEND_SCRIPT__TRAITS_HPP_
#define TM_MSGS__SRV__DETAIL__SEND_SCRIPT__TRAITS_HPP_

#include "tm_msgs/srv/detail/send_script__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::SendScript_Request>()
{
  return "tm_msgs::srv::SendScript_Request";
}

template<>
inline const char * name<tm_msgs::srv::SendScript_Request>()
{
  return "tm_msgs/srv/SendScript_Request";
}

template<>
struct has_fixed_size<tm_msgs::srv::SendScript_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tm_msgs::srv::SendScript_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tm_msgs::srv::SendScript_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::SendScript_Response>()
{
  return "tm_msgs::srv::SendScript_Response";
}

template<>
inline const char * name<tm_msgs::srv::SendScript_Response>()
{
  return "tm_msgs/srv/SendScript_Response";
}

template<>
struct has_fixed_size<tm_msgs::srv::SendScript_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_msgs::srv::SendScript_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_msgs::srv::SendScript_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::SendScript>()
{
  return "tm_msgs::srv::SendScript";
}

template<>
inline const char * name<tm_msgs::srv::SendScript>()
{
  return "tm_msgs/srv/SendScript";
}

template<>
struct has_fixed_size<tm_msgs::srv::SendScript>
  : std::integral_constant<
    bool,
    has_fixed_size<tm_msgs::srv::SendScript_Request>::value &&
    has_fixed_size<tm_msgs::srv::SendScript_Response>::value
  >
{
};

template<>
struct has_bounded_size<tm_msgs::srv::SendScript>
  : std::integral_constant<
    bool,
    has_bounded_size<tm_msgs::srv::SendScript_Request>::value &&
    has_bounded_size<tm_msgs::srv::SendScript_Response>::value
  >
{
};

template<>
struct is_service<tm_msgs::srv::SendScript>
  : std::true_type
{
};

template<>
struct is_service_request<tm_msgs::srv::SendScript_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tm_msgs::srv::SendScript_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TM_MSGS__SRV__DETAIL__SEND_SCRIPT__TRAITS_HPP_
