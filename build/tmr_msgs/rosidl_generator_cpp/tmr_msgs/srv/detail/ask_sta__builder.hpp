// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__ASK_STA__BUILDER_HPP_
#define TMR_MSGS__SRV__DETAIL__ASK_STA__BUILDER_HPP_

#include "tmr_msgs/srv/detail/ask_sta__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace srv
{

namespace builder
{

class Init_AskSta_Request_wait_time
{
public:
  explicit Init_AskSta_Request_wait_time(::tmr_msgs::srv::AskSta_Request & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::srv::AskSta_Request wait_time(::tmr_msgs::srv::AskSta_Request::_wait_time_type arg)
  {
    msg_.wait_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::AskSta_Request msg_;
};

class Init_AskSta_Request_subdata
{
public:
  explicit Init_AskSta_Request_subdata(::tmr_msgs::srv::AskSta_Request & msg)
  : msg_(msg)
  {}
  Init_AskSta_Request_wait_time subdata(::tmr_msgs::srv::AskSta_Request::_subdata_type arg)
  {
    msg_.subdata = std::move(arg);
    return Init_AskSta_Request_wait_time(msg_);
  }

private:
  ::tmr_msgs::srv::AskSta_Request msg_;
};

class Init_AskSta_Request_subcmd
{
public:
  Init_AskSta_Request_subcmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AskSta_Request_subdata subcmd(::tmr_msgs::srv::AskSta_Request::_subcmd_type arg)
  {
    msg_.subcmd = std::move(arg);
    return Init_AskSta_Request_subdata(msg_);
  }

private:
  ::tmr_msgs::srv::AskSta_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::AskSta_Request>()
{
  return tmr_msgs::srv::builder::Init_AskSta_Request_subcmd();
}

}  // namespace tmr_msgs


namespace tmr_msgs
{

namespace srv
{

namespace builder
{

class Init_AskSta_Response_subdata
{
public:
  explicit Init_AskSta_Response_subdata(::tmr_msgs::srv::AskSta_Response & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::srv::AskSta_Response subdata(::tmr_msgs::srv::AskSta_Response::_subdata_type arg)
  {
    msg_.subdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::AskSta_Response msg_;
};

class Init_AskSta_Response_subcmd
{
public:
  explicit Init_AskSta_Response_subcmd(::tmr_msgs::srv::AskSta_Response & msg)
  : msg_(msg)
  {}
  Init_AskSta_Response_subdata subcmd(::tmr_msgs::srv::AskSta_Response::_subcmd_type arg)
  {
    msg_.subcmd = std::move(arg);
    return Init_AskSta_Response_subdata(msg_);
  }

private:
  ::tmr_msgs::srv::AskSta_Response msg_;
};

class Init_AskSta_Response_ok
{
public:
  Init_AskSta_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AskSta_Response_subcmd ok(::tmr_msgs::srv::AskSta_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_AskSta_Response_subcmd(msg_);
  }

private:
  ::tmr_msgs::srv::AskSta_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::AskSta_Response>()
{
  return tmr_msgs::srv::builder::Init_AskSta_Response_ok();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__SRV__DETAIL__ASK_STA__BUILDER_HPP_
