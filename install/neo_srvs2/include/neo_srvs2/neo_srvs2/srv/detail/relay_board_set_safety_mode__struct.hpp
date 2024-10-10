// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_srvs2:srv/RelayBoardSetSafetyMode.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_SAFETY_MODE__STRUCT_HPP_
#define NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_SAFETY_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'set_safety_mode'
#include "neo_msgs2/msg/detail/safety_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Request __attribute__((deprecated))
#else
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Request __declspec(deprecated)
#endif

namespace neo_srvs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelayBoardSetSafetyMode_Request_
{
  using Type = RelayBoardSetSafetyMode_Request_<ContainerAllocator>;

  explicit RelayBoardSetSafetyMode_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : set_safety_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->station = 0;
    }
  }

  explicit RelayBoardSetSafetyMode_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : set_safety_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->station = 0;
    }
  }

  // field types and members
  using _set_safety_mode_type =
    neo_msgs2::msg::SafetyMode_<ContainerAllocator>;
  _set_safety_mode_type set_safety_mode;
  using _station_type =
    uint8_t;
  _station_type station;

  // setters for named parameter idiom
  Type & set__set_safety_mode(
    const neo_msgs2::msg::SafetyMode_<ContainerAllocator> & _arg)
  {
    this->set_safety_mode = _arg;
    return *this;
  }
  Type & set__station(
    const uint8_t & _arg)
  {
    this->station = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Request
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Request
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayBoardSetSafetyMode_Request_ & other) const
  {
    if (this->set_safety_mode != other.set_safety_mode) {
      return false;
    }
    if (this->station != other.station) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayBoardSetSafetyMode_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayBoardSetSafetyMode_Request_

// alias to use template instance with default allocator
using RelayBoardSetSafetyMode_Request =
  neo_srvs2::srv::RelayBoardSetSafetyMode_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace neo_srvs2


#ifndef _WIN32
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Response __attribute__((deprecated))
#else
# define DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Response __declspec(deprecated)
#endif

namespace neo_srvs2
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RelayBoardSetSafetyMode_Response_
{
  using Type = RelayBoardSetSafetyMode_Response_<ContainerAllocator>;

  explicit RelayBoardSetSafetyMode_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit RelayBoardSetSafetyMode_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Response
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_srvs2__srv__RelayBoardSetSafetyMode_Response
    std::shared_ptr<neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelayBoardSetSafetyMode_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelayBoardSetSafetyMode_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelayBoardSetSafetyMode_Response_

// alias to use template instance with default allocator
using RelayBoardSetSafetyMode_Response =
  neo_srvs2::srv::RelayBoardSetSafetyMode_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace neo_srvs2

namespace neo_srvs2
{

namespace srv
{

struct RelayBoardSetSafetyMode
{
  using Request = neo_srvs2::srv::RelayBoardSetSafetyMode_Request;
  using Response = neo_srvs2::srv::RelayBoardSetSafetyMode_Response;
};

}  // namespace srv

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_SAFETY_MODE__STRUCT_HPP_
