// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_planning_msgs:msg/LaneletPrimitive.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_
#define AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_

#include "autoware_planning_msgs/msg/detail/lanelet_primitive__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_planning_msgs::msg::LaneletPrimitive>()
{
  return "autoware_planning_msgs::msg::LaneletPrimitive";
}

template<>
inline const char * name<autoware_planning_msgs::msg::LaneletPrimitive>()
{
  return "autoware_planning_msgs/msg/LaneletPrimitive";
}

template<>
struct has_fixed_size<autoware_planning_msgs::msg::LaneletPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_planning_msgs::msg::LaneletPrimitive>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_planning_msgs::msg::LaneletPrimitive>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PLANNING_MSGS__MSG__DETAIL__LANELET_PRIMITIVE__TRAITS_HPP_
