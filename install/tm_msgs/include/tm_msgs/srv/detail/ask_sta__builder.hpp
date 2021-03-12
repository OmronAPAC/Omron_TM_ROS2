// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__ASK_STA__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__ASK_STA__BUILDER_HPP_

#include "tm_msgs/srv/detail/ask_sta__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_AskSta_Request_wait_time
{
public:
  explicit Init_AskSta_Request_wait_time(::tm_msgs::srv::AskSta_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::AskSta_Request wait_time(::tm_msgs::srv::AskSta_Request::_wait_time_type arg)
  {
    msg_.wait_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::AskSta_Request msg_;
};

class Init_AskSta_Request_subdata
{
public:
  explicit Init_AskSta_Request_subdata(::tm_msgs::srv::AskSta_Request & msg)
  : msg_(msg)
  {}
  Init_AskSta_Request_wait_time subdata(::tm_msgs::srv::AskSta_Request::_subdata_type arg)
  {
    msg_.subdata = std::move(arg);
    return Init_AskSta_Request_wait_time(msg_);
  }

private:
  ::tm_msgs::srv::AskSta_Request msg_;
};

class Init_AskSta_Request_subcmd
{
public:
  Init_AskSta_Request_subcmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AskSta_Request_subdata subcmd(::tm_msgs::srv::AskSta_Request::_subcmd_type arg)
  {
    msg_.subcmd = std::move(arg);
    return Init_AskSta_Request_subdata(msg_);
  }

private:
  ::tm_msgs::srv::AskSta_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::AskSta_Request>()
{
  return tm_msgs::srv::builder::Init_AskSta_Request_subcmd();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_AskSta_Response_subdata
{
public:
  explicit Init_AskSta_Response_subdata(::tm_msgs::srv::AskSta_Response & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::AskSta_Response subdata(::tm_msgs::srv::AskSta_Response::_subdata_type arg)
  {
    msg_.subdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::AskSta_Response msg_;
};

class Init_AskSta_Response_subcmd
{
public:
  explicit Init_AskSta_Response_subcmd(::tm_msgs::srv::AskSta_Response & msg)
  : msg_(msg)
  {}
  Init_AskSta_Response_subdata subcmd(::tm_msgs::srv::AskSta_Response::_subcmd_type arg)
  {
    msg_.subcmd = std::move(arg);
    return Init_AskSta_Response_subdata(msg_);
  }

private:
  ::tm_msgs::srv::AskSta_Response msg_;
};

class Init_AskSta_Response_ok
{
public:
  Init_AskSta_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AskSta_Response_subcmd ok(::tm_msgs::srv::AskSta_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_AskSta_Response_subcmd(msg_);
  }

private:
  ::tm_msgs::srv::AskSta_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::AskSta_Response>()
{
  return tm_msgs::srv::builder::Init_AskSta_Response_ok();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__ASK_STA__BUILDER_HPP_
