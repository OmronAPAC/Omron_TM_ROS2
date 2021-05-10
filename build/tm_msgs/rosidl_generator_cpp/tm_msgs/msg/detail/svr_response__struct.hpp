// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:msg/SvrResponse.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__MSG__DETAIL__SVR_RESPONSE__STRUCT_HPP_
#define TM_MSGS__MSG__DETAIL__SVR_RESPONSE__STRUCT_HPP_

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
# define DEPRECATED__tm_msgs__msg__SvrResponse __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__msg__SvrResponse __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SvrResponse_
{
  using Type = SvrResponse_<ContainerAllocator>;

  explicit SvrResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->mode = 0;
      this->content = "";
      this->error_code = 0;
    }
  }

  explicit SvrResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->mode = 0;
      this->content = "";
      this->error_code = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _mode_type =
    int8_t;
  _mode_type mode;
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _content_type content;
  using _error_code_type =
    int8_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__mode(
    const int8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->content = _arg;
    return *this;
  }
  Type & set__error_code(
    const int8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::msg::SvrResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::msg::SvrResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::msg::SvrResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::msg::SvrResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__msg__SvrResponse
    std::shared_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__msg__SvrResponse
    std::shared_ptr<tm_msgs::msg::SvrResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SvrResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->content != other.content) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const SvrResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SvrResponse_

// alias to use template instance with default allocator
using SvrResponse =
  tm_msgs::msg::SvrResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tm_msgs

#endif  // TM_MSGS__MSG__DETAIL__SVR_RESPONSE__STRUCT_HPP_
