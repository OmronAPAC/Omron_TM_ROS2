// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_HPP_
#define TM_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__ConnectTM_Request __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__ConnectTM_Request __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectTM_Request_
{
  using Type = ConnectTM_Request_<ContainerAllocator>;

  explicit ConnectTM_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server = 0;
      this->connect = false;
      this->reconnect = false;
      this->timeout = 0.0;
      this->timeval = 0.0;
    }
  }

  explicit ConnectTM_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->server = 0;
      this->connect = false;
      this->reconnect = false;
      this->timeout = 0.0;
      this->timeval = 0.0;
    }
  }

  // field types and members
  using _server_type =
    int8_t;
  _server_type server;
  using _connect_type =
    bool;
  _connect_type connect;
  using _reconnect_type =
    bool;
  _reconnect_type reconnect;
  using _timeout_type =
    double;
  _timeout_type timeout;
  using _timeval_type =
    double;
  _timeval_type timeval;

  // setters for named parameter idiom
  Type & set__server(
    const int8_t & _arg)
  {
    this->server = _arg;
    return *this;
  }
  Type & set__connect(
    const bool & _arg)
  {
    this->connect = _arg;
    return *this;
  }
  Type & set__reconnect(
    const bool & _arg)
  {
    this->reconnect = _arg;
    return *this;
  }
  Type & set__timeout(
    const double & _arg)
  {
    this->timeout = _arg;
    return *this;
  }
  Type & set__timeval(
    const double & _arg)
  {
    this->timeval = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TMSVR =
    0;
  static constexpr int8_t TMSCT =
    1;

  // pointer types
  using RawPtr =
    tm_msgs::srv::ConnectTM_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::ConnectTM_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::ConnectTM_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::ConnectTM_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__ConnectTM_Request
    std::shared_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__ConnectTM_Request
    std::shared_ptr<tm_msgs::srv::ConnectTM_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectTM_Request_ & other) const
  {
    if (this->server != other.server) {
      return false;
    }
    if (this->connect != other.connect) {
      return false;
    }
    if (this->reconnect != other.reconnect) {
      return false;
    }
    if (this->timeout != other.timeout) {
      return false;
    }
    if (this->timeval != other.timeval) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectTM_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectTM_Request_

// alias to use template instance with default allocator
using ConnectTM_Request =
  tm_msgs::srv::ConnectTM_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t ConnectTM_Request_<ContainerAllocator>::TMSVR;
template<typename ContainerAllocator>
constexpr int8_t ConnectTM_Request_<ContainerAllocator>::TMSCT;

}  // namespace srv

}  // namespace tm_msgs


#ifndef _WIN32
# define DEPRECATED__tm_msgs__srv__ConnectTM_Response __attribute__((deprecated))
#else
# define DEPRECATED__tm_msgs__srv__ConnectTM_Response __declspec(deprecated)
#endif

namespace tm_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ConnectTM_Response_
{
  using Type = ConnectTM_Response_<ContainerAllocator>;

  explicit ConnectTM_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ok = false;
    }
  }

  explicit ConnectTM_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    tm_msgs::srv::ConnectTM_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tm_msgs::srv::ConnectTM_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::ConnectTM_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tm_msgs::srv::ConnectTM_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tm_msgs__srv__ConnectTM_Response
    std::shared_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tm_msgs__srv__ConnectTM_Response
    std::shared_ptr<tm_msgs::srv::ConnectTM_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectTM_Response_ & other) const
  {
    if (this->ok != other.ok) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectTM_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectTM_Response_

// alias to use template instance with default allocator
using ConnectTM_Response =
  tm_msgs::srv::ConnectTM_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tm_msgs

namespace tm_msgs
{

namespace srv
{

struct ConnectTM
{
  using Request = tm_msgs::srv::ConnectTM_Request;
  using Response = tm_msgs::srv::ConnectTM_Response;
};

}  // namespace srv

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__CONNECT_TM__STRUCT_HPP_
