// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_perception_msgs:msg/TrafficSignalElement.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__TRAITS_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__TRAITS_HPP_

#include "autoware_perception_msgs/msg/detail/traffic_signal_element__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_perception_msgs::msg::TrafficSignalElement>()
{
  return "autoware_perception_msgs::msg::TrafficSignalElement";
}

template<>
inline const char * name<autoware_perception_msgs::msg::TrafficSignalElement>()
{
  return "autoware_perception_msgs/msg/TrafficSignalElement";
}

template<>
struct has_fixed_size<autoware_perception_msgs::msg::TrafficSignalElement>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_perception_msgs::msg::TrafficSignalElement>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_perception_msgs::msg::TrafficSignalElement>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_ELEMENT__TRAITS_HPP_
