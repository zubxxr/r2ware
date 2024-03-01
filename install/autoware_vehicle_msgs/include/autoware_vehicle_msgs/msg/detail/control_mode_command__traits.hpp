// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_vehicle_msgs:msg/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_
#define AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_

#include "autoware_vehicle_msgs/msg/detail/control_mode_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_vehicle_msgs::msg::ControlModeCommand>()
{
  return "autoware_vehicle_msgs::msg::ControlModeCommand";
}

template<>
inline const char * name<autoware_vehicle_msgs::msg::ControlModeCommand>()
{
  return "autoware_vehicle_msgs/msg/ControlModeCommand";
}

template<>
struct has_fixed_size<autoware_vehicle_msgs::msg::ControlModeCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_vehicle_msgs::msg::ControlModeCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_vehicle_msgs::msg::ControlModeCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_VEHICLE_MSGS__MSG__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_
