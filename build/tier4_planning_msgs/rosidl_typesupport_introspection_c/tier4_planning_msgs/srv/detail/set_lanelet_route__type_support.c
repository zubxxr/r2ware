// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tier4_planning_msgs:srv/SetLaneletRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tier4_planning_msgs/srv/detail/set_lanelet_route__rosidl_typesupport_introspection_c.h"
#include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tier4_planning_msgs/srv/detail/set_lanelet_route__functions.h"
#include "tier4_planning_msgs/srv/detail/set_lanelet_route__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `goal_pose`
#include "geometry_msgs/msg/pose.h"
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `segments`
#include "autoware_planning_msgs/msg/lanelet_segment.h"
// Member `segments`
#include "autoware_planning_msgs/msg/detail/lanelet_segment__rosidl_typesupport_introspection_c.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__srv__SetLaneletRoute_Request__init(message_memory);
}

void SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_fini_function(void * message_memory)
{
  tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(message_memory);
}

size_t SetLaneletRoute_Request__rosidl_typesupport_introspection_c__size_function__LaneletSegment__segments(
  const void * untyped_member)
{
  const autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * SetLaneletRoute_Request__rosidl_typesupport_introspection_c__get_const_function__LaneletSegment__segments(
  const void * untyped_member, size_t index)
{
  const autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (const autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SetLaneletRoute_Request__rosidl_typesupport_introspection_c__get_function__LaneletSegment__segments(
  void * untyped_member, size_t index)
{
  autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SetLaneletRoute_Request__rosidl_typesupport_introspection_c__resize_function__LaneletSegment__segments(
  void * untyped_member, size_t size)
{
  autoware_planning_msgs__msg__LaneletSegment__Sequence * member =
    (autoware_planning_msgs__msg__LaneletSegment__Sequence *)(untyped_member);
  autoware_planning_msgs__msg__LaneletSegment__Sequence__fini(member);
  return autoware_planning_msgs__msg__LaneletSegment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__srv__SetLaneletRoute_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__srv__SetLaneletRoute_Request, goal_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__srv__SetLaneletRoute_Request, segments),  // bytes offset in struct
    NULL,  // default value
    SetLaneletRoute_Request__rosidl_typesupport_introspection_c__size_function__LaneletSegment__segments,  // size() function pointer
    SetLaneletRoute_Request__rosidl_typesupport_introspection_c__get_const_function__LaneletSegment__segments,  // get_const(index) function pointer
    SetLaneletRoute_Request__rosidl_typesupport_introspection_c__get_function__LaneletSegment__segments,  // get(index) function pointer
    SetLaneletRoute_Request__rosidl_typesupport_introspection_c__resize_function__LaneletSegment__segments  // resize(index) function pointer
  },
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__srv__SetLaneletRoute_Request, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allow_modification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__srv__SetLaneletRoute_Request, allow_modification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_members = {
  "tier4_planning_msgs__srv",  // message namespace
  "SetLaneletRoute_Request",  // message name
  5,  // number of fields
  sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Request),
  SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_member_array,  // message members
  SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_type_support_handle = {
  0,
  &SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, srv, SetLaneletRoute_Request)() {
  SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_planning_msgs, msg, LaneletSegment)();
  SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_type_support_handle.typesupport_identifier) {
    SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLaneletRoute_Request__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tier4_planning_msgs/srv/detail/set_lanelet_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tier4_planning_msgs/srv/detail/set_lanelet_route__functions.h"
// already included above
// #include "tier4_planning_msgs/srv/detail/set_lanelet_route__struct.h"


// Include directives for member types
// Member `status`
#include "autoware_common_msgs/msg/response_status.h"
// Member `status`
#include "autoware_common_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tier4_planning_msgs__srv__SetLaneletRoute_Response__init(message_memory);
}

void SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_fini_function(void * message_memory)
{
  tier4_planning_msgs__srv__SetLaneletRoute_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tier4_planning_msgs__srv__SetLaneletRoute_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_members = {
  "tier4_planning_msgs__srv",  // message namespace
  "SetLaneletRoute_Response",  // message name
  1,  // number of fields
  sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Response),
  SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_member_array,  // message members
  SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_type_support_handle = {
  0,
  &SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, srv, SetLaneletRoute_Response)() {
  SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_common_msgs, msg, ResponseStatus)();
  if (!SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_type_support_handle.typesupport_identifier) {
    SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetLaneletRoute_Response__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tier4_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tier4_planning_msgs/srv/detail/set_lanelet_route__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_service_members = {
  "tier4_planning_msgs__srv",  // service namespace
  "SetLaneletRoute",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_Request_message_type_support_handle,
  NULL  // response message
  // tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_Response_message_type_support_handle
};

static rosidl_service_type_support_t tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_service_type_support_handle = {
  0,
  &tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, srv, SetLaneletRoute_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, srv, SetLaneletRoute_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tier4_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, srv, SetLaneletRoute)() {
  if (!tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_service_type_support_handle.typesupport_identifier) {
    tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, srv, SetLaneletRoute_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tier4_planning_msgs, srv, SetLaneletRoute_Response)()->data;
  }

  return &tier4_planning_msgs__srv__detail__set_lanelet_route__rosidl_typesupport_introspection_c__SetLaneletRoute_service_type_support_handle;
}
