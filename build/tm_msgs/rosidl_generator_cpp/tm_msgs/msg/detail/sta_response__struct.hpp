// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_HPP_
#define TM_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tm_msgs__msg__StaResponse __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__msg__StaResponse __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaResponse_
{
  using Type = StaResponse_<ContainerAllocator>;

  explicit StaResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subcmd = "";
      this->subdata = "";
    }
  }

  explicit StaResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    subcmd(_alloc),
    subdata(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->subcmd = "";
      this->subdata = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _subcmd_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _subcmd_type subcmd;
  using _subdata_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _subdata_type subdata;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__subcmd(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->subcmd = _arg;
    return *this;
  }
  Type & set__subdata(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->subdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::msg::StaResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::msg::StaResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::msg::StaResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::msg::StaResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__msg__StaResponse
    std::shared_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__msg__StaResponse
    std::shared_ptr<tm_msgs::msg::StaResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->subcmd != other.subcmd) {
      return false;
    }
    if (this->subdata != other.subdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaResponse_

// alias to use template instance with default allocator
using StaResponse =
  tm_msgs::msg::StaResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tm_msgs

#endif  // TM_MSGS__MSG__DETAIL__STA_RESPONSE__STRUCT_HPP_
