// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tm_msgs:msg/SvrResponse.idl
// generated code does not contain a copyright notice
#include "tm_msgs/msg/detail/svr_response__functions.h"

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
tm_msgs__msg__SvrResponse__init(tm_msgs__msg__SvrResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tm_msgs__msg__SvrResponse__fini(msg);
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tm_msgs__msg__SvrResponse__fini(msg);
    return false;
  }
  // mode
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    tm_msgs__msg__SvrResponse__fini(msg);
    return false;
  }
  // error_code
  return true;
}

void
tm_msgs__msg__SvrResponse__fini(tm_msgs__msg__SvrResponse * msg)
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

tm_msgs__msg__SvrResponse *
tm_msgs__msg__SvrResponse__create()
{
  tm_msgs__msg__SvrResponse * msg = (tm_msgs__msg__SvrResponse *)malloc(sizeof(tm_msgs__msg__SvrResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tm_msgs__msg__SvrResponse));
  bool success = tm_msgs__msg__SvrResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tm_msgs__msg__SvrResponse__destroy(tm_msgs__msg__SvrResponse * msg)
{
  if (msg) {
    tm_msgs__msg__SvrResponse__fini(msg);
  }
  free(msg);
}


bool
tm_msgs__msg__SvrResponse__Sequence__init(tm_msgs__msg__SvrResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tm_msgs__msg__SvrResponse * data = NULL;
  if (size) {
    data = (tm_msgs__msg__SvrResponse *)calloc(size, sizeof(tm_msgs__msg__SvrResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tm_msgs__msg__SvrResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tm_msgs__msg__SvrResponse__fini(&data[i - 1]);
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
tm_msgs__msg__SvrResponse__Sequence__fini(tm_msgs__msg__SvrResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tm_msgs__msg__SvrResponse__fini(&array->data[i]);
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

tm_msgs__msg__SvrResponse__Sequence *
tm_msgs__msg__SvrResponse__Sequence__create(size_t size)
{
  tm_msgs__msg__SvrResponse__Sequence * array = (tm_msgs__msg__SvrResponse__Sequence *)malloc(sizeof(tm_msgs__msg__SvrResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tm_msgs__msg__SvrResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tm_msgs__msg__SvrResponse__Sequence__destroy(tm_msgs__msg__SvrResponse__Sequence * array)
{
  if (array) {
    tm_msgs__msg__SvrResponse__Sequence__fini(array);
  }
  free(array);
}
