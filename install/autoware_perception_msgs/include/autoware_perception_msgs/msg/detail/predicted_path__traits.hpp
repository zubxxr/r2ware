// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_perception_msgs:msg/PredictedPath.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__TRAITS_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__TRAITS_HPP_

#include "autoware_perception_msgs/msg/detail/predicted_path__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'time_step'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_perception_msgs::msg::PredictedPath>()
{
  return "autoware_perception_msgs::msg::PredictedPath";
}

template<>
inline const char * name<autoware_perception_msgs::msg::PredictedPath>()
{
  return "autoware_perception_msgs/msg/PredictedPath";
}

template<>
struct has_fixed_size<autoware_perception_msgs::msg::PredictedPath>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_perception_msgs::msg::PredictedPath>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_perception_msgs::msg::PredictedPath>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_PATH__TRAITS_HPP_
