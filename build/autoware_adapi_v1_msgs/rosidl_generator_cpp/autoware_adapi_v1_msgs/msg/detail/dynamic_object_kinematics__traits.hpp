// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_kinematics__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::DynamicObjectKinematics>()
{
  return "autoware_adapi_v1_msgs::msg::DynamicObjectKinematics";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::DynamicObjectKinematics>()
{
  return "autoware_adapi_v1_msgs/msg/DynamicObjectKinematics";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::DynamicObjectKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::DynamicObjectKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::DynamicObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__DYNAMIC_OBJECT_KINEMATICS__TRAITS_HPP_
