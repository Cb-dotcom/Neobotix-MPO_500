// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neo_srvs2:srv/RelayBoardSetSafetyMode.idl
// generated code does not contain a copyright notice

#ifndef NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_SAFETY_MODE__BUILDER_HPP_
#define NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_SAFETY_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "neo_srvs2/srv/detail/relay_board_set_safety_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_RelayBoardSetSafetyMode_Request_station
{
public:
  explicit Init_RelayBoardSetSafetyMode_Request_station(::neo_srvs2::srv::RelayBoardSetSafetyMode_Request & msg)
  : msg_(msg)
  {}
  ::neo_srvs2::srv::RelayBoardSetSafetyMode_Request station(::neo_srvs2::srv::RelayBoardSetSafetyMode_Request::_station_type arg)
  {
    msg_.station = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetSafetyMode_Request msg_;
};

class Init_RelayBoardSetSafetyMode_Request_set_safety_mode
{
public:
  Init_RelayBoardSetSafetyMode_Request_set_safety_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RelayBoardSetSafetyMode_Request_station set_safety_mode(::neo_srvs2::srv::RelayBoardSetSafetyMode_Request::_set_safety_mode_type arg)
  {
    msg_.set_safety_mode = std::move(arg);
    return Init_RelayBoardSetSafetyMode_Request_station(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetSafetyMode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetSafetyMode_Request>()
{
  return neo_srvs2::srv::builder::Init_RelayBoardSetSafetyMode_Request_set_safety_mode();
}

}  // namespace neo_srvs2


namespace neo_srvs2
{

namespace srv
{

namespace builder
{

class Init_RelayBoardSetSafetyMode_Response_success
{
public:
  Init_RelayBoardSetSafetyMode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::neo_srvs2::srv::RelayBoardSetSafetyMode_Response success(::neo_srvs2::srv::RelayBoardSetSafetyMode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neo_srvs2::srv::RelayBoardSetSafetyMode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::neo_srvs2::srv::RelayBoardSetSafetyMode_Response>()
{
  return neo_srvs2::srv::builder::Init_RelayBoardSetSafetyMode_Response_success();
}

}  // namespace neo_srvs2

#endif  // NEO_SRVS2__SRV__DETAIL__RELAY_BOARD_SET_SAFETY_MODE__BUILDER_HPP_
