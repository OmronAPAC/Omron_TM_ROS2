// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__STA_RESPONSE__BUILDER_HPP_
#define TMR_MSGS__MSG__DETAIL__STA_RESPONSE__BUILDER_HPP_

#include "tmr_msgs/msg/detail/sta_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace msg
{

namespace builder
{

class Init_StaResponse_subdata
{
public:
  explicit Init_StaResponse_subdata(::tmr_msgs::msg::StaResponse & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::msg::StaResponse subdata(::tmr_msgs::msg::StaResponse::_subdata_type arg)
  {
    msg_.subdata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::msg::StaResponse msg_;
};

class Init_StaResponse_subcmd
{
public:
  explicit Init_StaResponse_subcmd(::tmr_msgs::msg::StaResponse & msg)
  : msg_(msg)
  {}
  Init_StaResponse_subdata subcmd(::tmr_msgs::msg::StaResponse::_subcmd_type arg)
  {
    msg_.subcmd = std::move(arg);
    return Init_StaResponse_subdata(msg_);
  }

private:
  ::tmr_msgs::msg::StaResponse msg_;
};

class Init_StaResponse_header
{
public:
  Init_StaResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaResponse_subcmd header(::tmr_msgs::msg::StaResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StaResponse_subcmd(msg_);
  }

private:
  ::tmr_msgs::msg::StaResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::msg::StaResponse>()
{
  return tmr_msgs::msg::builder::Init_StaResponse_header();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__MSG__DETAIL__STA_RESPONSE__BUILDER_HPP_
