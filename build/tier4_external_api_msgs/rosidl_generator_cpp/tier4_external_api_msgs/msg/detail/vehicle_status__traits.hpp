// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'steering'
#include "tier4_external_api_msgs/msg/detail/steering__traits.hpp"
// Member 'turn_signal'
#include "tier4_external_api_msgs/msg/detail/turn_signal__traits.hpp"
// Member 'gear_shift'
#include "tier4_external_api_msgs/msg/detail/gear_shift__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::msg::VehicleStatus>()
{
  return "tier4_external_api_msgs::msg::VehicleStatus";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::VehicleStatus>()
{
  return "tier4_external_api_msgs/msg/VehicleStatus";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Twist>::value && has_fixed_size<tier4_external_api_msgs::msg::GearShift>::value && has_fixed_size<tier4_external_api_msgs::msg::Steering>::value && has_fixed_size<tier4_external_api_msgs::msg::TurnSignal>::value> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::VehicleStatus>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Twist>::value && has_bounded_size<tier4_external_api_msgs::msg::GearShift>::value && has_bounded_size<tier4_external_api_msgs::msg::Steering>::value && has_bounded_size<tier4_external_api_msgs::msg::TurnSignal>::value> {};

template<>
struct is_message<tier4_external_api_msgs::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
