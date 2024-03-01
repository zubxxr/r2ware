// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_version_msgs:srv/InterfaceVersion.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__TRAITS_HPP_
#define AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__TRAITS_HPP_

#include "autoware_adapi_version_msgs/srv/detail/interface_version__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>()
{
  return "autoware_adapi_version_msgs::srv::InterfaceVersion_Request";
}

template<>
inline const char * name<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>()
{
  return "autoware_adapi_version_msgs/srv/InterfaceVersion_Request";
}

template<>
struct has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>()
{
  return "autoware_adapi_version_msgs::srv::InterfaceVersion_Response";
}

template<>
inline const char * name<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>()
{
  return "autoware_adapi_version_msgs/srv/InterfaceVersion_Response";
}

template<>
struct has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_version_msgs::srv::InterfaceVersion>()
{
  return "autoware_adapi_version_msgs::srv::InterfaceVersion";
}

template<>
inline const char * name<autoware_adapi_version_msgs::srv::InterfaceVersion>()
{
  return "autoware_adapi_version_msgs/srv/InterfaceVersion";
}

template<>
struct has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>::value &&
    has_fixed_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>::value &&
    has_bounded_size<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>::value
  >
{
};

template<>
struct is_service<autoware_adapi_version_msgs::srv::InterfaceVersion>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_adapi_version_msgs::srv::InterfaceVersion_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_adapi_version_msgs::srv::InterfaceVersion_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_VERSION_MSGS__SRV__DETAIL__INTERFACE_VERSION__TRAITS_HPP_
