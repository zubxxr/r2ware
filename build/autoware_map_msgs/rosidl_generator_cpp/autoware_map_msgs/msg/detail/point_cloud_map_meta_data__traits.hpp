// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__TRAITS_HPP_

#include "autoware_map_msgs/msg/detail/point_cloud_map_meta_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::msg::PointCloudMapMetaData>()
{
  return "autoware_map_msgs::msg::PointCloudMapMetaData";
}

template<>
inline const char * name<autoware_map_msgs::msg::PointCloudMapMetaData>()
{
  return "autoware_map_msgs/msg/PointCloudMapMetaData";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::PointCloudMapMetaData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::PointCloudMapMetaData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::msg::PointCloudMapMetaData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_META_DATA__TRAITS_HPP_
