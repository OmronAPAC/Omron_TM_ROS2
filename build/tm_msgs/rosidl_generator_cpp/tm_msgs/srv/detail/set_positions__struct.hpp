// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__SET_POSITIONS__STRUCT_HPP_
#define TM_MSGS__SRV__DETAIL__SET_POSITIONS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__SetPositions_Request __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__SetPositions_Request __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPositions_Request_
{
  using Type = SetPositions_Request_<ContainerAllocator>;

  explicit SetPositions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_type = 0;
      this->velocity = 0.0;
      this->acc_time = 0.0;
      this->blend_percentage = 0l;
      this->fine_goal = false;
    }
  }

  explicit SetPositions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motion_type = 0;
      this->velocity = 0.0;
      this->acc_time = 0.0;
      this->blend_percentage = 0l;
      this->fine_goal = false;
    }
  }

  // field types and members
  using _motion_type_type =
    int8_t;
  _motion_type_type motion_type;
  using _positions_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _positions_type positions;
  using _velocity_type =
    double;
  _velocity_type velocity;
  using _acc_time_type =
    double;
  _acc_time_type acc_time;
  using _blend_percentage_type =
    int32_t;
  _blend_percentage_type blend_percentage;
  using _fine_goal_type =
    bool;
  _fine_goal_type fine_goal;

  // setters for named parameter idiom
  Type & set__motion_type(
    const int8_t & _arg)
  {
    this->motion_type = _arg;
    return *this;
  }
  Type & set__positions(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->positions = _arg;
    return *this;
  }
  Type & set__velocity(
    const double & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__acc_time(
    const double & _arg)
  {
    this->acc_time = _arg;
    return *this;
  }
  Type & set__blend_percentage(
    const int32_t & _arg)
  {
    this->blend_percentage = _arg;
    return *this;
  }
  Type & set__fine_goal(
    const bool & _arg)
  {
    this->fine_goal = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t PTP_J =
    1;
  static constexpr int8_t PTP_T =
    2;
  static constexpr int8_t LINE_T =
    4;
  static constexpr int8_t CIRC_T =
    6;
  static constexpr int8_t PLINE_T =
    8;

  // pointer types
  using RawPtr =
    tm_msgs::srv::SetPositions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::SetPositions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetPositions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetPositions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__SetPositions_Request
    std::shared_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__SetPositions_Request
    std::shared_ptr<tm_msgs::srv::SetPositions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPositions_Request_ & other) const
  {
    if (this->motion_type != other.motion_type) {
      return false;
    }
    if (this->positions != other.positions) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->acc_time != other.acc_time) {
      return false;
    }
    if (this->blend_percentage != other.blend_percentage) {
      return false;
    }
    if (this->fine_goal != other.fine_goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPositions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPositions_Request_

// alias to use template instance with default allocator
using SetPositions_Request =
  tm_msgs::srv::SetPositions_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t SetPositions_Request_<ContainerAllocator>::PTP_J;
template<typename ContainerAllocator>
constexpr int8_t SetPositions_Request_<ContainerAllocator>::PTP_T;
template<typename ContainerAllocator>
constexpr int8_t SetPositions_Request_<ContainerAllocator>::LINE_T;
template<typename ContainerAllocator>
constexpr int8_t SetPositions_Request_<ContainerAllocator>::CIRC_T;
template<typename ContainerAllocator>
constexpr int8_t SetPositions_Request_<ContainerAllocator>::PLINE_T;

}  // namespace srv

}  // namespace tm_msgs


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__SetPositions_Response __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__SetPositions_Response __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetPositions_Response_
{
  using Type = SetPositions_Response_<ContainerAllocator>;

  explicit SetPositions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit SetPositions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tm_msgs::srv::SetPositions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::SetPositions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetPositions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::SetPositions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__SetPositions_Response
    std::shared_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__SetPositions_Response
    std::shared_ptr<tm_msgs::srv::SetPositions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetPositions_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetPositions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetPositions_Response_

// alias to use template instance with default allocator
using SetPositions_Response =
  tm_msgs::srv::SetPositions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs

namespace tm_msgs
{

namespace srv
{

struct SetPositions
{
  using Request = tm_msgs::srv::SetPositions_Request;
  using Response = tm_msgs::srv::SetPositions_Response;
};

}  // namespace srv

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__SET_POSITIONS__STRUCT_HPP_
