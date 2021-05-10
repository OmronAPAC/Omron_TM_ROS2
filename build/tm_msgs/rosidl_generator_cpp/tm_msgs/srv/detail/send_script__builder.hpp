// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/SendScript.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SEND_SCRIPT__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__SEND_SCRIPT__BUILDER_HPP_

#include "tm_msgs/srv/detail/send_script__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SendScript_Request_script
{
public:
  explicit Init_SendScript_Request_script(::tm_msgs::srv::SendScript_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::SendScript_Request script(::tm_msgs::srv::SendScript_Request::_script_type arg)
  {
    msg_.script = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Request msg_;
};

class Init_SendScript_Request_id
{
public:
  Init_SendScript_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendScript_Request_script id(::tm_msgs::srv::SendScript_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SendScript_Request_script(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SendScript_Request>()
{
  return tm_msgs::srv::builder::Init_SendScript_Request_id();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_SendScript_Response_ok
{
public:
  Init_SendScript_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::SendScript_Response ok(::tm_msgs::srv::SendScript_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::SendScript_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::SendScript_Response>()
{
  return tm_msgs::srv::builder::Init_SendScript_Response_ok();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SEND_SCRIPT__BUILDER_HPP_
