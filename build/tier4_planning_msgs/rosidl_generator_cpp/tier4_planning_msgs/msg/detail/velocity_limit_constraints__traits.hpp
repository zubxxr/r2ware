// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/VelocityLimitConstraints.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/velocity_limit_constraints__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_planning_msgs::msg::VelocityLimitConstraints>()
{
  return "tier4_planning_msgs::msg::VelocityLimitConstraints";
}

template<>
inline const char * name<tier4_planning_msgs::msg::VelocityLimitConstraints>()
{
  return "tier4_planning_msgs/msg/VelocityLimitConstraints";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::VelocityLimitConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::VelocityLimitConstraints>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_planning_msgs::msg::VelocityLimitConstraints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__VELOCITY_LIMIT_CONSTRAINTS__TRAITS_HPP_
