// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_control_msgs:msg/IsStopped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__TRAITS_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__TRAITS_HPP_

#include "tier4_control_msgs/msg/detail/is_stopped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::msg::IsStopped>()
{
  return "tier4_control_msgs::msg::IsStopped";
}

template<>
inline const char * name<tier4_control_msgs::msg::IsStopped>()
{
  return "tier4_control_msgs/msg/IsStopped";
}

template<>
struct has_fixed_size<tier4_control_msgs::msg::IsStopped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_control_msgs::msg::IsStopped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_control_msgs::msg::IsStopped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__IS_STOPPED__TRAITS_HPP_
