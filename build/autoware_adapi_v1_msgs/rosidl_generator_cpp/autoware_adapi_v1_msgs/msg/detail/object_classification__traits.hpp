// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/ObjectClassification.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/object_classification__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::ObjectClassification>()
{
  return "autoware_adapi_v1_msgs::msg::ObjectClassification";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::ObjectClassification>()
{
  return "autoware_adapi_v1_msgs/msg/ObjectClassification";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::ObjectClassification>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::ObjectClassification>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::ObjectClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__OBJECT_CLASSIFICATION__TRAITS_HPP_
