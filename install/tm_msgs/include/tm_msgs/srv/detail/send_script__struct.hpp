// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:srv/SendScript.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SEND_SCRIPT__STRUCT_HPP_
#define TM_MSGS__SRV__DETAIL__SEND_SCRIPT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__SendScript_Request __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__SendScript_Request __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendScript_Request_
{
  using Type = SendScript_Request_<ContainerAllocator>;

  explicit SendScript_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->script = "";
    }
  }

  explicit SendScript_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    script(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->script = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _script_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _script_type script;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__script(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->script = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::srv::SendScript_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::SendScript_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SendScript_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SendScript_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__SendScript_Request
    std::shared_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__SendScript_Request
    std::shared_ptr<tm_msgs::srv::SendScript_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendScript_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->script != other.script) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendScript_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendScript_Request_

// alias to use template instance with default allocator
using SendScript_Request =
  tm_msgs::srv::SendScript_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__SendScript_Response __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__SendScript_Response __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendScript_Response_
{
  using Type = SendScript_Response_<ContainerAllocator>;

  explicit SendScript_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit SendScript_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  // field types and members
  using _ok_type =
    bool;
  _ok_type ok;

  // setters for named parameter idiom
  Type & set__ok(
    const bool & _arg)
  {
    this->ok = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tm_msgs::srv::SendScript_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::SendScript_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SendScript_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SendScript_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__SendScript_Response
    std::shared_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__SendScript_Response
    std::shared_ptr<tm_msgs::srv::SendScript_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendScript_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendScript_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendScript_Response_

// alias to use template instance with default allocator
using SendScript_Response =
  tm_msgs::srv::SendScript_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs

namespace tm_msgs
{

namespace srv
{

struct SendScript
{
  using Request = tm_msgs::srv::SendScript_Request;
  using Response = tm_msgs::srv::SendScript_Response;
};

}  // namespace srv

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SEND_SCRIPT__STRUCT_HPP_
