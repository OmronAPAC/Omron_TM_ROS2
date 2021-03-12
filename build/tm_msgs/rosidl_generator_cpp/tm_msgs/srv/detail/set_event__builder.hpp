// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_EVENT__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__SET_EVENT__BUILDER_HPP_

#include "tm_msgs/srv/detail/set_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEvent_Request_arg1
{
public:
  explicit Init_SetEvent_Request_arg1(::tm_msgs::srv::SetEvent_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::SetEvent_Request arg1(::tm_msgs::srv::SetEvent_Request::_arg1_type arg)
  {
    msg_.arg1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SetEvent_Request msg_;
};

class Init_SetEvent_Request_arg0
{
public:
  explicit Init_SetEvent_Request_arg0(::tm_msgs::srv::SetEvent_Request & msg)
  : msg_(msg)
  {}
  Init_SetEvent_Request_arg1 arg0(::tm_msgs::srv::SetEvent_Request::_arg0_type arg)
  {
    msg_.arg0 = std::move(arg);
    return Init_SetEvent_Request_arg1(msg_);
  }

private:
  ::tm_msgs::srv::SetEvent_Request msg_;
};

class Init_SetEvent_Request_func
{
public:
  Init_SetEvent_Request_func()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEvent_Request_arg0 func(::tm_msgs::srv::SetEvent_Request::_func_type arg)
  {
    msg_.func = std::move(arg);
    return Init_SetEvent_Request_arg0(msg_);
  }

private:
  ::tm_msgs::srv::SetEvent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SetEvent_Request>()
{
  return tm_msgs::srv::builder::Init_SetEvent_Request_func();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEvent_Response_ok
{
public:
  Init_SetEvent_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::SetEvent_Response ok(::tm_msgs::srv::SetEvent_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SetEvent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SetEvent_Response>()
{
  return tm_msgs::srv::builder::Init_SetEvent_Response_ok();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SET_EVENT__BUILDER_HPP_
