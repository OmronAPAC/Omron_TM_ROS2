// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:srv/AskItem.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__ASK_ITEM__STRUCT_HPP_
#define TM_MSGS__SRV__DETAIL__ASK_ITEM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__AskItem_Request __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__AskItem_Request __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AskItem_Request_
{
  using Type = AskItem_Request_<ContainerAllocator>;

  explicit AskItem_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->item = "";
      this->wait_time = 0.0;
    }
  }

  explicit AskItem_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    item(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->item = "";
      this->wait_time = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _item_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _item_type item;
  using _wait_time_type =
    double;
  _wait_time_type wait_time;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__item(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->item = _arg;
    return *this;
  }
  Type & set__wait_time(
    const double & _arg)
  {
    this->wait_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::srv::AskItem_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::AskItem_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskItem_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskItem_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__AskItem_Request
    std::shared_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__AskItem_Request
    std::shared_ptr<tm_msgs::srv::AskItem_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AskItem_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->item != other.item) {
      return false;
    }
    if (this->wait_time != other.wait_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const AskItem_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AskItem_Request_

// alias to use template instance with default allocator
using AskItem_Request =
  tm_msgs::srv::AskItem_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__AskItem_Response __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__AskItem_Response __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AskItem_Response_
{
  using Type = AskItem_Response_<ContainerAllocator>;

  explicit AskItem_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->id = "";
      this->value = "";
    }
  }

  explicit AskItem_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
      this->id = "";
      this->value = "";
    }
  }

  // field types and members
  using _ok_type =
    bool;
  _ok_type ok;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::srv::AskItem_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::AskItem_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskItem_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::AskItem_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__AskItem_Response
    std::shared_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__AskItem_Response
    std::shared_ptr<tm_msgs::srv::AskItem_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AskItem_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const AskItem_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AskItem_Response_

// alias to use template instance with default allocator
using AskItem_Response =
  tm_msgs::srv::AskItem_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs

namespace tm_msgs
{

namespace srv
{

struct AskItem
{
  using Request = tm_msgs::srv::AskItem_Request;
  using Response = tm_msgs::srv::AskItem_Response;
};

}  // namespace srv

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__ASK_ITEM__STRUCT_HPP_
