// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleKinematics.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/vehicle_kinematics__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'geographic_pose'
#include "geographic_msgs/msg/detail/geo_point_stamped__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance_stamped__traits.hpp"
// Member 'accel'
#include "geometry_msgs/msg/detail/accel_with_covariance_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::VehicleKinematics>()
{
  return "autoware_adapi_v1_msgs::msg::VehicleKinematics";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::VehicleKinematics>()
{
  return "autoware_adapi_v1_msgs/msg/VehicleKinematics";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::VehicleKinematics>
  : std::integral_constant<bool, has_fixed_size<geographic_msgs::msg::GeoPointStamped>::value && has_fixed_size<geometry_msgs::msg::AccelWithCovarianceStamped>::value && has_fixed_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovarianceStamped>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::VehicleKinematics>
  : std::integral_constant<bool, has_bounded_size<geographic_msgs::msg::GeoPointStamped>::value && has_bounded_size<geometry_msgs::msg::AccelWithCovarianceStamped>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovarianceStamped>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovarianceStamped>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::VehicleKinematics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VEHICLE_KINEMATICS__TRAITS_HPP_
