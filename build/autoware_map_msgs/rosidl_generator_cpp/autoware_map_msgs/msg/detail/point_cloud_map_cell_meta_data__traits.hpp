// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellMetaData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__TRAITS_HPP_

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::msg::PointCloudMapCellMetaData>()
{
  return "autoware_map_msgs::msg::PointCloudMapCellMetaData";
}

template<>
inline const char * name<autoware_map_msgs::msg::PointCloudMapCellMetaData>()
{
  return "autoware_map_msgs/msg/PointCloudMapCellMetaData";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::PointCloudMapCellMetaData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::PointCloudMapCellMetaData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_map_msgs::msg::PointCloudMapCellMetaData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_META_DATA__TRAITS_HPP_
