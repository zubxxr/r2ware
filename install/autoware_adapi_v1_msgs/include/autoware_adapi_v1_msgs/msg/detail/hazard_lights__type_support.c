// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/HazardLights.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/hazard_lights__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void HazardLights__rosidl_typesupport_introspection_c__HazardLights_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__HazardLights__init(message_memory);
}

void HazardLights__rosidl_typesupport_introspection_c__HazardLights_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__HazardLights__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__HazardLights, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "HazardLights",  // message name
  1,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__HazardLights),
  HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_member_array,  // message members
  HazardLights__rosidl_typesupport_introspection_c__HazardLights_init_function,  // function to initialize message memory (memory has to be allocated)
  HazardLights__rosidl_typesupport_introspection_c__HazardLights_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_type_support_handle = {
  0,
  &HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, HazardLights)() {
  if (!HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_type_support_handle.typesupport_identifier) {
    HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HazardLights__rosidl_typesupport_introspection_c__HazardLights_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
