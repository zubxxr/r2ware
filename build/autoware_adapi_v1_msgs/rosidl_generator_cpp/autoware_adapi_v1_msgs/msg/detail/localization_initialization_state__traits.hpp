// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/LocalizationInitializationState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__LOCALIZATION_INITIALIZATION_STATE__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__LOCALIZATION_INITIALIZATION_STATE__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/localization_initialization_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::LocalizationInitializationState>()
{
  return "autoware_adapi_v1_msgs::msg::LocalizationInitializationState";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::LocalizationInitializationState>()
{
  return "autoware_adapi_v1_msgs/msg/LocalizationInitializationState";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::LocalizationInitializationState>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::LocalizationInitializationState>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::LocalizationInitializationState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__LOCALIZATION_INITIALIZATION_STATE__TRAITS_HPP_
