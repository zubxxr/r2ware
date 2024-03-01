// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_perception_msgs:msg/PredictedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__TRAITS_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__TRAITS_HPP_

#include "autoware_perception_msgs/msg/detail/predicted_object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'object_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'kinematics'
#include "autoware_perception_msgs/msg/detail/predicted_object_kinematics__traits.hpp"
// Member 'shape'
#include "autoware_perception_msgs/msg/detail/shape__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_perception_msgs::msg::PredictedObject>()
{
  return "autoware_perception_msgs::msg::PredictedObject";
}

template<>
inline const char * name<autoware_perception_msgs::msg::PredictedObject>()
{
  return "autoware_perception_msgs/msg/PredictedObject";
}

template<>
struct has_fixed_size<autoware_perception_msgs::msg::PredictedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_perception_msgs::msg::PredictedObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_perception_msgs::msg::PredictedObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__TRAITS_HPP_
