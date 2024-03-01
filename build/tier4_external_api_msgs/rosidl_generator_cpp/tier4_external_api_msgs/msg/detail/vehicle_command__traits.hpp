// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_external_api_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_
#define TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_

#include "tier4_external_api_msgs/msg/detail/vehicle_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_external_api_msgs::msg::VehicleCommand>()
{
  return "tier4_external_api_msgs::msg::VehicleCommand";
}

template<>
inline const char * name<tier4_external_api_msgs::msg::VehicleCommand>()
{
  return "tier4_external_api_msgs/msg/VehicleCommand";
}

template<>
struct has_fixed_size<tier4_external_api_msgs::msg::VehicleCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tier4_external_api_msgs::msg::VehicleCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tier4_external_api_msgs::msg::VehicleCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_EXTERNAL_API_MSGS__MSG__DETAIL__VEHICLE_COMMAND__TRAITS_HPP_
