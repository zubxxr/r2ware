// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:msg/DynamicObjectPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__functions.h"
#include "autoware_adapi_v1_msgs/msg/detail/dynamic_object_path__struct.h"


// Include directives for member types
// Member `path`
#include "geometry_msgs/msg/pose.h"
// Member `path`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `time_step`
#include "builtin_interfaces/msg/duration.h"
// Member `time_step`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__msg__DynamicObjectPath__init(message_memory);
}

void DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__msg__DynamicObjectPath__fini(message_memory);
}

size_t DynamicObjectPath__rosidl_typesupport_introspection_c__size_function__Pose__path(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * DynamicObjectPath__rosidl_typesupport_introspection_c__get_const_function__Pose__path(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DynamicObjectPath__rosidl_typesupport_introspection_c__get_function__Pose__path(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DynamicObjectPath__rosidl_typesupport_introspection_c__resize_function__Pose__path(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_member_array[3] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DynamicObjectPath, path),  // bytes offset in struct
    NULL,  // default value
    DynamicObjectPath__rosidl_typesupport_introspection_c__size_function__Pose__path,  // size() function pointer
    DynamicObjectPath__rosidl_typesupport_introspection_c__get_const_function__Pose__path,  // get_const(index) function pointer
    DynamicObjectPath__rosidl_typesupport_introspection_c__get_function__Pose__path,  // get(index) function pointer
    DynamicObjectPath__rosidl_typesupport_introspection_c__resize_function__Pose__path  // resize(index) function pointer
  },
  {
    "time_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DynamicObjectPath, time_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__msg__DynamicObjectPath, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_members = {
  "autoware_adapi_v1_msgs__msg",  // message namespace
  "DynamicObjectPath",  // message name
  3,  // number of fields
  sizeof(autoware_adapi_v1_msgs__msg__DynamicObjectPath),
  DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_member_array,  // message members
  DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_init_function,  // function to initialize message memory (memory has to be allocated)
  DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_type_support_handle = {
  0,
  &DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, DynamicObjectPath)() {
  DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_type_support_handle.typesupport_identifier) {
    DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DynamicObjectPath__rosidl_typesupport_introspection_c__DynamicObjectPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
