// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from difrobot_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice
#include "difrobot_msgs/srv/detail/get_transform__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `frame_id`
// Member `child_frame_id`
#include "rosidl_runtime_c/string_functions.h"

bool
difrobot_msgs__srv__GetTransform_Request__init(difrobot_msgs__srv__GetTransform_Request * msg)
{
  if (!msg) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__init(&msg->frame_id)) {
    difrobot_msgs__srv__GetTransform_Request__fini(msg);
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__init(&msg->child_frame_id)) {
    difrobot_msgs__srv__GetTransform_Request__fini(msg);
    return false;
  }
  return true;
}

void
difrobot_msgs__srv__GetTransform_Request__fini(difrobot_msgs__srv__GetTransform_Request * msg)
{
  if (!msg) {
    return;
  }
  // frame_id
  rosidl_runtime_c__String__fini(&msg->frame_id);
  // child_frame_id
  rosidl_runtime_c__String__fini(&msg->child_frame_id);
}

bool
difrobot_msgs__srv__GetTransform_Request__are_equal(const difrobot_msgs__srv__GetTransform_Request * lhs, const difrobot_msgs__srv__GetTransform_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_id), &(rhs->frame_id)))
  {
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->child_frame_id), &(rhs->child_frame_id)))
  {
    return false;
  }
  return true;
}

bool
difrobot_msgs__srv__GetTransform_Request__copy(
  const difrobot_msgs__srv__GetTransform_Request * input,
  difrobot_msgs__srv__GetTransform_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_id), &(output->frame_id)))
  {
    return false;
  }
  // child_frame_id
  if (!rosidl_runtime_c__String__copy(
      &(input->child_frame_id), &(output->child_frame_id)))
  {
    return false;
  }
  return true;
}

