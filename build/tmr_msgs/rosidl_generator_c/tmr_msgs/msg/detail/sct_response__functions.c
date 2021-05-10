// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tmr_msgs:msg/SctResponse.idl
// generated code does not contain a copyright notice
#include "tmr_msgs/msg/detail/sct_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
// Member `script`
#include "rosidl_runtime_c/string_functions.h"

bool
tmr_msgs__msg__SctResponse__init(tmr_msgs__msg__SctResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tmr_msgs__msg__SctResponse__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tmr_msgs__msg__SctResponse__fini(msg);
    return false;
  }
  // script
  if (!rosidl_runtime_c__String__init(&msg->script)) {
    tmr_msgs__msg__SctResponse__fini(msg);
    return false;
  }
  return true;
}

void
tmr_msgs__msg__SctResponse__fini(tmr_msgs__msg__SctResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // script
  rosidl_runtime_c__String__fini(&msg->script);
}

tmr_msgs__msg__SctResponse *
tmr_msgs__msg__SctResponse__create()
{
  tmr_msgs__msg__SctResponse * msg = (tmr_msgs__msg__SctResponse *)malloc(sizeof(tmr_msgs__msg__SctResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tmr_msgs__msg__SctResponse));
  bool success = tmr_msgs__msg__SctResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tmr_msgs__msg__SctResponse__destroy(tmr_msgs__msg__SctResponse * msg)
{
  if (msg) {
    tmr_msgs__msg__SctResponse__fini(msg);
  }
  free(msg);
}


bool
tmr_msgs__msg__SctResponse__Sequence__init(tmr_msgs__msg__SctResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tmr_msgs__msg__SctResponse * data = NULL;
  if (size) {
    data = (tmr_msgs__msg__SctResponse *)calloc(size, sizeof(tmr_msgs__msg__SctResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tmr_msgs__msg__SctResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tmr_msgs__msg__SctResponse__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tmr_msgs__msg__SctResponse__Sequence__fini(tmr_msgs__msg__SctResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tmr_msgs__msg__SctResponse__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tmr_msgs__msg__SctResponse__Sequence *
tmr_msgs__msg__SctResponse__Sequence__create(size_t size)
{
  tmr_msgs__msg__SctResponse__Sequence * array = (tmr_msgs__msg__SctResponse__Sequence *)malloc(sizeof(tmr_msgs__msg__SctResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tmr_msgs__msg__SctResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tmr_msgs__msg__SctResponse__Sequence__destroy(tmr_msgs__msg__SctResponse__Sequence * array)
{
  if (array) {
    tmr_msgs__msg__SctResponse__Sequence__fini(array);
  }
  free(array);
}
