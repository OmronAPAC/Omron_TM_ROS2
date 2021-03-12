// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tmr_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__SET_POSITIONS__TRAITS_HPP_
#define TMR_MSGS__SRV__DETAIL__SET_POSITIONS__TRAITS_HPP_

#include "tmr_msgs/srv/detail/set_positions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tmr_msgs::srv::SetPositions_Request>()
{
  return "tmr_msgs::srv::SetPositions_Request";
}

template<>
inline const char * name<tmr_msgs::srv::SetPositions_Request>()
{
  return "tmr_msgs/srv/SetPositions_Request";
}

template<>
struct has_fixed_size<tmr_msgs::srv::SetPositions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tmr_msgs::srv::SetPositions_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tmr_msgs::srv::SetPositions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tmr_msgs::srv::SetPositions_Response>()
{
  return "tmr_msgs::srv::SetPositions_Response";
}

template<>
inline const char * name<tmr_msgs::srv::SetPositions_Response>()
{
  return "tmr_msgs/srv/SetPositions_Response";
}

template<>
struct has_fixed_size<tmr_msgs::srv::SetPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tmr_msgs::srv::SetPositions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tmr_msgs::srv::SetPositions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tmr_msgs::srv::SetPositions>()
{
  return "tmr_msgs::srv::SetPositions";
}

template<>
inline const char * name<tmr_msgs::srv::SetPositions>()
{
  return "tmr_msgs/srv/SetPositions";
}

template<>
struct has_fixed_size<tmr_msgs::srv::SetPositions>
  : std::integral_constant<
    bool,
    has_fixed_size<tmr_msgs::srv::SetPositions_Request>::value &&
    has_fixed_size<tmr_msgs::srv::SetPositions_Response>::value
  >
{
};

template<>
struct has_bounded_size<tmr_msgs::srv::SetPositions>
  : std::integral_constant<
    bool,
    has_bounded_size<tmr_msgs::srv::SetPositions_Request>::value &&
    has_bounded_size<tmr_msgs::srv::SetPositions_Response>::value
  >
{
};

template<>
struct is_service<tmr_msgs::srv::SetPositions>
  : std::true_type
{
};

template<>
struct is_service_request<tmr_msgs::srv::SetPositions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tmr_msgs::srv::SetPositions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TMR_MSGS__SRV__DETAIL__SET_POSITIONS__TRAITS_HPP_
