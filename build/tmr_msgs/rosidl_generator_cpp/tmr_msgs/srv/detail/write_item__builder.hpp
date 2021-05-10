// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:srv/WriteItem.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__SRV__DETAIL__WRITE_ITEM__BUILDER_HPP_
#define TMR_MSGS__SRV__DETAIL__WRITE_ITEM__BUILDER_HPP_

#include "tmr_msgs/srv/detail/write_item__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace srv
{

namespace builder
{

class Init_WriteItem_Request_value
{
public:
  explicit Init_WriteItem_Request_value(::tmr_msgs::srv::WriteItem_Request & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::srv::WriteItem_Request value(::tmr_msgs::srv::WriteItem_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::WriteItem_Request msg_;
};

class Init_WriteItem_Request_item
{
public:
  explicit Init_WriteItem_Request_item(::tmr_msgs::srv::WriteItem_Request & msg)
  : msg_(msg)
  {}
  Init_WriteItem_Request_value item(::tmr_msgs::srv::WriteItem_Request::_item_type arg)
  {
    msg_.item = std::move(arg);
    return Init_WriteItem_Request_value(msg_);
  }

private:
  ::tmr_msgs::srv::WriteItem_Request msg_;
};

class Init_WriteItem_Request_id
{
public:
  Init_WriteItem_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WriteItem_Request_item id(::tmr_msgs::srv::WriteItem_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WriteItem_Request_item(msg_);
  }

private:
  ::tmr_msgs::srv::WriteItem_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::WriteItem_Request>()
{
  return tmr_msgs::srv::builder::Init_WriteItem_Request_id();
}

}  // namespace tmr_msgs


namespace tmr_msgs
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
  ::tmr_msgs::srv::WriteItem_Response ok(::tmr_msgs::srv::WriteItem_Response::_ok_type arg)
  {
    msg_.ok = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::srv::WriteItem_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::srv::WriteItem_Response>()
{
  return tmr_msgs::srv::builder::Init_WriteItem_Response_ok();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__SRV__DETAIL__WRITE_ITEM__BUILDER_HPP_
