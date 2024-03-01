// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'footprint'
#include "geometry_msgs/msg/detail/polygon__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::VehicleDimensions>()
{
  return "autoware_adapi_v1_msgs::msg::VehicleDimensions";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::VehicleDimensions>()
{
  return "autoware_adapi_v1_msgs/msg/VehicleDimensions";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::VehicleDimensions>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Polygon>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::VehicleDimensions>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Polygon>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::VehicleDimensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__TRAITS_HPP_
