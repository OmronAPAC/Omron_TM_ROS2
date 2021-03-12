// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tm_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_
#define TM_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_

#include "tm_msgs/srv/detail/set_io__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::SetIO_Request>()
{
  return "tm_msgs::srv::SetIO_Request";
}

template<>
inline const char * name<tm_msgs::srv::SetIO_Request>()
{
  return "tm_msgs/srv/SetIO_Request";
}

template<>
struct has_fixed_size<tm_msgs::srv::SetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_msgs::srv::SetIO_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_msgs::srv::SetIO_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::SetIO_Response>()
{
  return "tm_msgs::srv::SetIO_Response";
}

template<>
inline const char * name<tm_msgs::srv::SetIO_Response>()
{
  return "tm_msgs/srv/SetIO_Response";
}

template<>
struct has_fixed_size<tm_msgs::srv::SetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tm_msgs::srv::SetIO_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tm_msgs::srv::SetIO_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::SetIO>()
{
  return "tm_msgs::srv::SetIO";
}

template<>
inline const char * name<tm_msgs::srv::SetIO>()
{
  return "tm_msgs/srv/SetIO";
}

template<>
struct has_fixed_size<tm_msgs::srv::SetIO>
  : std::integral_constant<
    bool,
    has_fixed_size<tm_msgs::srv::SetIO_Request>::value &&
    has_fixed_size<tm_msgs::srv::SetIO_Response>::value
  >
{
};

template<>
struct has_bounded_size<tm_msgs::srv::SetIO>
  : std::integral_constant<
    bool,
    has_bounded_size<tm_msgs::srv::SetIO_Request>::value &&
    has_bounded_size<tm_msgs::srv::SetIO_Response>::value
  >
{
};

template<>
struct is_service<tm_msgs::srv::SetIO>
  : std::true_type
{
};

template<>
struct is_service_request<tm_msgs::srv::SetIO_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tm_msgs::srv::SetIO_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TM_MSGS__SRV__DETAIL__SET_IO__TRAITS_HPP_
