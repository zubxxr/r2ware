// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_localization_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_
#define AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_

#include "autoware_localization_msgs/msg/detail/kinematic_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'accel_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_localization_msgs::msg::KinematicState>()
{
  return "autoware_localization_msgs::msg::KinematicState";
}

template<>
inline const char * name<autoware_localization_msgs::msg::KinematicState>()
{
  return "autoware_localization_msgs/msg/KinematicState";
}

template<>
struct has_fixed_size<autoware_localization_msgs::msg::KinematicState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_localization_msgs::msg::KinematicState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_localization_msgs::msg::KinematicState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_LOCALIZATION_MSGS__MSG__DETAIL__KINEMATIC_STATE__TRAITS_HPP_
