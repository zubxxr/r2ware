// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/GnssInsOrientation.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__TRAITS_HPP_

#include "autoware_sensing_msgs/msg/detail/gnss_ins_orientation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_sensing_msgs::msg::GnssInsOrientation>()
{
  return "autoware_sensing_msgs::msg::GnssInsOrientation";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::GnssInsOrientation>()
{
  return "autoware_sensing_msgs/msg/GnssInsOrientation";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::GnssInsOrientation>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::GnssInsOrientation>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<autoware_sensing_msgs::msg::GnssInsOrientation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__GNSS_INS_ORIENTATION__TRAITS_HPP_
