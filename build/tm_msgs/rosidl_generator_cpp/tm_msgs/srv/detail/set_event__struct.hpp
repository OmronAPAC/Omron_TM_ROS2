// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:srv/SetEvent.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_HPP_
#define TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__SetEvent_Request __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__SetEvent_Request __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEvent_Request_
{
  using Type = SetEvent_Request_<ContainerAllocator>;

  explicit SetEvent_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->func = 0;
      this->arg0 = 0;
      this->arg1 = 0;
    }
  }

  explicit SetEvent_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->func = 0;
      this->arg0 = 0;
      this->arg1 = 0;
    }
  }

  // field types and members
  using _func_type =
    int8_t;
  _func_type func;
  using _arg0_type =
    int8_t;
  _arg0_type arg0;
  using _arg1_type =
    int8_t;
  _arg1_type arg1;

  // setters for named parameter idiom
  Type & set__func(
    const int8_t & _arg)
  {
    this->func = _arg;
    return *this;
  }
  Type & set__arg0(
    const int8_t & _arg)
  {
    this->arg0 = _arg;
    return *this;
  }
  Type & set__arg1(
    const int8_t & _arg)
  {
    this->arg1 = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TAG =
    1;
  static constexpr int8_t WAIT_TAG =
    2;
  static constexpr int8_t STOP =
    11;
  static constexpr int8_t PAUSE =
    12;
  static constexpr int8_t RESUME =
    13;
  static constexpr int8_t EXIT =
    -1;

  // pointer types
  using RawPtr =
    tm_msgs::srv::SetEvent_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::SetEvent_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetEvent_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetEvent_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__SetEvent_Request
    std::shared_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__SetEvent_Request
    std::shared_ptr<tm_msgs::srv::SetEvent_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEvent_Request_ & other) const
  {
    if (this->func != other.func) {
      return false;
    }
    if (this->arg0 != other.arg0) {
      return false;
    }
    if (this->arg1 != other.arg1) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEvent_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEvent_Request_

// alias to use template instance with default allocator
using SetEvent_Request =
  tm_msgs::srv::SetEvent_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t SetEvent_Request_<ContainerAllocator>::TAG;
template<typename ContainerAllocator>
constexpr int8_t SetEvent_Request_<ContainerAllocator>::WAIT_TAG;
template<typename ContainerAllocator>
constexpr int8_t SetEvent_Request_<ContainerAllocator>::STOP;
template<typename ContainerAllocator>
constexpr int8_t SetEvent_Request_<ContainerAllocator>::PAUSE;
template<typename ContainerAllocator>
constexpr int8_t SetEvent_Request_<ContainerAllocator>::RESUME;
template<typename ContainerAllocator>
constexpr int8_t SetEvent_Request_<ContainerAllocator>::EXIT;

}  // namespace srv

}  // namespace tm_msgs


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__SetEvent_Response __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__SetEvent_Response __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEvent_Response_
{
  using Type = SetEvent_Response_<ContainerAllocator>;

  explicit SetEvent_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit SetEvent_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tm_msgs::srv::SetEvent_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::SetEvent_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetEvent_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetEvent_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__SetEvent_Response
    std::shared_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__SetEvent_Response
    std::shared_ptr<tm_msgs::srv::SetEvent_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEvent_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEvent_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEvent_Response_

// alias to use template instance with default allocator
using SetEvent_Response =
  tm_msgs::srv::SetEvent_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs

namespace tm_msgs
{

namespace srv
{

struct SetEvent
{
  using Request = tm_msgs::srv::SetEvent_Request;
  using Response = tm_msgs::srv::SetEvent_Response;
};

}  // namespace srv

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SET_EVENT__STRUCT_HPP_
