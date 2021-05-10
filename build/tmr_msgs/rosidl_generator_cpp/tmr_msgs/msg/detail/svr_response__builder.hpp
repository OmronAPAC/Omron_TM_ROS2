// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tmr_msgs:msg/SvrResponse.idl
// generated code does not contain a copyright notice

#ifndef TMR_MSGS__MSG__DETAIL__SVR_RESPONSE__BUILDER_HPP_
#define TMR_MSGS__MSG__DETAIL__SVR_RESPONSE__BUILDER_HPP_

#include "tmr_msgs/msg/detail/svr_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tmr_msgs
{

namespace msg
{

namespace builder
{

class Init_SvrResponse_error_code
{
public:
  explicit Init_SvrResponse_error_code(::tmr_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  ::tmr_msgs::msg::SvrResponse error_code(::tmr_msgs::msg::SvrResponse::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tmr_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_content
{
public:
  explicit Init_SvrResponse_content(::tmr_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  Init_SvrResponse_error_code content(::tmr_msgs::msg::SvrResponse::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_SvrResponse_error_code(msg_);
  }

private:
  ::tmr_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_mode
{
public:
  explicit Init_SvrResponse_mode(::tmr_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  Init_SvrResponse_content mode(::tmr_msgs::msg::SvrResponse::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_SvrResponse_content(msg_);
  }

private:
  ::tmr_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_id
{
public:
  explicit Init_SvrResponse_id(::tmr_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  Init_SvrResponse_mode id(::tmr_msgs::msg::SvrResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SvrResponse_mode(msg_);
  }

private:
  ::tmr_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_header
{
public:
  Init_SvrResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SvrResponse_id header(::tmr_msgs::msg::SvrResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SvrResponse_id(msg_);
  }

private:
  ::tmr_msgs::msg::SvrResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tmr_msgs::msg::SvrResponse>()
{
  return tmr_msgs::msg::builder::Init_SvrResponse_header();
}

}  // namespace tmr_msgs

#endif  // TMR_MSGS__MSG__DETAIL__SVR_RESPONSE__BUILDER_HPP_
