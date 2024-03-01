// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_adapi_v1_msgs:srv/GetDoorLayout.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__rosidl_typesupport_introspection_c.h"
#include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__functions.h"
#include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__srv__GetDoorLayout_Request__init(message_memory);
}

void GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__srv__GetDoorLayout_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__srv__GetDoorLayout_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_members = {
  "autoware_adapi_v1_msgs__srv",  // message namespace
  "GetDoorLayout_Request",  // message name
  1,  // number of fields
  sizeof(autoware_adapi_v1_msgs__srv__GetDoorLayout_Request),
  GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_member_array,  // message members
  GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_type_support_handle = {
  0,
  &GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, GetDoorLayout_Request)() {
  if (!GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_type_support_handle.typesupport_identifier) {
    GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDoorLayout_Request__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__functions.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__struct.h"


// Include directives for member types
// Member `status`
#include "autoware_adapi_v1_msgs/msg/response_status.h"
// Member `status`
#include "autoware_adapi_v1_msgs/msg/detail/response_status__rosidl_typesupport_introspection_c.h"
// Member `doors`
#include "autoware_adapi_v1_msgs/msg/door_layout.h"
// Member `doors`
#include "autoware_adapi_v1_msgs/msg/detail/door_layout__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_adapi_v1_msgs__srv__GetDoorLayout_Response__init(message_memory);
}

void GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_fini_function(void * message_memory)
{
  autoware_adapi_v1_msgs__srv__GetDoorLayout_Response__fini(message_memory);
}

size_t GetDoorLayout_Response__rosidl_typesupport_introspection_c__size_function__DoorLayout__doors(
  const void * untyped_member)
{
  const autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__DoorLayout__Sequence *)(untyped_member);
  return member->size;
}

const void * GetDoorLayout_Response__rosidl_typesupport_introspection_c__get_const_function__DoorLayout__doors(
  const void * untyped_member, size_t index)
{
  const autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * member =
    (const autoware_adapi_v1_msgs__msg__DoorLayout__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetDoorLayout_Response__rosidl_typesupport_introspection_c__get_function__DoorLayout__doors(
  void * untyped_member, size_t index)
{
  autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * member =
    (autoware_adapi_v1_msgs__msg__DoorLayout__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetDoorLayout_Response__rosidl_typesupport_introspection_c__resize_function__DoorLayout__doors(
  void * untyped_member, size_t size)
{
  autoware_adapi_v1_msgs__msg__DoorLayout__Sequence * member =
    (autoware_adapi_v1_msgs__msg__DoorLayout__Sequence *)(untyped_member);
  autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__fini(member);
  return autoware_adapi_v1_msgs__msg__DoorLayout__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__srv__GetDoorLayout_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "doors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_adapi_v1_msgs__srv__GetDoorLayout_Response, doors),  // bytes offset in struct
    NULL,  // default value
    GetDoorLayout_Response__rosidl_typesupport_introspection_c__size_function__DoorLayout__doors,  // size() function pointer
    GetDoorLayout_Response__rosidl_typesupport_introspection_c__get_const_function__DoorLayout__doors,  // get_const(index) function pointer
    GetDoorLayout_Response__rosidl_typesupport_introspection_c__get_function__DoorLayout__doors,  // get(index) function pointer
    GetDoorLayout_Response__rosidl_typesupport_introspection_c__resize_function__DoorLayout__doors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_members = {
  "autoware_adapi_v1_msgs__srv",  // message namespace
  "GetDoorLayout_Response",  // message name
  2,  // number of fields
  sizeof(autoware_adapi_v1_msgs__srv__GetDoorLayout_Response),
  GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_member_array,  // message members
  GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_type_support_handle = {
  0,
  &GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, GetDoorLayout_Response)() {
  GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, ResponseStatus)();
  GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, msg, DoorLayout)();
  if (!GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_type_support_handle.typesupport_identifier) {
    GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetDoorLayout_Response__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_adapi_v1_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_adapi_v1_msgs/srv/detail/get_door_layout__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_service_members = {
  "autoware_adapi_v1_msgs__srv",  // service namespace
  "GetDoorLayout",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_Request_message_type_support_handle,
  NULL  // response message
  // autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_service_type_support_handle = {
  0,
  &autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, GetDoorLayout_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, GetDoorLayout_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_adapi_v1_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, GetDoorLayout)() {
  if (!autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_service_type_support_handle.typesupport_identifier) {
    autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, GetDoorLayout_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_adapi_v1_msgs, srv, GetDoorLayout_Response)()->data;
  }

  return &autoware_adapi_v1_msgs__srv__detail__get_door_layout__rosidl_typesupport_introspection_c__GetDoorLayout_service_type_support_handle;
}
