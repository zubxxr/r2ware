// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_control_msgs:msg/IsStopped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_control_msgs/msg/detail/is_stopped__rosidl_typesupport_introspection_c.h"
#include "tier4_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_control_msgs/msg/detail/is_stopped__functions.h"
#include "tier4_control_msgs/msg/detail/is_stopped__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `requested_sources`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void IsStopped__rosidl_typesupport_introspection_c__IsStopped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_control_msgs__msg__IsStopped__init(message_memory);
}

void IsStopped__rosidl_typesupport_introspection_c__IsStopped_fini_function(void * message_memory)
{
  tier4_control_msgs__msg__IsStopped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_control_msgs__msg__IsStopped, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_control_msgs__msg__IsStopped, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_sources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_control_msgs__msg__IsStopped, requested_sources),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_members = {
  "tier4_control_msgs__msg",  // message namespace
  "IsStopped",  // message name
  3,  // number of fields
  sizeof(tier4_control_msgs__msg__IsStopped),
  IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_member_array,  // message members
  IsStopped__rosidl_typesupport_introspection_c__IsStopped_init_function,  // function to initialize message memory (memory has to be allocated)
  IsStopped__rosidl_typesupport_introspection_c__IsStopped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_type_support_handle = {
  0,
  &IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_control_msgs, msg, IsStopped)() {
  IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_type_support_handle.typesupport_identifier) {
    IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &IsStopped__rosidl_typesupport_introspection_c__IsStopped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
