// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:srv/SetLaneletRoute.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/srv/detail/set_lanelet_route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `segments`
#include "autoware_planning_msgs/msg/detail/lanelet_segment__functions.h"
// Member `uuid`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
tier4_planning_msgs__srv__SetLaneletRoute_Request__init(tier4_planning_msgs__srv__SetLaneletRoute_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(msg);
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__init(&msg->goal_pose)) {
    tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(msg);
    return false;
  }
  // segments
  if (!autoware_planning_msgs__msg__LaneletSegment__Sequence__init(&msg->segments, 0)) {
    tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(msg);
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__init(&msg->uuid)) {
    tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(msg);
    return false;
  }
  // allow_modification
  return true;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(tier4_planning_msgs__srv__SetLaneletRoute_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // goal_pose
  geometry_msgs__msg__Pose__fini(&msg->goal_pose);
  // segments
  autoware_planning_msgs__msg__LaneletSegment__Sequence__fini(&msg->segments);
  // uuid
  unique_identifier_msgs__msg__UUID__fini(&msg->uuid);
  // allow_modification
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Request__are_equal(const tier4_planning_msgs__srv__SetLaneletRoute_Request * lhs, const tier4_planning_msgs__srv__SetLaneletRoute_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->goal_pose), &(rhs->goal_pose)))
  {
    return false;
  }
  // segments
  if (!autoware_planning_msgs__msg__LaneletSegment__Sequence__are_equal(
      &(lhs->segments), &(rhs->segments)))
  {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->uuid), &(rhs->uuid)))
  {
    return false;
  }
  // allow_modification
  if (lhs->allow_modification != rhs->allow_modification) {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Request__copy(
  const tier4_planning_msgs__srv__SetLaneletRoute_Request * input,
  tier4_planning_msgs__srv__SetLaneletRoute_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->goal_pose), &(output->goal_pose)))
  {
    return false;
  }
  // segments
  if (!autoware_planning_msgs__msg__LaneletSegment__Sequence__copy(
      &(input->segments), &(output->segments)))
  {
    return false;
  }
  // uuid
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->uuid), &(output->uuid)))
  {
    return false;
  }
  // allow_modification
  output->allow_modification = input->allow_modification;
  return true;
}

tier4_planning_msgs__srv__SetLaneletRoute_Request *
tier4_planning_msgs__srv__SetLaneletRoute_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__srv__SetLaneletRoute_Request * msg = (tier4_planning_msgs__srv__SetLaneletRoute_Request *)allocator.allocate(sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Request));
  bool success = tier4_planning_msgs__srv__SetLaneletRoute_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Request__destroy(tier4_planning_msgs__srv__SetLaneletRoute_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__init(tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__srv__SetLaneletRoute_Request * data = NULL;

  if (size) {
    data = (tier4_planning_msgs__srv__SetLaneletRoute_Request *)allocator.zero_allocate(size, sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__srv__SetLaneletRoute_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__fini(tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence *
tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * array = (tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence *)allocator.allocate(sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__destroy(tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__are_equal(const tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * lhs, const tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__srv__SetLaneletRoute_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence__copy(
  const tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * input,
  tier4_planning_msgs__srv__SetLaneletRoute_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Request);
    tier4_planning_msgs__srv__SetLaneletRoute_Request * data =
      (tier4_planning_msgs__srv__SetLaneletRoute_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__srv__SetLaneletRoute_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__srv__SetLaneletRoute_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_planning_msgs__srv__SetLaneletRoute_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "autoware_common_msgs/msg/detail/response_status__functions.h"

bool
tier4_planning_msgs__srv__SetLaneletRoute_Response__init(tier4_planning_msgs__srv__SetLaneletRoute_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!autoware_common_msgs__msg__ResponseStatus__init(&msg->status)) {
    tier4_planning_msgs__srv__SetLaneletRoute_Response__fini(msg);
    return false;
  }
  return true;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Response__fini(tier4_planning_msgs__srv__SetLaneletRoute_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  autoware_common_msgs__msg__ResponseStatus__fini(&msg->status);
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Response__are_equal(const tier4_planning_msgs__srv__SetLaneletRoute_Response * lhs, const tier4_planning_msgs__srv__SetLaneletRoute_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!autoware_common_msgs__msg__ResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Response__copy(
  const tier4_planning_msgs__srv__SetLaneletRoute_Response * input,
  tier4_planning_msgs__srv__SetLaneletRoute_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!autoware_common_msgs__msg__ResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

tier4_planning_msgs__srv__SetLaneletRoute_Response *
tier4_planning_msgs__srv__SetLaneletRoute_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__srv__SetLaneletRoute_Response * msg = (tier4_planning_msgs__srv__SetLaneletRoute_Response *)allocator.allocate(sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Response));
  bool success = tier4_planning_msgs__srv__SetLaneletRoute_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Response__destroy(tier4_planning_msgs__srv__SetLaneletRoute_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_planning_msgs__srv__SetLaneletRoute_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__init(tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__srv__SetLaneletRoute_Response * data = NULL;

  if (size) {
    data = (tier4_planning_msgs__srv__SetLaneletRoute_Response *)allocator.zero_allocate(size, sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__srv__SetLaneletRoute_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__srv__SetLaneletRoute_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__fini(tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tier4_planning_msgs__srv__SetLaneletRoute_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence *
tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * array = (tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence *)allocator.allocate(sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__destroy(tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__are_equal(const tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * lhs, const tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__srv__SetLaneletRoute_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence__copy(
  const tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * input,
  tier4_planning_msgs__srv__SetLaneletRoute_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__srv__SetLaneletRoute_Response);
    tier4_planning_msgs__srv__SetLaneletRoute_Response * data =
      (tier4_planning_msgs__srv__SetLaneletRoute_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__srv__SetLaneletRoute_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__srv__SetLaneletRoute_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tier4_planning_msgs__srv__SetLaneletRoute_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
