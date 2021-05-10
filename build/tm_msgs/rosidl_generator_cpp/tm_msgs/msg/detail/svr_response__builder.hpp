// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:msg/SvrResponse.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__SVR_RESPONSE__BUILDER_HPP_
#define TM_MSGS__MSG__DETAIL__SVR_RESPONSE__BUILDER_HPP_

#include "tm_msgs/msg/detail/svr_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tm_msgs
{

namespace msg
{

namespace builder
{

class Init_SvrResponse_error_code
{
public:
  explicit Init_SvrResponse_error_code(::tm_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  ::tm_msgs::msg::SvrResponse error_code(::tm_msgs::msg::SvrResponse::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_content
{
public:
  explicit Init_SvrResponse_content(::tm_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  Init_SvrResponse_error_code content(::tm_msgs::msg::SvrResponse::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_SvrResponse_error_code(msg_);
  }

private:
  ::tm_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_mode
{
public:
  explicit Init_SvrResponse_mode(::tm_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  Init_SvrResponse_content mode(::tm_msgs::msg::SvrResponse::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_SvrResponse_content(msg_);
  }

private:
  ::tm_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_id
{
public:
  explicit Init_SvrResponse_id(::tm_msgs::msg::SvrResponse & msg)
  : msg_(msg)
  {}
  Init_SvrResponse_mode id(::tm_msgs::msg::SvrResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SvrResponse_mode(msg_);
  }

private:
  ::tm_msgs::msg::SvrResponse msg_;
};

class Init_SvrResponse_header
{
public:
  Init_SvrResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SvrResponse_id header(::tm_msgs::msg::SvrResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SvrResponse_id(msg_);
  }

private:
  ::tm_msgs::msg::SvrResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::msg::SvrResponse>()
{
  return tm_msgs::msg::builder::Init_SvrResponse_header();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__MSG__DETAIL__SVR_RESPONSE__BUILDER_HPP_
