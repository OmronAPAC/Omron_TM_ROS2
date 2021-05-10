// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tmr_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__STA_RESPONSE__TRAITS_HPP_
#define TMR_MSGS__MSG__DETAIL__STA_RESPONSE__TRAITS_HPP_

#include "tmr_msgs/msg/detail/sta_response__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tmr_msgs::msg::StaResponse>()
{
  return "tmr_msgs::msg::StaResponse";
}

template<>
inline const char * name<tmr_msgs::msg::StaResponse>()
{
  return "tmr_msgs/msg/StaResponse";
}

template<>
struct has_fixed_size<tmr_msgs::msg::StaResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tmr_msgs::msg::StaResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tmr_msgs::msg::StaResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TMR_MSGS__MSG__DETAIL__STA_RESPONSE__TRAITS_HPP_
