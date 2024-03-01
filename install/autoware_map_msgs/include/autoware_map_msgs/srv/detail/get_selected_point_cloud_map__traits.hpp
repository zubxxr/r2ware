// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_map_msgs:srv/GetSelectedPointCloudMap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__TRAITS_HPP_
#define AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__TRAITS_HPP_

#include "autoware_map_msgs/srv/detail/get_selected_point_cloud_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>()
{
  return "autoware_map_msgs::srv::GetSelectedPointCloudMap_Request";
}

template<>
inline const char * name<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>()
{
  return "autoware_map_msgs/srv/GetSelectedPointCloudMap_Request";
}

template<>
struct has_fixed_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>()
{
  return "autoware_map_msgs::srv::GetSelectedPointCloudMap_Response";
}

template<>
inline const char * name<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>()
{
  return "autoware_map_msgs/srv/GetSelectedPointCloudMap_Response";
}

template<>
struct has_fixed_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_map_msgs::srv::GetSelectedPointCloudMap>()
{
  return "autoware_map_msgs::srv::GetSelectedPointCloudMap";
}

template<>
inline const char * name<autoware_map_msgs::srv::GetSelectedPointCloudMap>()
{
  return "autoware_map_msgs/srv/GetSelectedPointCloudMap";
}

template<>
struct has_fixed_size<autoware_map_msgs::srv::GetSelectedPointCloudMap>
  : std::integral_constant<
    bool,
    has_fixed_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>::value &&
    has_fixed_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<autoware_map_msgs::srv::GetSelectedPointCloudMap>
  : std::integral_constant<
    bool,
    has_bounded_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>::value &&
    has_bounded_size<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>::value
  >
{
};

template<>
struct is_service<autoware_map_msgs::srv::GetSelectedPointCloudMap>
  : std::true_type
{
};

template<>
struct is_service_request<autoware_map_msgs::srv::GetSelectedPointCloudMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<autoware_map_msgs::srv::GetSelectedPointCloudMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_MAP_MSGS__SRV__DETAIL__GET_SELECTED_POINT_CLOUD_MAP__TRAITS_HPP_
