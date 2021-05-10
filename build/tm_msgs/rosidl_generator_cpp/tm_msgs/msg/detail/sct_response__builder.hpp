// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:msg/SctResponse.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__SCT_RESPONSE__BUILDER_HPP_
#define TM_MSGS__MSG__DETAIL__SCT_RESPONSE__BUILDER_HPP_

#include "tm_msgs/msg/detail/sct_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace msg
{

namespace builder
{

class Init_SctResponse_script
{
public:
  explicit Init_SctResponse_script(::tm_msgs::msg::SctResponse & msg)
  : msg_(msg)
  {}
  ::tm_msgs::msg::SctResponse script(::tm_msgs::msg::SctResponse::_script_type arg)
  {
    msg_.script = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::msg::SctResponse msg_;
};

class Init_SctResponse_id
{
public:
  explicit Init_SctResponse_id(::tm_msgs::msg::SctResponse & msg)
  : msg_(msg)
  {}
  Init_SctResponse_script id(::tm_msgs::msg::SctResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SctResponse_script(msg_);
  }

private:
  ::tm_msgs::msg::SctResponse msg_;
};

class Init_SctResponse_header
{
public:
  Init_SctResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SctResponse_id header(::tm_msgs::msg::SctResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SctResponse_id(msg_);
  }

private:
  ::tm_msgs::msg::SctResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::msg::SctResponse>()
{
  return tm_msgs::msg::builder::Init_SctResponse_header();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__MSG__DETAIL__SCT_RESPONSE__BUILDER_HPP_
