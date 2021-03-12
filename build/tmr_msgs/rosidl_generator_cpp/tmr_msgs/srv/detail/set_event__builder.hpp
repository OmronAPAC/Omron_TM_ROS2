// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__SET_EVENT__BUILDER_HPP_
#define TMR_MSGS__SRV__DETAIL__SET_EVENT__BUILDER_HPP_

#include "tmr_msgs/srv/detail/set_event__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace srv
{

namespace builder
{

class Init_SetEvent_Request_arg1
{
public:
  explicit Init_SetEvent_Request_arg1(::tmr_msgs::srv::SetEvent_Request & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::srv::SetEvent_Request arg1(::tmr_msgs::srv::SetEvent_Request::_arg1_type arg)
  {
    msg_.arg1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::SetEvent_Request msg_;
};

class Init_SetEvent_Request_arg0
{
public:
  explicit Init_SetEvent_Request_arg0(::tmr_msgs::srv::SetEvent_Request & msg)
  : msg_(msg)
  {}
  Init_SetEvent_Request_arg1 arg0(::tmr_msgs::srv::SetEvent_Request::_arg0_type arg)
  {
    msg_.arg0 = std::move(arg);
    return Init_SetEvent_Request_arg1(msg_);
  }

private:
  ::tmr_msgs::srv::SetEvent_Request msg_;
};

class Init_SetEvent_Request_func
{
public:
  Init_SetEvent_Request_func()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetEvent_Request_arg0 func(::tmr_msgs::srv::SetEvent_Request::_func_type arg)
  {
    msg_.func = std::move(arg);
    return Init_SetEvent_Request_arg0(msg_);
  }

private:
  ::tmr_msgs::srv::SetEvent_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::SetEvent_Request>()
{
  return tmr_msgs::srv::builder::Init_SetEvent_Request_func();
}

}  // namespace tmr_msgs


namespace tmr_msgs
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
  ::tmr_msgs::srv::SetEvent_Response ok(::tmr_msgs::srv::SetEvent_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::SetEvent_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::SetEvent_Response>()
{
  return tmr_msgs::srv::builder::Init_SetEvent_Response_ok();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__SRV__DETAIL__SET_EVENT__BUILDER_HPP_
