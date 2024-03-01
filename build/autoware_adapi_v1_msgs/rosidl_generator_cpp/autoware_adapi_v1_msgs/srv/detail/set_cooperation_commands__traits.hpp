// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:srv/SetCooperationCommands.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_COOPERATION_COMMANDS__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_COOPERATION_COMMANDS__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/srv/detail/set_cooperation_commands__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>()
{
  return "autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>()
{
  return "autoware_adapi_v1_msgs/srv/SetCooperationCommands_Request";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>()
{
  return "autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>()
{
  return "autoware_adapi_v1_msgs/srv/SetCooperationCommands_Response";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>
  : std::integral_constant<bool, has_fixed_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>
  : std::integral_constant<bool, has_bounded_size<autoware_adapi_v1_msgs::msg::ResponseStatus>::value> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::SetCooperationCommands>()
{
  return "autoware_adapi_v1_msgs::srv::SetCooperationCommands";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::SetCooperationCommands>()
{
  return "autoware_adapi_v1_msgs/srv/SetCooperationCommands";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>::value &&
    has_fixed_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>::value &&
    has_bounded_size<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>::value
  >
{
};

template<>
struct is_service<autoware_adapi_v1_msgs::srv::SetCooperationCommands>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_adapi_v1_msgs::srv::SetCooperationCommands_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__SET_COOPERATION_COMMANDS__TRAITS_HPP_
