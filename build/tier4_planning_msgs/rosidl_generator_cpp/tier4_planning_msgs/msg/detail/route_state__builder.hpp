// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tier4_planning_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__BUILDER_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__BUILDER_HPP_

#include "tier4_planning_msgs/msg/detail/route_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tier4_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_RouteState_state
{
public:
  explicit Init_RouteState_state(::tier4_planning_msgs::msg::RouteState & msg)
  : msg_(msg)
  {}
  ::tier4_planning_msgs::msg::RouteState state(::tier4_planning_msgs::msg::RouteState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tier4_planning_msgs::msg::RouteState msg_;
};

class Init_RouteState_stamp
{
public:
  Init_RouteState_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RouteState_state stamp(::tier4_planning_msgs::msg::RouteState::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RouteState_state(msg_);
  }

private:
  ::tier4_planning_msgs::msg::RouteState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tier4_planning_msgs::msg::RouteState>()
{
  return tier4_planning_msgs::msg::builder::Init_RouteState_stamp();
}

}  // namespace tier4_planning_msgs

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__ROUTE_STATE__BUILDER_HPP_
