// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_perception_msgs:msg/PredictedObjectKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_

#include "autoware_perception_msgs/msg/detail/predicted_object_kinematics__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'initial_pose_with_covariance'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'initial_twist_with_covariance'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"
// Member 'initial_acceleration_with_covariance'
#include "geometry_msgs/msg/detail/accel_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_perception_msgs::msg::PredictedObjectKinematics>()
{
  return "autoware_perception_msgs::msg::PredictedObjectKinematics";
}

template<>
inline const char * name<autoware_perception_msgs::msg::PredictedObjectKinematics>()
{
  return "autoware_perception_msgs/msg/PredictedObjectKinematics";
}

template<>
struct has_fixed_size<autoware_perception_msgs::msg::PredictedObjectKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_perception_msgs::msg::PredictedObjectKinematics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_perception_msgs::msg::PredictedObjectKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT_KINEMATICS__TRAITS_HPP_
