// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tier4_planning_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice
#include "tier4_planning_msgs/msg/detail/route_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
tier4_planning_msgs__msg__RouteState__init(tier4_planning_msgs__msg__RouteState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    tier4_planning_msgs__msg__RouteState__fini(msg);
    return false;
  }
  // state
  return true;
}

void
tier4_planning_msgs__msg__RouteState__fini(tier4_planning_msgs__msg__RouteState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // state
}

bool
tier4_planning_msgs__msg__RouteState__are_equal(const tier4_planning_msgs__msg__RouteState * lhs, const tier4_planning_msgs__msg__RouteState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
tier4_planning_msgs__msg__RouteState__copy(
  const tier4_planning_msgs__msg__RouteState * input,
  tier4_planning_msgs__msg__RouteState * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

tier4_planning_msgs__msg__RouteState *
tier4_planning_msgs__msg__RouteState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__RouteState * msg = (tier4_planning_msgs__msg__RouteState *)allocator.allocate(sizeof(tier4_planning_msgs__msg__RouteState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tier4_planning_msgs__msg__RouteState));
  bool success = tier4_planning_msgs__msg__RouteState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tier4_planning_msgs__msg__RouteState__destroy(tier4_planning_msgs__msg__RouteState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tier4_planning_msgs__msg__RouteState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tier4_planning_msgs__msg__RouteState__Sequence__init(tier4_planning_msgs__msg__RouteState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__RouteState * data = NULL;

  if (size) {
    data = (tier4_planning_msgs__msg__RouteState *)allocator.zero_allocate(size, sizeof(tier4_planning_msgs__msg__RouteState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tier4_planning_msgs__msg__RouteState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tier4_planning_msgs__msg__RouteState__fini(&data[i - 1]);
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
tier4_planning_msgs__msg__RouteState__Sequence__fini(tier4_planning_msgs__msg__RouteState__Sequence * array)
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
      tier4_planning_msgs__msg__RouteState__fini(&array->data[i]);
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

tier4_planning_msgs__msg__RouteState__Sequence *
tier4_planning_msgs__msg__RouteState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tier4_planning_msgs__msg__RouteState__Sequence * array = (tier4_planning_msgs__msg__RouteState__Sequence *)allocator.allocate(sizeof(tier4_planning_msgs__msg__RouteState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tier4_planning_msgs__msg__RouteState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tier4_planning_msgs__msg__RouteState__Sequence__destroy(tier4_planning_msgs__msg__RouteState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tier4_planning_msgs__msg__RouteState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tier4_planning_msgs__msg__RouteState__Sequence__are_equal(const tier4_planning_msgs__msg__RouteState__Sequence * lhs, const tier4_planning_msgs__msg__RouteState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tier4_planning_msgs__msg__RouteState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tier4_planning_msgs__msg__RouteState__Sequence__copy(
  const tier4_planning_msgs__msg__RouteState__Sequence * input,
  tier4_planning_msgs__msg__RouteState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tier4_planning_msgs__msg__RouteState);
    tier4_planning_msgs__msg__RouteState * data =
      (tier4_planning_msgs__msg__RouteState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tier4_planning_msgs__msg__RouteState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tier4_planning_msgs__msg__RouteState__fini(&data[i]);
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
    if (!tier4_planning_msgs__msg__RouteState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
