// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_vehicle_msgs:msg/VehicleKinematicState.idl
// generated code does not contain a copyright notice
#include "autoware_vehicle_msgs/msg/detail/vehicle_kinematic_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state`
#include "autoware_planning_msgs/msg/detail/trajectory_point__functions.h"
// Member `delta`
#include "geometry_msgs/msg/detail/transform__functions.h"

bool
autoware_vehicle_msgs__msg__VehicleKinematicState__init(autoware_vehicle_msgs__msg__VehicleKinematicState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_vehicle_msgs__msg__VehicleKinematicState__fini(msg);
    return false;
  }
  // state
  if (!autoware_planning_msgs__msg__TrajectoryPoint__init(&msg->state)) {
    autoware_vehicle_msgs__msg__VehicleKinematicState__fini(msg);
    return false;
  }
  // delta
  if (!geometry_msgs__msg__Transform__init(&msg->delta)) {
    autoware_vehicle_msgs__msg__VehicleKinematicState__fini(msg);
    return false;
  }
  return true;
}

void
autoware_vehicle_msgs__msg__VehicleKinematicState__fini(autoware_vehicle_msgs__msg__VehicleKinematicState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // state
  autoware_planning_msgs__msg__TrajectoryPoint__fini(&msg->state);
  // delta
  geometry_msgs__msg__Transform__fini(&msg->delta);
}

bool
autoware_vehicle_msgs__msg__VehicleKinematicState__are_equal(const autoware_vehicle_msgs__msg__VehicleKinematicState * lhs, const autoware_vehicle_msgs__msg__VehicleKinematicState * rhs)
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
  // state
  if (!autoware_planning_msgs__msg__TrajectoryPoint__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // delta
  if (!geometry_msgs__msg__Transform__are_equal(
      &(lhs->delta), &(rhs->delta)))
  {
    return false;
  }
  return true;
}

bool
autoware_vehicle_msgs__msg__VehicleKinematicState__copy(
  const autoware_vehicle_msgs__msg__VehicleKinematicState * input,
  autoware_vehicle_msgs__msg__VehicleKinematicState * output)
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
  // state
  if (!autoware_planning_msgs__msg__TrajectoryPoint__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // delta
  if (!geometry_msgs__msg__Transform__copy(
      &(input->delta), &(output->delta)))
  {
    return false;
  }
  return true;
}

autoware_vehicle_msgs__msg__VehicleKinematicState *
autoware_vehicle_msgs__msg__VehicleKinematicState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_vehicle_msgs__msg__VehicleKinematicState * msg = (autoware_vehicle_msgs__msg__VehicleKinematicState *)allocator.allocate(sizeof(autoware_vehicle_msgs__msg__VehicleKinematicState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_vehicle_msgs__msg__VehicleKinematicState));
  bool success = autoware_vehicle_msgs__msg__VehicleKinematicState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_vehicle_msgs__msg__VehicleKinematicState__destroy(autoware_vehicle_msgs__msg__VehicleKinematicState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_vehicle_msgs__msg__VehicleKinematicState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__init(autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_vehicle_msgs__msg__VehicleKinematicState * data = NULL;

  if (size) {
    data = (autoware_vehicle_msgs__msg__VehicleKinematicState *)allocator.zero_allocate(size, sizeof(autoware_vehicle_msgs__msg__VehicleKinematicState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_vehicle_msgs__msg__VehicleKinematicState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_vehicle_msgs__msg__VehicleKinematicState__fini(&data[i - 1]);
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
autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__fini(autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * array)
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
      autoware_vehicle_msgs__msg__VehicleKinematicState__fini(&array->data[i]);
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

autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence *
autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * array = (autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence *)allocator.allocate(sizeof(autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__destroy(autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__are_equal(const autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * lhs, const autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_vehicle_msgs__msg__VehicleKinematicState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence__copy(
  const autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * input,
  autoware_vehicle_msgs__msg__VehicleKinematicState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_vehicle_msgs__msg__VehicleKinematicState);
    autoware_vehicle_msgs__msg__VehicleKinematicState * data =
      (autoware_vehicle_msgs__msg__VehicleKinematicState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_vehicle_msgs__msg__VehicleKinematicState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          autoware_vehicle_msgs__msg__VehicleKinematicState__fini(&data[i]);
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
    if (!autoware_vehicle_msgs__msg__VehicleKinematicState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
