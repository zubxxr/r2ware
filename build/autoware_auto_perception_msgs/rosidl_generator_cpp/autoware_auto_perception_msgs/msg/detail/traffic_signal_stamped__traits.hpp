// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__TRAITS_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__TRAITS_HPP_

#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'signal'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_auto_perception_msgs::msg::TrafficSignalStamped>()
{
  return "autoware_auto_perception_msgs::msg::TrafficSignalStamped";
}

template<>
inline const char * name<autoware_auto_perception_msgs::msg::TrafficSignalStamped>()
{
  return "autoware_auto_perception_msgs/msg/TrafficSignalStamped";
}

template<>
struct has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignalStamped>
  : std::integral_constant<bool, has_fixed_size<autoware_auto_perception_msgs::msg::TrafficSignal>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignalStamped>
  : std::integral_constant<bool, has_bounded_size<autoware_auto_perception_msgs::msg::TrafficSignal>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<autoware_auto_perception_msgs::msg::TrafficSignalStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__TRAITS_HPP_
