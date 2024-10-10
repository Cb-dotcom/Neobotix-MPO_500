// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neo_msgs2:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__STRUCT_HPP_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__neo_msgs2__msg__SafetyMode __attribute__((deprecated))
#else
# define DEPRECATED__neo_msgs2__msg__SafetyMode __declspec(deprecated)
#endif

namespace neo_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SafetyMode_
{
  using Type = SafetyMode_<ContainerAllocator>;

  explicit SafetyMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit SafetyMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SM_NONE =
    0u;
  static constexpr uint8_t SM_APPROACHING =
    1u;
  static constexpr uint8_t SM_DEPARTING =
    2u;
  static constexpr uint8_t SM_WORKING =
    3u;
  static constexpr uint8_t SM_HANDLING =
    4u;

  // pointer types
  using RawPtr =
    neo_msgs2::msg::SafetyMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const neo_msgs2::msg::SafetyMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::SafetyMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neo_msgs2::msg::SafetyMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neo_msgs2__msg__SafetyMode
    std::shared_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neo_msgs2__msg__SafetyMode
    std::shared_ptr<neo_msgs2::msg::SafetyMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SafetyMode_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SafetyMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SafetyMode_

// alias to use template instance with default allocator
using SafetyMode =
  neo_msgs2::msg::SafetyMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyMode_<ContainerAllocator>::SM_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyMode_<ContainerAllocator>::SM_APPROACHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyMode_<ContainerAllocator>::SM_DEPARTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyMode_<ContainerAllocator>::SM_WORKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SafetyMode_<ContainerAllocator>::SM_HANDLING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__STRUCT_HPP_
