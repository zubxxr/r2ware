// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_system_msgs:msg/EmergencyStateStamped.idl
// generated code does not contain a copyright notice

#ifndef TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__TRAITS_HPP_
#define TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__TRAITS_HPP_

#include "tier4_system_msgs/msg/detail/emergency_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'state'
#include "tier4_system_msgs/msg/detail/emergency_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_system_msgs::msg::EmergencyStateStamped>()
{
  return "tier4_system_msgs::msg::EmergencyStateStamped";
}

template<>
inline const char * name<tier4_system_msgs::msg::EmergencyStateStamped>()
{
  return "tier4_system_msgs/msg/EmergencyStateStamped";
}

template<>
struct has_fixed_size<tier4_system_msgs::msg::EmergencyStateStamped>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<tier4_system_msgs::msg::EmergencyState>::value> {};

template<>
struct has_bounded_size<tier4_system_msgs::msg::EmergencyStateStamped>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<tier4_system_msgs::msg::EmergencyState>::value> {};

template<>
struct is_message<tier4_system_msgs::msg::EmergencyStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE_STAMPED__TRAITS_HPP_
