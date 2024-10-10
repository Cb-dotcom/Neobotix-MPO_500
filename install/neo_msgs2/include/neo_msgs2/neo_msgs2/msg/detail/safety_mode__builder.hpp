// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_msgs2:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__BUILDER_HPP_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_msgs2/msg/detail/safety_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_msgs2
{

namespace msg
{

namespace builder
{

class Init_SafetyMode_mode
{
public:
  explicit Init_SafetyMode_mode(::neo_msgs2::msg::SafetyMode & msg)
  : msg_(msg)
  {}
  ::neo_msgs2::msg::SafetyMode mode(::neo_msgs2::msg::SafetyMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_msgs2::msg::SafetyMode msg_;
};

class Init_SafetyMode_header
{
public:
  Init_SafetyMode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyMode_mode header(::neo_msgs2::msg::SafetyMode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SafetyMode_mode(msg_);
  }

private:
  ::neo_msgs2::msg::SafetyMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_msgs2::msg::SafetyMode>()
{
  return neo_msgs2::msg::builder::Init_SafetyMode_header();
}

}  // namespace neo_msgs2

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__BUILDER_HPP_
