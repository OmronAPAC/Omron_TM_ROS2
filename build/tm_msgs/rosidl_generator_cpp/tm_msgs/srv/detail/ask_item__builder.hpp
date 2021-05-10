// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/AskItem.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__ASK_ITEM__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__ASK_ITEM__BUILDER_HPP_

#include "tm_msgs/srv/detail/ask_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_AskItem_Request_wait_time
{
public:
  explicit Init_AskItem_Request_wait_time(::tm_msgs::srv::AskItem_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::AskItem_Request wait_time(::tm_msgs::srv::AskItem_Request::_wait_time_type arg)
  {
    msg_.wait_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::AskItem_Request msg_;
};

class Init_AskItem_Request_item
{
public:
  explicit Init_AskItem_Request_item(::tm_msgs::srv::AskItem_Request & msg)
  : msg_(msg)
  {}
  Init_AskItem_Request_wait_time item(::tm_msgs::srv::AskItem_Request::_item_type arg)
  {
    msg_.item = std::move(arg);
    return Init_AskItem_Request_wait_time(msg_);
  }

private:
  ::tm_msgs::srv::AskItem_Request msg_;
};

class Init_AskItem_Request_id
{
public:
  Init_AskItem_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AskItem_Request_item id(::tm_msgs::srv::AskItem_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AskItem_Request_item(msg_);
  }

private:
  ::tm_msgs::srv::AskItem_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::AskItem_Request>()
{
  return tm_msgs::srv::builder::Init_AskItem_Request_id();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_AskItem_Response_value
{
public:
  explicit Init_AskItem_Response_value(::tm_msgs::srv::AskItem_Response & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::AskItem_Response value(::tm_msgs::srv::AskItem_Response::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::AskItem_Response msg_;
};

class Init_AskItem_Response_id
{
public:
  explicit Init_AskItem_Response_id(::tm_msgs::srv::AskItem_Response & msg)
  : msg_(msg)
  {}
  Init_AskItem_Response_value id(::tm_msgs::srv::AskItem_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AskItem_Response_value(msg_);
  }

private:
  ::tm_msgs::srv::AskItem_Response msg_;
};

class Init_AskItem_Response_ok
{
public:
  Init_AskItem_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AskItem_Response_id ok(::tm_msgs::srv::AskItem_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return Init_AskItem_Response_id(msg_);
  }

private:
  ::tm_msgs::srv::AskItem_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::AskItem_Response>()
{
  return tm_msgs::srv::builder::Init_AskItem_Response_ok();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__ASK_ITEM__BUILDER_HPP_
