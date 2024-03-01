// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:msg/LaneletRoute.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__TRAITS_HPP_

#include "autoware_planning_msgs/msg/detail/lanelet_route__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'start_pose'
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_planning_msgs::msg::LaneletRoute>()
{
  return "autoware_planning_msgs::msg::LaneletRoute";
}

template<>
inline const char * name<autoware_planning_msgs::msg::LaneletRoute>()
{
  return "autoware_planning_msgs/msg/LaneletRoute";
}

template<>
struct has_fixed_size<autoware_planning_msgs::msg::LaneletRoute>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_planning_msgs::msg::LaneletRoute>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_planning_msgs::msg::LaneletRoute>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_ROUTE__TRAITS_HPP_
