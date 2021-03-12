// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:msg/SctResponse.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__SCT_RESPONSE__BUILDER_HPP_
#define TMR_MSGS__MSG__DETAIL__SCT_RESPONSE__BUILDER_HPP_

#include "tmr_msgs/msg/detail/sct_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace msg
{

namespace builder
{

class Init_SctResponse_script
{
public:
  explicit Init_SctResponse_script(::tmr_msgs::msg::SctResponse & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::msg::SctResponse script(::tmr_msgs::msg::SctResponse::_script_type arg)
  {
    msg_.script = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::msg::SctResponse msg_;
};

class Init_SctResponse_id
{
public:
  explicit Init_SctResponse_id(::tmr_msgs::msg::SctResponse & msg)
  : msg_(msg)
  {}
  Init_SctResponse_script id(::tmr_msgs::msg::SctResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SctResponse_script(msg_);
  }

private:
  ::tmr_msgs::msg::SctResponse msg_;
};

class Init_SctResponse_header
{
public:
  Init_SctResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SctResponse_id header(::tmr_msgs::msg::SctResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SctResponse_id(msg_);
  }

private:
  ::tmr_msgs::msg::SctResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::msg::SctResponse>()
{
  return tmr_msgs::msg::builder::Init_SctResponse_header();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__MSG__DETAIL__SCT_RESPONSE__BUILDER_HPP_
