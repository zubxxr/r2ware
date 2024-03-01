// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tier4_control_msgs:srv/ExternalCommandSelect.idl
// generated code does not contain a copyright notice

#ifndef TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__TRAITS_HPP_
#define TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__TRAITS_HPP_

#include "tier4_control_msgs/srv/detail/external_command_select__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'mode'
#include "tier4_control_msgs/msg/detail/external_command_selector_mode__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::srv::ExternalCommandSelect_Request>()
{
  return "tier4_control_msgs::srv::ExternalCommandSelect_Request";
}

template<>
inline const char * name<tier4_control_msgs::srv::ExternalCommandSelect_Request>()
{
  return "tier4_control_msgs/srv/ExternalCommandSelect_Request";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::integral_constant<bool, has_fixed_size<tier4_control_msgs::msg::ExternalCommandSelectorMode>::value> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::integral_constant<bool, has_bounded_size<tier4_control_msgs::msg::ExternalCommandSelectorMode>::value> {};

template<>
struct is_message<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::srv::ExternalCommandSelect_Response>()
{
  return "tier4_control_msgs::srv::ExternalCommandSelect_Response";
}

template<>
inline const char * name<tier4_control_msgs::srv::ExternalCommandSelect_Response>()
{
  return "tier4_control_msgs/srv/ExternalCommandSelect_Response";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tier4_control_msgs::srv::ExternalCommandSelect>()
{
  return "tier4_control_msgs::srv::ExternalCommandSelect";
}

template<>
inline const char * name<tier4_control_msgs::srv::ExternalCommandSelect>()
{
  return "tier4_control_msgs/srv/ExternalCommandSelect";
}

template<>
struct has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect>
  : std::integral_constant<
    bool,
    has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>::value &&
    has_fixed_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>::value
  >
{
};

template<>
struct has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect>
  : std::integral_constant<
    bool,
    has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Request>::value &&
    has_bounded_size<tier4_control_msgs::srv::ExternalCommandSelect_Response>::value
  >
{
};

template<>
struct is_service<tier4_control_msgs::srv::ExternalCommandSelect>
  : std::true_type
{
};

template<>
struct is_service_request<tier4_control_msgs::srv::ExternalCommandSelect_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tier4_control_msgs::srv::ExternalCommandSelect_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TIER4_CONTROL_MSGS__SRV__DETAIL__EXTERNAL_COMMAND_SELECT__TRAITS_HPP_
