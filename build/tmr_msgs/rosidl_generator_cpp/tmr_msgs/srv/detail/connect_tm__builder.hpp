// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__CONNECT_TM__BUILDER_HPP_
#define TMR_MSGS__SRV__DETAIL__CONNECT_TM__BUILDER_HPP_

#include "tmr_msgs/srv/detail/connect_tm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace srv
{

namespace builder
{

class Init_ConnectTM_Request_timeval
{
public:
  explicit Init_ConnectTM_Request_timeval(::tmr_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::srv::ConnectTM_Request timeval(::tmr_msgs::srv::ConnectTM_Request::_timeval_type arg)
  {
    msg_.timeval = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_timeout
{
public:
  explicit Init_ConnectTM_Request_timeout(::tmr_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  Init_ConnectTM_Request_timeval timeout(::tmr_msgs::srv::ConnectTM_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_ConnectTM_Request_timeval(msg_);
  }

private:
  ::tmr_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_reconnect
{
public:
  explicit Init_ConnectTM_Request_reconnect(::tmr_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  Init_ConnectTM_Request_timeout reconnect(::tmr_msgs::srv::ConnectTM_Request::_reconnect_type arg)
  {
    msg_.reconnect = std::move(arg);
    return Init_ConnectTM_Request_timeout(msg_);
  }

private:
  ::tmr_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_connect
{
public:
  explicit Init_ConnectTM_Request_connect(::tmr_msgs::srv::ConnectTM_Request & msg)
  : msg_(msg)
  {}
  Init_ConnectTM_Request_reconnect connect(::tmr_msgs::srv::ConnectTM_Request::_connect_type arg)
  {
    msg_.connect = std::move(arg);
    return Init_ConnectTM_Request_reconnect(msg_);
  }

private:
  ::tmr_msgs::srv::ConnectTM_Request msg_;
};

class Init_ConnectTM_Request_server
{
public:
  Init_ConnectTM_Request_server()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectTM_Request_connect server(::tmr_msgs::srv::ConnectTM_Request::_server_type arg)
  {
    msg_.server = std::move(arg);
    return Init_ConnectTM_Request_connect(msg_);
  }

private:
  ::tmr_msgs::srv::ConnectTM_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::ConnectTM_Request>()
{
  return tmr_msgs::srv::builder::Init_ConnectTM_Request_server();
}

}  // namespace tmr_msgs


namespace tmr_msgs
{

namespace srv
{

namespace builder
{

class Init_ConnectTM_Response_ok
{
public:
  Init_ConnectTM_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tmr_msgs::srv::ConnectTM_Response ok(::tmr_msgs::srv::ConnectTM_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::ConnectTM_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::ConnectTM_Response>()
{
  return tmr_msgs::srv::builder::Init_ConnectTM_Response_ok();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__SRV__DETAIL__CONNECT_TM__BUILDER_HPP_
