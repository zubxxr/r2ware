// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:msg/PointCloudMapCellWithID.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__TRAITS_HPP_

#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_with_id__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pointcloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'metadata'
#include "autoware_map_msgs/msg/detail/point_cloud_map_cell_meta_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::msg::PointCloudMapCellWithID>()
{
  return "autoware_map_msgs::msg::PointCloudMapCellWithID";
}

template<>
inline const char * name<autoware_map_msgs::msg::PointCloudMapCellWithID>()
{
  return "autoware_map_msgs/msg/PointCloudMapCellWithID";
}

template<>
struct has_fixed_size<autoware_map_msgs::msg::PointCloudMapCellWithID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::msg::PointCloudMapCellWithID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::msg::PointCloudMapCellWithID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__MSG__DETAIL__POINT_CLOUD_MAP_CELL_WITH_ID__TRAITS_HPP_
