// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_adapi_v1_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/vehicle_dimensions__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/polygon__functions.h"  // footprint

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_adapi_v1_msgs
size_t get_serialized_size_geometry_msgs__msg__Polygon(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_adapi_v1_msgs
size_t max_serialized_size_geometry_msgs__msg__Polygon(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Polygon)();


using _VehicleDimensions__ros_msg_type = autoware_adapi_v1_msgs__msg__VehicleDimensions;

static bool _VehicleDimensions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleDimensions__ros_msg_type * ros_message = static_cast<const _VehicleDimensions__ros_msg_type *>(untyped_ros_message);
  // Field name: wheel_radius
  {
    cdr << ros_message->wheel_radius;
  }

  // Field name: wheel_width
  {
    cdr << ros_message->wheel_width;
  }

  // Field name: wheel_base
  {
    cdr << ros_message->wheel_base;
  }

  // Field name: wheel_tread
  {
    cdr << ros_message->wheel_tread;
  }

  // Field name: front_overhang
  {
    cdr << ros_message->front_overhang;
  }

  // Field name: rear_overhang
  {
    cdr << ros_message->rear_overhang;
  }

  // Field name: left_overhang
  {
    cdr << ros_message->left_overhang;
  }

  // Field name: right_overhang
  {
    cdr << ros_message->right_overhang;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: footprint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Polygon
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->footprint, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehicleDimensions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleDimensions__ros_msg_type * ros_message = static_cast<_VehicleDimensions__ros_msg_type *>(untyped_ros_message);
  // Field name: wheel_radius
  {
    cdr >> ros_message->wheel_radius;
  }

  // Field name: wheel_width
  {
    cdr >> ros_message->wheel_width;
  }

  // Field name: wheel_base
  {
    cdr >> ros_message->wheel_base;
  }

  // Field name: wheel_tread
  {
    cdr >> ros_message->wheel_tread;
  }

  // Field name: front_overhang
  {
    cdr >> ros_message->front_overhang;
  }

  // Field name: rear_overhang
  {
    cdr >> ros_message->rear_overhang;
  }

  // Field name: left_overhang
  {
    cdr >> ros_message->left_overhang;
  }

  // Field name: right_overhang
  {
    cdr >> ros_message->right_overhang;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: footprint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Polygon
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->footprint))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleDimensions__ros_msg_type * ros_message = static_cast<const _VehicleDimensions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wheel_radius
  {
    size_t item_size = sizeof(ros_message->wheel_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_width
  {
    size_t item_size = sizeof(ros_message->wheel_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_base
  {
    size_t item_size = sizeof(ros_message->wheel_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_tread
  {
    size_t item_size = sizeof(ros_message->wheel_tread);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_overhang
  {
    size_t item_size = sizeof(ros_message->front_overhang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_overhang
  {
    size_t item_size = sizeof(ros_message->rear_overhang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_overhang
  {
    size_t item_size = sizeof(ros_message->left_overhang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_overhang
  {
    size_t item_size = sizeof(ros_message->right_overhang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name footprint

  current_alignment += get_serialized_size_geometry_msgs__msg__Polygon(
    &(ros_message->footprint), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleDimensions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: wheel_radius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_base
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_tread
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_overhang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_overhang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: left_overhang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right_overhang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: footprint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Polygon(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleDimensions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_adapi_v1_msgs__msg__VehicleDimensions(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleDimensions = {
  "autoware_adapi_v1_msgs::msg",
  "VehicleDimensions",
  _VehicleDimensions__cdr_serialize,
  _VehicleDimensions__cdr_deserialize,
  _VehicleDimensions__get_serialized_size,
  _VehicleDimensions__max_serialized_size
};

static rosidl_message_type_support_t _VehicleDimensions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleDimensions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, VehicleDimensions)() {
  return &_VehicleDimensions__type_support;
}

#if defined(__cplusplus)
}
#endif
