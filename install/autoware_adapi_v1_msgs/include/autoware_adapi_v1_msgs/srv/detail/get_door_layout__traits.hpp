// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_adapi_v1_msgs:srv/GetDoorLayout.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_DOOR_LAYOUT__TRAITS_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_DOOR_LAYOUT__TRAITS_HPP_

#include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>()
{
  return "autoware_adapi_v1_msgs::srv::GetDoorLayout_Request";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>()
{
  return "autoware_adapi_v1_msgs/srv/GetDoorLayout_Request";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "autoware_adapi_v1_msgs/msg/detail/response_status__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>()
{
  return "autoware_adapi_v1_msgs::srv::GetDoorLayout_Response";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>()
{
  return "autoware_adapi_v1_msgs/srv/GetDoorLayout_Response";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_adapi_v1_msgs::srv::GetDoorLayout>()
{
  return "autoware_adapi_v1_msgs::srv::GetDoorLayout";
}

template<>
inline const char * name<autoware_adapi_v1_msgs::srv::GetDoorLayout>()
{
  return "autoware_adapi_v1_msgs/srv/GetDoorLayout";
}

template<>
struct has_fixed_size<autoware_adapi_v1_msgs::srv::GetDoorLayout>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>::value &&
    has_fixed_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_adapi_v1_msgs::srv::GetDoorLayout>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>::value &&
    has_bounded_size<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>::value
  >
{
};

template<>
struct is_service<autoware_adapi_v1_msgs::srv::GetDoorLayout>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_adapi_v1_msgs::srv::GetDoorLayout_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_adapi_v1_msgs::srv::GetDoorLayout_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_ADAPI_V1_MSGS__SRV__DETAIL__GET_DOOR_LAYOUT__TRAITS_HPP_
