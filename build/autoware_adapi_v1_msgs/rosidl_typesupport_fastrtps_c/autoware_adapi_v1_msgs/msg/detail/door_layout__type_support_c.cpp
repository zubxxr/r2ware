// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_adapi_v1_msgs:msg/DoorLayout.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/door_layout__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/msg/detail/door_layout__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/door_layout__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // roles
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // roles
#include "rosidl_runtime_c/string.h"  // description
#include "rosidl_runtime_c/string_functions.h"  // description

// forward declare type support functions


using _DoorLayout__ros_msg_type = autoware_adapi_v1_msgs__msg__DoorLayout;

static bool _DoorLayout__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DoorLayout__ros_msg_type * ros_message = static_cast<const _DoorLayout__ros_msg_type *>(untyped_ros_message);
  // Field name: roles
  {
    size_t size = ros_message->roles.size;
    auto array_ptr = ros_message->roles.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: description
  {
    const rosidl_runtime_c__String * str = &ros_message->description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _DoorLayout__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DoorLayout__ros_msg_type * ros_message = static_cast<_DoorLayout__ros_msg_type *>(untyped_ros_message);
  // Field name: roles
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->roles.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->roles);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->roles, size)) {
      return "failed to create array for field 'roles'";
    }
    auto array_ptr = ros_message->roles.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->description.data) {
      rosidl_runtime_c__String__init(&ros_message->description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'description'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__DoorLayout(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DoorLayout__ros_msg_type * ros_message = static_cast<const _DoorLayout__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name roles
  {
    size_t array_size = ros_message->roles.size;
    auto array_ptr = ros_message->roles.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->description.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DoorLayout__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__msg__DoorLayout(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__msg__DoorLayout(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: roles
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: description
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DoorLayout__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_adapi_v1_msgs__msg__DoorLayout(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DoorLayout = {
  "autoware_adapi_v1_msgs::msg",
  "DoorLayout",
  _DoorLayout__cdr_serialize,
  _DoorLayout__cdr_deserialize,
  _DoorLayout__get_serialized_size,
  _DoorLayout__max_serialized_size
};

static rosidl_message_type_support_t _DoorLayout__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DoorLayout,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, DoorLayout)() {
  return &_DoorLayout__type_support;
}

#if defined(__cplusplus)
}
#endif
