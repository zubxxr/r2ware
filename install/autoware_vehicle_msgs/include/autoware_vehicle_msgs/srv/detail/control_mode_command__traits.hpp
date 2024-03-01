// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_vehicle_msgs:srv/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_
#define AUTOWARE_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_

#include "autoware_vehicle_msgs/srv/detail/control_mode_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_vehicle_msgs::srv::ControlModeCommand_Request>()
{
  return "autoware_vehicle_msgs::srv::ControlModeCommand_Request";
}

template<>
inline const char * name<autoware_vehicle_msgs::srv::ControlModeCommand_Request>()
{
  return "autoware_vehicle_msgs/srv/ControlModeCommand_Request";
}

template<>
struct has_fixed_size<autoware_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_vehicle_msgs::srv::ControlModeCommand_Response>()
{
  return "autoware_vehicle_msgs::srv::ControlModeCommand_Response";
}

template<>
inline const char * name<autoware_vehicle_msgs::srv::ControlModeCommand_Response>()
{
  return "autoware_vehicle_msgs/srv/ControlModeCommand_Response";
}

template<>
struct has_fixed_size<autoware_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_vehicle_msgs::srv::ControlModeCommand>()
{
  return "autoware_vehicle_msgs::srv::ControlModeCommand";
}

template<>
inline const char * name<autoware_vehicle_msgs::srv::ControlModeCommand>()
{
  return "autoware_vehicle_msgs/srv/ControlModeCommand";
}

template<>
struct has_fixed_size<autoware_vehicle_msgs::srv::ControlModeCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_vehicle_msgs::srv::ControlModeCommand_Request>::value &&
    has_fixed_size<autoware_vehicle_msgs::srv::ControlModeCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_vehicle_msgs::srv::ControlModeCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_vehicle_msgs::srv::ControlModeCommand_Request>::value &&
    has_bounded_size<autoware_vehicle_msgs::srv::ControlModeCommand_Response>::value
  >
{
};

template<>
struct is_service<autoware_vehicle_msgs::srv::ControlModeCommand>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_vehicle_msgs::srv::ControlModeCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_vehicle_msgs::srv::ControlModeCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__TRAITS_HPP_
