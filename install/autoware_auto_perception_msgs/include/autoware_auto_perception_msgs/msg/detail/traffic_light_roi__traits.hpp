// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficLightRoi.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/traffic_light_roi__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrafficLightRoi>()
{
  return "autoware_auto_perception_msgs::msg::TrafficLightRoi";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrafficLightRoi>()
{
  return "autoware_auto_perception_msgs/msg/TrafficLightRoi";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrafficLightRoi>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrafficLightRoi>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::RegionOfInterest>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrafficLightRoi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__TRAITS_HPP_
