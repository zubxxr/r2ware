// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/LaneletMapBin.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__TRAITS_HPP_

#include "autoware_map_msgs/msg/detail/lanelet_map_bin__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::msg::LaneletMapBin>()
{
  return "autoware_map_msgs::msg::LaneletMapBin";
}

template<>
inline const char * name<autoware_map_msgs::msg::LaneletMapBin>()
{
  return "autoware_map_msgs/msg/LaneletMapBin";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::LaneletMapBin>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::LaneletMapBin>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::msg::LaneletMapBin>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__LANELET_MAP_BIN__TRAITS_HPP_
