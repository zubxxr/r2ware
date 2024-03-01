// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/msg/detail/cooperation_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'cooperator'
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_decision__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::msg::CooperationCommand>()
{
  return "autoware_adapi_v1_msgs::msg::CooperationCommand";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::msg::CooperationCommand>()
{
  return "autoware_adapi_v1_msgs/msg/CooperationCommand";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::msg::CooperationCommand>
  : std::integral_constant<bool, has_fixed_size<autoware_adapi_v1_msgs::msg::CooperationDecision>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::msg::CooperationCommand>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::CooperationDecision>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::msg::CooperationCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__COOPERATION_COMMAND__TRAITS_HPP_
