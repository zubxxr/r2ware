// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:msg/PoseWithUuidStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID_STAMPED__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID_STAMPED__TRAITS_HPP_

#include "autoware_planning_msgs/msg/detail/pose_with_uuid_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_planning_msgs::msg::PoseWithUuidStamped>()
{
  return "autoware_planning_msgs::msg::PoseWithUuidStamped";
}

template<>
inline const char * name<autoware_planning_msgs::msg::PoseWithUuidStamped>()
{
  return "autoware_planning_msgs/msg/PoseWithUuidStamped";
}

template<>
struct has_fixed_size<autoware_planning_msgs::msg::PoseWithUuidStamped>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_planning_msgs::msg::PoseWithUuidStamped>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_planning_msgs::msg::PoseWithUuidStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__POSE_WITH_UUID_STAMPED__TRAITS_HPP_
