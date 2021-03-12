// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tmr_msgs:msg/SvrResponse.idl
// generated code does not contain a copyright notice
#include "tmr_msgs/msg/detail/svr_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
// Member `content`
#include "rosidl_runtime_c/string_functions.h"

bool
tmr_msgs__msg__SvrResponse__init(tmr_msgs__msg__SvrResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tmr_msgs__msg__SvrResponse__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tmr_msgs__msg__SvrResponse__fini(msg);
    return false;
  }
  // mode
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    tmr_msgs__msg__SvrResponse__fini(msg);
    return false;
  }
  // error_code
  return true;
}

void
tmr_msgs__msg__SvrResponse__fini(tmr_msgs__msg__SvrResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // mode
  // content
  rosidl_runtime_c__String__fini(&msg->content);
  // error_code
}

tmr_msgs__msg__SvrResponse *
tmr_msgs__msg__SvrResponse__create()
{
  tmr_msgs__msg__SvrResponse * msg = (tmr_msgs__msg__SvrResponse *)malloc(sizeof(tmr_msgs__msg__SvrResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tmr_msgs__msg__SvrResponse));
  bool success = tmr_msgs__msg__SvrResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tmr_msgs__msg__SvrResponse__destroy(tmr_msgs__msg__SvrResponse * msg)
{
  if (msg) {
    tmr_msgs__msg__SvrResponse__fini(msg);
  }
  free(msg);
}


bool
tmr_msgs__msg__SvrResponse__Sequence__init(tmr_msgs__msg__SvrResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tmr_msgs__msg__SvrResponse * data = NULL;
  if (size) {
    data = (tmr_msgs__msg__SvrResponse *)calloc(size, sizeof(tmr_msgs__msg__SvrResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tmr_msgs__msg__SvrResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tmr_msgs__msg__SvrResponse__fini(&data[i - 1]);
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
tmr_msgs__msg__SvrResponse__Sequence__fini(tmr_msgs__msg__SvrResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tmr_msgs__msg__SvrResponse__fini(&array->data[i]);
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

tmr_msgs__msg__SvrResponse__Sequence *
tmr_msgs__msg__SvrResponse__Sequence__create(size_t size)
{
  tmr_msgs__msg__SvrResponse__Sequence * array = (tmr_msgs__msg__SvrResponse__Sequence *)malloc(sizeof(tmr_msgs__msg__SvrResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tmr_msgs__msg__SvrResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tmr_msgs__msg__SvrResponse__Sequence__destroy(tmr_msgs__msg__SvrResponse__Sequence * array)
{
  if (array) {
    tmr_msgs__msg__SvrResponse__Sequence__fini(array);
  }
  free(array);
}
