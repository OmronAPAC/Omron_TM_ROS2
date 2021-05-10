// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_POSITIONS__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__SET_POSITIONS__BUILDER_HPP_

#include "tm_msgs/srv/detail/set_positions__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPositions_Request_fine_goal
{
public:
  explicit Init_SetPositions_Request_fine_goal(::tm_msgs::srv::SetPositions_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::SetPositions_Request fine_goal(::tm_msgs::srv::SetPositions_Request::_fine_goal_type arg)
  {
    msg_.fine_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SetPositions_Request msg_;
};

class Init_SetPositions_Request_blend_percentage
{
public:
  explicit Init_SetPositions_Request_blend_percentage(::tm_msgs::srv::SetPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetPositions_Request_fine_goal blend_percentage(::tm_msgs::srv::SetPositions_Request::_blend_percentage_type arg)
  {
    msg_.blend_percentage = std::move(arg);
    return Init_SetPositions_Request_fine_goal(msg_);
  }

private:
  ::tm_msgs::srv::SetPositions_Request msg_;
};

class Init_SetPositions_Request_acc_time
{
public:
  explicit Init_SetPositions_Request_acc_time(::tm_msgs::srv::SetPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetPositions_Request_blend_percentage acc_time(::tm_msgs::srv::SetPositions_Request::_acc_time_type arg)
  {
    msg_.acc_time = std::move(arg);
    return Init_SetPositions_Request_blend_percentage(msg_);
  }

private:
  ::tm_msgs::srv::SetPositions_Request msg_;
};

class Init_SetPositions_Request_velocity
{
public:
  explicit Init_SetPositions_Request_velocity(::tm_msgs::srv::SetPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetPositions_Request_acc_time velocity(::tm_msgs::srv::SetPositions_Request::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SetPositions_Request_acc_time(msg_);
  }

private:
  ::tm_msgs::srv::SetPositions_Request msg_;
};

class Init_SetPositions_Request_positions
{
public:
  explicit Init_SetPositions_Request_positions(::tm_msgs::srv::SetPositions_Request & msg)
  : msg_(msg)
  {}
  Init_SetPositions_Request_velocity positions(::tm_msgs::srv::SetPositions_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_SetPositions_Request_velocity(msg_);
  }

private:
  ::tm_msgs::srv::SetPositions_Request msg_;
};

class Init_SetPositions_Request_motion_type
{
public:
  Init_SetPositions_Request_motion_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPositions_Request_positions motion_type(::tm_msgs::srv::SetPositions_Request::_motion_type_type arg)
  {
    msg_.motion_type = std::move(arg);
    return Init_SetPositions_Request_positions(msg_);
  }

private:
  ::tm_msgs::srv::SetPositions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SetPositions_Request>()
{
  return tm_msgs::srv::builder::Init_SetPositions_Request_motion_type();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPositions_Response_ok
{
public:
  Init_SetPositions_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::SetPositions_Response ok(::tm_msgs::srv::SetPositions_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SetPositions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SetPositions_Response>()
{
  return tm_msgs::srv::builder::Init_SetPositions_Response_ok();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SET_POSITIONS__BUILDER_HPP_
