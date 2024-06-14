// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice
#include "overlord100_msgs/msg/detail/wheels_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
overlord100_msgs__msg__WheelsData__init(overlord100_msgs__msg__WheelsData * msg)
{
  if (!msg) {
    return false;
  }
  // left
  // right
  return true;
}

void
overlord100_msgs__msg__WheelsData__fini(overlord100_msgs__msg__WheelsData * msg)
{
  if (!msg) {
    return;
  }
  // left
  // right
}

bool
overlord100_msgs__msg__WheelsData__are_equal(const overlord100_msgs__msg__WheelsData * lhs, const overlord100_msgs__msg__WheelsData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left
  if (lhs->left != rhs->left) {
    return false;
  }
  // right
  if (lhs->right != rhs->right) {
    return false;
  }
  return true;
}

bool
overlord100_msgs__msg__WheelsData__copy(
  const overlord100_msgs__msg__WheelsData * input,
  overlord100_msgs__msg__WheelsData * output)
{
  if (!input || !output) {
    return false;
  }
  // left
  output->left = input->left;
  // right
  output->right = input->right;
  return true;
}

overlord100_msgs__msg__WheelsData *
overlord100_msgs__msg__WheelsData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  overlord100_msgs__msg__WheelsData * msg = (overlord100_msgs__msg__WheelsData *)allocator.allocate(sizeof(overlord100_msgs__msg__WheelsData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(overlord100_msgs__msg__WheelsData));
  bool success = overlord100_msgs__msg__WheelsData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
overlord100_msgs__msg__WheelsData__destroy(overlord100_msgs__msg__WheelsData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    overlord100_msgs__msg__WheelsData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
overlord100_msgs__msg__WheelsData__Sequence__init(overlord100_msgs__msg__WheelsData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  overlord100_msgs__msg__WheelsData * data = NULL;

  if (size) {
    data = (overlord100_msgs__msg__WheelsData *)allocator.zero_allocate(size, sizeof(overlord100_msgs__msg__WheelsData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = overlord100_msgs__msg__WheelsData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        overlord100_msgs__msg__WheelsData__fini(&data[i - 1]);
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
overlord100_msgs__msg__WheelsData__Sequence__fini(overlord100_msgs__msg__WheelsData__Sequence * array)
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
      overlord100_msgs__msg__WheelsData__fini(&array->data[i]);
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

overlord100_msgs__msg__WheelsData__Sequence *
overlord100_msgs__msg__WheelsData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  overlord100_msgs__msg__WheelsData__Sequence * array = (overlord100_msgs__msg__WheelsData__Sequence *)allocator.allocate(sizeof(overlord100_msgs__msg__WheelsData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = overlord100_msgs__msg__WheelsData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
overlord100_msgs__msg__WheelsData__Sequence__destroy(overlord100_msgs__msg__WheelsData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    overlord100_msgs__msg__WheelsData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
overlord100_msgs__msg__WheelsData__Sequence__are_equal(const overlord100_msgs__msg__WheelsData__Sequence * lhs, const overlord100_msgs__msg__WheelsData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!overlord100_msgs__msg__WheelsData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
overlord100_msgs__msg__WheelsData__Sequence__copy(
  const overlord100_msgs__msg__WheelsData__Sequence * input,
  overlord100_msgs__msg__WheelsData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(overlord100_msgs__msg__WheelsData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    overlord100_msgs__msg__WheelsData * data =
      (overlord100_msgs__msg__WheelsData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!overlord100_msgs__msg__WheelsData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          overlord100_msgs__msg__WheelsData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!overlord100_msgs__msg__WheelsData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
