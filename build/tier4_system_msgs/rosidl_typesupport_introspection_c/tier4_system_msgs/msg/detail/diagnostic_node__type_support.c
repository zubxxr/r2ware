// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_system_msgs:msg/DiagnosticNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_system_msgs/msg/detail/diagnostic_node__rosidl_typesupport_introspection_c.h"
#include "tier4_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_system_msgs/msg/detail/diagnostic_node__functions.h"
#include "tier4_system_msgs/msg/detail/diagnostic_node__struct.h"


// Include directives for member types
// Member `status`
#include "diagnostic_msgs/msg/diagnostic_status.h"
// Member `status`
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"
// Member `links`
#include "tier4_system_msgs/msg/diagnostic_link.h"
// Member `links`
#include "tier4_system_msgs/msg/detail/diagnostic_link__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_system_msgs__msg__DiagnosticNode__init(message_memory);
}

void DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_fini_function(void * message_memory)
{
  tier4_system_msgs__msg__DiagnosticNode__fini(message_memory);
}

size_t DiagnosticNode__rosidl_typesupport_introspection_c__size_function__DiagnosticLink__links(
  const void * untyped_member)
{
  const tier4_system_msgs__msg__DiagnosticLink__Sequence * member =
    (const tier4_system_msgs__msg__DiagnosticLink__Sequence *)(untyped_member);
  return member->size;
}

const void * DiagnosticNode__rosidl_typesupport_introspection_c__get_const_function__DiagnosticLink__links(
  const void * untyped_member, size_t index)
{
  const tier4_system_msgs__msg__DiagnosticLink__Sequence * member =
    (const tier4_system_msgs__msg__DiagnosticLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DiagnosticNode__rosidl_typesupport_introspection_c__get_function__DiagnosticLink__links(
  void * untyped_member, size_t index)
{
  tier4_system_msgs__msg__DiagnosticLink__Sequence * member =
    (tier4_system_msgs__msg__DiagnosticLink__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DiagnosticNode__rosidl_typesupport_introspection_c__resize_function__DiagnosticLink__links(
  void * untyped_member, size_t size)
{
  tier4_system_msgs__msg__DiagnosticLink__Sequence * member =
    (tier4_system_msgs__msg__DiagnosticLink__Sequence *)(untyped_member);
  tier4_system_msgs__msg__DiagnosticLink__Sequence__fini(member);
  return tier4_system_msgs__msg__DiagnosticLink__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__DiagnosticNode, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_system_msgs__msg__DiagnosticNode, links),  // bytes offset in struct
    NULL,  // default value
    DiagnosticNode__rosidl_typesupport_introspection_c__size_function__DiagnosticLink__links,  // size() function pointer
    DiagnosticNode__rosidl_typesupport_introspection_c__get_const_function__DiagnosticLink__links,  // get_const(index) function pointer
    DiagnosticNode__rosidl_typesupport_introspection_c__get_function__DiagnosticLink__links,  // get(index) function pointer
    DiagnosticNode__rosidl_typesupport_introspection_c__resize_function__DiagnosticLink__links  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_members = {
  "tier4_system_msgs__msg",  // message namespace
  "DiagnosticNode",  // message name
  2,  // number of fields
  sizeof(tier4_system_msgs__msg__DiagnosticNode),
  DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_member_array,  // message members
  DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_init_function,  // function to initialize message memory (memory has to be allocated)
  DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_type_support_handle = {
  0,
  &DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, DiagnosticNode)() {
  DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_system_msgs, msg, DiagnosticLink)();
  if (!DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_type_support_handle.typesupport_identifier) {
    DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DiagnosticNode__rosidl_typesupport_introspection_c__DiagnosticNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