difrobot_msgs__srv__GetTransform_Request *
difrobot_msgs__srv__GetTransform_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  difrobot_msgs__srv__GetTransform_Request * msg = (difrobot_msgs__srv__GetTransform_Request *)allocator.allocate(sizeof(difrobot_msgs__srv__GetTransform_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(difrobot_msgs__srv__GetTransform_Request));
  bool success = difrobot_msgs__srv__GetTransform_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
difrobot_msgs__srv__GetTransform_Request__destroy(difrobot_msgs__srv__GetTransform_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    difrobot_msgs__srv__GetTransform_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
difrobot_msgs__srv__GetTransform_Request__Sequence__init(difrobot_msgs__srv__GetTransform_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  difrobot_msgs__srv__GetTransform_Request * data = NULL;

  if (size) {
    data = (difrobot_msgs__srv__GetTransform_Request *)allocator.zero_allocate(size, sizeof(difrobot_msgs__srv__GetTransform_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = difrobot_msgs__srv__GetTransform_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        difrobot_msgs__srv__GetTransform_Request__fini(&data[i - 1]);
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
difrobot_msgs__srv__GetTransform_Request__Sequence__fini(difrobot_msgs__srv__GetTransform_Request__Sequence * array)
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
      difrobot_msgs__srv__GetTransform_Request__fini(&array->data[i]);
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

difrobot_msgs__srv__GetTransform_Request__Sequence *
difrobot_msgs__srv__GetTransform_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  difrobot_msgs__srv__GetTransform_Request__Sequence * array = (difrobot_msgs__srv__GetTransform_Request__Sequence *)allocator.allocate(sizeof(difrobot_msgs__srv__GetTransform_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = difrobot_msgs__srv__GetTransform_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
difrobot_msgs__srv__GetTransform_Request__Sequence__destroy(difrobot_msgs__srv__GetTransform_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    difrobot_msgs__srv__GetTransform_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
difrobot_msgs__srv__GetTransform_Request__Sequence__are_equal(const difrobot_msgs__srv__GetTransform_Request__Sequence * lhs, const difrobot_msgs__srv__GetTransform_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!difrobot_msgs__srv__GetTransform_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
difrobot_msgs__srv__GetTransform_Request__Sequence__copy(
  const difrobot_msgs__srv__GetTransform_Request__Sequence * input,
  difrobot_msgs__srv__GetTransform_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(difrobot_msgs__srv__GetTransform_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    difrobot_msgs__srv__GetTransform_Request * data =
      (difrobot_msgs__srv__GetTransform_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!difrobot_msgs__srv__GetTransform_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          difrobot_msgs__srv__GetTransform_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!difrobot_msgs__srv__GetTransform_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `transform`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
difrobot_msgs__srv__GetTransform_Response__init(difrobot_msgs__srv__GetTransform_Response * msg)
{
  if (!msg) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__TransformStamped__init(&msg->transform)) {
    difrobot_msgs__srv__GetTransform_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
difrobot_msgs__srv__GetTransform_Response__fini(difrobot_msgs__srv__GetTransform_Response * msg)
{
  if (!msg) {
    return;
  }
  // transform
  geometry_msgs__msg__TransformStamped__fini(&msg->transform);
  // success
}

bool
difrobot_msgs__srv__GetTransform_Response__are_equal(const difrobot_msgs__srv__GetTransform_Response * lhs, const difrobot_msgs__srv__GetTransform_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->transform), &(rhs->transform)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
difrobot_msgs__srv__GetTransform_Response__copy(
  const difrobot_msgs__srv__GetTransform_Response * input,
  difrobot_msgs__srv__GetTransform_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // transform
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->transform), &(output->transform)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

difrobot_msgs__srv__GetTransform_Response *
difrobot_msgs__srv__GetTransform_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  difrobot_msgs__srv__GetTransform_Response * msg = (difrobot_msgs__srv__GetTransform_Response *)allocator.allocate(sizeof(difrobot_msgs__srv__GetTransform_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(difrobot_msgs__srv__GetTransform_Response));
  bool success = difrobot_msgs__srv__GetTransform_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
difrobot_msgs__srv__GetTransform_Response__destroy(difrobot_msgs__srv__GetTransform_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    difrobot_msgs__srv__GetTransform_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
difrobot_msgs__srv__GetTransform_Response__Sequence__init(difrobot_msgs__srv__GetTransform_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  difrobot_msgs__srv__GetTransform_Response * data = NULL;

  if (size) {
    data = (difrobot_msgs__srv__GetTransform_Response *)allocator.zero_allocate(size, sizeof(difrobot_msgs__srv__GetTransform_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = difrobot_msgs__srv__GetTransform_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        difrobot_msgs__srv__GetTransform_Response__fini(&data[i - 1]);
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
difrobot_msgs__srv__GetTransform_Response__Sequence__fini(difrobot_msgs__srv__GetTransform_Response__Sequence * array)
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
      difrobot_msgs__srv__GetTransform_Response__fini(&array->data[i]);
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

difrobot_msgs__srv__GetTransform_Response__Sequence *
difrobot_msgs__srv__GetTransform_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  difrobot_msgs__srv__GetTransform_Response__Sequence * array = (difrobot_msgs__srv__GetTransform_Response__Sequence *)allocator.allocate(sizeof(difrobot_msgs__srv__GetTransform_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = difrobot_msgs__srv__GetTransform_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
difrobot_msgs__srv__GetTransform_Response__Sequence__destroy(difrobot_msgs__srv__GetTransform_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    difrobot_msgs__srv__GetTransform_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
difrobot_msgs__srv__GetTransform_Response__Sequence__are_equal(const difrobot_msgs__srv__GetTransform_Response__Sequence * lhs, const difrobot_msgs__srv__GetTransform_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!difrobot_msgs__srv__GetTransform_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
difrobot_msgs__srv__GetTransform_Response__Sequence__copy(
  const difrobot_msgs__srv__GetTransform_Response__Sequence * input,
  difrobot_msgs__srv__GetTransform_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(difrobot_msgs__srv__GetTransform_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    difrobot_msgs__srv__GetTransform_Response * data =
      (difrobot_msgs__srv__GetTransform_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!difrobot_msgs__srv__GetTransform_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          difrobot_msgs__srv__GetTransform_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!difrobot_msgs__srv__GetTransform_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
