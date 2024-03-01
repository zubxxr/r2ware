// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from autoware_adapi_v1_msgs:msg/CooperationCommand.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_command__struct.h"
#include "autoware_adapi_v1_msgs/msg/detail/cooperation_command__functions.h"
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

#include "autoware_adapi_v1_msgs/msg/detail/cooperation_decision__functions.h"  // cooperator
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // uuid

// forward declare type support functions
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationDecision(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationDecision(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationDecision)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_adapi_v1_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_adapi_v1_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _CooperationCommand__ros_msg_type = autoware_adapi_v1_msgs__msg__CooperationCommand;

static bool _CooperationCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CooperationCommand__ros_msg_type * ros_message = static_cast<const _CooperationCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: uuid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->uuid, cdr))
    {
      return false;
    }
  }

  // Field name: cooperator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationDecision
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cooperator, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _CooperationCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CooperationCommand__ros_msg_type * ros_message = static_cast<_CooperationCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: uuid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->uuid))
    {
      return false;
    }
  }

  // Field name: cooperator
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationDecision
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cooperator))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CooperationCommand__ros_msg_type * ros_message = static_cast<const _CooperationCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name uuid

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->uuid), current_alignment);
  // field.name cooperator

  current_alignment += get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationDecision(
    &(ros_message->cooperator), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _CooperationCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_autoware_adapi_v1_msgs__msg__CooperationCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_autoware_adapi_v1_msgs
size_t max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: uuid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: cooperator
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationDecision(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _CooperationCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_autoware_adapi_v1_msgs__msg__CooperationCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CooperationCommand = {
  "autoware_adapi_v1_msgs::msg",
  "CooperationCommand",
  _CooperationCommand__cdr_serialize,
  _CooperationCommand__cdr_deserialize,
  _CooperationCommand__get_serialized_size,
  _CooperationCommand__max_serialized_size
};

static rosidl_message_type_support_t _CooperationCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CooperationCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_adapi_v1_msgs, msg, CooperationCommand)() {
  return &_CooperationCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
