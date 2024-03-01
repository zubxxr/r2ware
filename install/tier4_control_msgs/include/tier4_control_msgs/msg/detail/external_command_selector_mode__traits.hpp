// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_control_msgs:msg/ExternalCommandSelectorMode.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__TRAITS_HPP_
#define TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__TRAITS_HPP_

#include "tier4_control_msgs/msg/detail/external_command_selector_mode__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::msg::ExternalCommandSelectorMode>()
{
  return "tier4_control_msgs::msg::ExternalCommandSelectorMode";
}

template<>
inline const char * name<tier4_control_msgs::msg::ExternalCommandSelectorMode>()
{
  return "tier4_control_msgs/msg/ExternalCommandSelectorMode";
}

template<>
struct has_fixed_size<tier4_control_msgs::msg::ExternalCommandSelectorMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_control_msgs::msg::ExternalCommandSelectorMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_control_msgs::msg::ExternalCommandSelectorMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_CONTROL_MSGS__MSG__DETAIL__EXTERNAL_COMMAND_SELECTOR_MODE__TRAITS_HPP_
