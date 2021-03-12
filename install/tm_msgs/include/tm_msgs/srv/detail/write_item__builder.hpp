// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/WriteItem.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__WRITE_ITEM__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__WRITE_ITEM__BUILDER_HPP_

#include "tm_msgs/srv/detail/write_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_WriteItem_Request_value
{
public:
  explicit Init_WriteItem_Request_value(::tm_msgs::srv::WriteItem_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::WriteItem_Request value(::tm_msgs::srv::WriteItem_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::WriteItem_Request msg_;
};

class Init_WriteItem_Request_item
{
public:
  explicit Init_WriteItem_Request_item(::tm_msgs::srv::WriteItem_Request & msg)
  : msg_(msg)
  {}
  Init_WriteItem_Request_value item(::tm_msgs::srv::WriteItem_Request::_item_type arg)
  {
    msg_.item = std::move(arg);
    return Init_WriteItem_Request_value(msg_);
  }

private:
  ::tm_msgs::srv::WriteItem_Request msg_;
};

class Init_WriteItem_Request_id
{
public:
  Init_WriteItem_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WriteItem_Request_item id(::tm_msgs::srv::WriteItem_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WriteItem_Request_item(msg_);
  }

private:
  ::tm_msgs::srv::WriteItem_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::WriteItem_Request>()
{
  return tm_msgs::srv::builder::Init_WriteItem_Request_id();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_WriteItem_Response_ok
{
public:
  Init_WriteItem_Response_ok()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::WriteItem_Response ok(::tm_msgs::srv::WriteItem_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::WriteItem_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::WriteItem_Response>()
{
  return tm_msgs::srv::builder::Init_WriteItem_Response_ok();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__WRITE_ITEM__BUILDER_HPP_
