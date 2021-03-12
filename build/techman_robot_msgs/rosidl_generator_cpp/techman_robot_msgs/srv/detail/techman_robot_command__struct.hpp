// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice

#ifndef TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__STRUCT_HPP_
#define TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Request __declspec(deprecated)
#endif

namespace techman_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TechmanRobotCommand_Request_
{
  using Type = TechmanRobotCommand_Request_<ContainerAllocator>;

  explicit TechmanRobotCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->command_parameter_string = "";
    }
  }

  explicit TechmanRobotCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    command_parameter_string(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->command_parameter_string = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _command_type command;
  using _command_parameter_string_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _command_parameter_string_type command_parameter_string;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__command_parameter_string(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->command_parameter_string = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Request
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Request
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TechmanRobotCommand_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->command_parameter_string != other.command_parameter_string) {
      return false;
    }
    return true;
  }
  bool operator!=(const TechmanRobotCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TechmanRobotCommand_Request_

// alias to use template instance with default allocator
using TechmanRobotCommand_Request =
  techman_robot_msgs::srv::TechmanRobotCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace techman_robot_msgs


#ifndef _WIN32
# define DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Response __declspec(deprecated)
#endif

namespace techman_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TechmanRobotCommand_Response_
{
  using Type = TechmanRobotCommand_Response_<ContainerAllocator>;

  explicit TechmanRobotCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  explicit TechmanRobotCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_success = false;
    }
  }

  // field types and members
  using _is_success_type =
    bool;
  _is_success_type is_success;

  // setters for named parameter idiom
  Type & set__is_success(
    const bool & _arg)
  {
    this->is_success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Response
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__techman_robot_msgs__srv__TechmanRobotCommand_Response
    std::shared_ptr<techman_robot_msgs::srv::TechmanRobotCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TechmanRobotCommand_Response_ & other) const
  {
    if (this->is_success != other.is_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const TechmanRobotCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TechmanRobotCommand_Response_

// alias to use template instance with default allocator
using TechmanRobotCommand_Response =
  techman_robot_msgs::srv::TechmanRobotCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace techman_robot_msgs

namespace techman_robot_msgs
{

namespace srv
{

struct TechmanRobotCommand
{
  using Request = techman_robot_msgs::srv::TechmanRobotCommand_Request;
  using Response = techman_robot_msgs::srv::TechmanRobotCommand_Response;
};

}  // namespace srv

}  // namespace techman_robot_msgs

#endif  // TECHMAN_ROBOT_MSGS__SRV__DETAIL__TECHMAN_ROBOT_COMMAND__STRUCT_HPP_
