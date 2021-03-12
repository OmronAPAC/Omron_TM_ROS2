// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/SetIO.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_IO__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__SET_IO__BUILDER_HPP_

#include "tm_msgs/srv/detail/set_io__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetIO_Request_state
{
public:
  explicit Init_SetIO_Request_state(::tm_msgs::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::SetIO_Request state(::tm_msgs::srv::SetIO_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_pin
{
public:
  explicit Init_SetIO_Request_pin(::tm_msgs::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  Init_SetIO_Request_state pin(::tm_msgs::srv::SetIO_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_SetIO_Request_state(msg_);
  }

private:
  ::tm_msgs::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_type
{
public:
  explicit Init_SetIO_Request_type(::tm_msgs::srv::SetIO_Request & msg)
  : msg_(msg)
  {}
  Init_SetIO_Request_pin type(::tm_msgs::srv::SetIO_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SetIO_Request_pin(msg_);
  }

private:
  ::tm_msgs::srv::SetIO_Request msg_;
};

class Init_SetIO_Request_module
{
public:
  Init_SetIO_Request_module()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetIO_Request_type module(::tm_msgs::srv::SetIO_Request::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_SetIO_Request_type(msg_);
  }

private:
  ::tm_msgs::srv::SetIO_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SetIO_Request>()
{
  return tm_msgs::srv::builder::Init_SetIO_Request_module();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SetIO_Response_ok
{
public:
  Init_SetIO_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::SetIO_Response ok(::tm_msgs::srv::SetIO_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SetIO_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SetIO_Response>()
{
  return tm_msgs::srv::builder::Init_SetIO_Response_ok();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SET_IO__BUILDER_HPP_
