// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_common_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_
#define AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_

#include "autoware_common_msgs/msg/detail/response_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_common_msgs::msg::ResponseStatus>()
{
  return "autoware_common_msgs::msg::ResponseStatus";
}

template<>
inline const char * name<autoware_common_msgs::msg::ResponseStatus>()
{
  return "autoware_common_msgs/msg/ResponseStatus";
}

template<>
struct has_fixed_size<autoware_common_msgs::msg::ResponseStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_common_msgs::msg::ResponseStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_common_msgs::msg::ResponseStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_COMMON_MSGS__MSG__DETAIL__RESPONSE_STATUS__TRAITS_HPP_
