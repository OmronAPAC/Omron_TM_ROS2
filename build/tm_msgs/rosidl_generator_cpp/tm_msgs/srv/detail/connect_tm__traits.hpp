// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__CONNECT_TM__TRAITS_HPP_
#define TM_MSGS__SRV__DETAIL__CONNECT_TM__TRAITS_HPP_

#include "tm_msgs/srv/detail/connect_tm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::ConnectTM_Request>()
{
  return "tm_msgs::srv::ConnectTM_Request";
}

template<>
inline const char * name<tm_msgs::srv::ConnectTM_Request>()
{
  return "tm_msgs/srv/ConnectTM_Request";
}

template<>
struct has_fixed_size<tm_msgs::srv::ConnectTM_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_msgs::srv::ConnectTM_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_msgs::srv::ConnectTM_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::ConnectTM_Response>()
{
  return "tm_msgs::srv::ConnectTM_Response";
}

template<>
inline const char * name<tm_msgs::srv::ConnectTM_Response>()
{
  return "tm_msgs/srv/ConnectTM_Response";
}

template<>
struct has_fixed_size<tm_msgs::srv::ConnectTM_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_msgs::srv::ConnectTM_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_msgs::srv::ConnectTM_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::ConnectTM>()
{
  return "tm_msgs::srv::ConnectTM";
}

template<>
inline const char * name<tm_msgs::srv::ConnectTM>()
{
  return "tm_msgs/srv/ConnectTM";
}

template<>
struct has_fixed_size<tm_msgs::srv::ConnectTM>
  : std::integral_constant<
    bool,
    has_fixed_size<tm_msgs::srv::ConnectTM_Request>::value &&
    has_fixed_size<tm_msgs::srv::ConnectTM_Response>::value
  >
{
};

template<>
struct has_bounded_size<tm_msgs::srv::ConnectTM>
  : std::integral_constant<
    bool,
    has_bounded_size<tm_msgs::srv::ConnectTM_Request>::value &&
    has_bounded_size<tm_msgs::srv::ConnectTM_Response>::value
  >
{
};

template<>
struct is_service<tm_msgs::srv::ConnectTM>
  : std::true_type
{
};

template<>
struct is_service_request<tm_msgs::srv::ConnectTM_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tm_msgs::srv::ConnectTM_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TM_MSGS__SRV__DETAIL__CONNECT_TM__TRAITS_HPP_
