// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice

#ifndef TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__TRAITS_HPP_
#define TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__TRAITS_HPP_

#include "techman_robot_msgs/srv/detail/techman_robot_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<techman_robot_msgs::srv::TechmanRobotCommand_Request>()
{
  return "techman_robot_msgs::srv::TechmanRobotCommand_Request";
}

template<>
inline const char * name<techman_robot_msgs::srv::TechmanRobotCommand_Request>()
{
  return "techman_robot_msgs/srv/TechmanRobotCommand_Request";
}

template<>
struct has_fixed_size<techman_robot_msgs::srv::TechmanRobotCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<techman_robot_msgs::srv::TechmanRobotCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<techman_robot_msgs::srv::TechmanRobotCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<techman_robot_msgs::srv::TechmanRobotCommand_Response>()
{
  return "techman_robot_msgs::srv::TechmanRobotCommand_Response";
}

template<>
inline const char * name<techman_robot_msgs::srv::TechmanRobotCommand_Response>()
{
  return "techman_robot_msgs/srv/TechmanRobotCommand_Response";
}

template<>
struct has_fixed_size<techman_robot_msgs::srv::TechmanRobotCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<techman_robot_msgs::srv::TechmanRobotCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<techman_robot_msgs::srv::TechmanRobotCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<techman_robot_msgs::srv::TechmanRobotCommand>()
{
  return "techman_robot_msgs::srv::TechmanRobotCommand";
}

template<>
inline const char * name<techman_robot_msgs::srv::TechmanRobotCommand>()
{
  return "techman_robot_msgs/srv/TechmanRobotCommand";
}

template<>
struct has_fixed_size<techman_robot_msgs::srv::TechmanRobotCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<techman_robot_msgs::srv::TechmanRobotCommand_Request>::value &&
    has_fixed_size<techman_robot_msgs::srv::TechmanRobotCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<techman_robot_msgs::srv::TechmanRobotCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<techman_robot_msgs::srv::TechmanRobotCommand_Request>::value &&
    has_bounded_size<techman_robot_msgs::srv::TechmanRobotCommand_Response>::value
  >
{
};

template<>
struct is_service<techman_robot_msgs::srv::TechmanRobotCommand>
  : std::true_type
{
};

template<>
struct is_service_request<techman_robot_msgs::srv::TechmanRobotCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<techman_robot_msgs::srv::TechmanRobotCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__TRAITS_HPP_
