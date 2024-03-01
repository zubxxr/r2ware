// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_planning_msgs:msg/LaneChangeDebugMsg.idl
// generated code does not contain a copyright notice

#ifndef TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__TRAITS_HPP_
#define TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__TRAITS_HPP_

#include "tier4_planning_msgs/msg/detail/lane_change_debug_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'relative_distance'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_planning_msgs::msg::LaneChangeDebugMsg>()
{
  return "tier4_planning_msgs::msg::LaneChangeDebugMsg";
}

template<>
inline const char * name<tier4_planning_msgs::msg::LaneChangeDebugMsg>()
{
  return "tier4_planning_msgs/msg/LaneChangeDebugMsg";
}

template<>
struct has_fixed_size<tier4_planning_msgs::msg::LaneChangeDebugMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_planning_msgs::msg::LaneChangeDebugMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_planning_msgs::msg::LaneChangeDebugMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIER4_PLANNING_MSGS__MSG__DETAIL__LANE_CHANGE_DEBUG_MSG__TRAITS_HPP_
