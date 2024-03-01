// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/AutowareState.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__TRAITS_HPP_

#include "tier4_system_msgs/msg/detail/autoware_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_system_msgs::msg::AutowareState>()
{
  return "tier4_system_msgs::msg::AutowareState";
}

template<>
inline const char * name<tier4_system_msgs::msg::AutowareState>()
{
  return "tier4_system_msgs/msg/AutowareState";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::AutowareState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::AutowareState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_system_msgs::msg::AutowareState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__AUTOWARE_STATE__TRAITS_HPP_
