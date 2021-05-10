// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tm_msgs:msg/StaResponse.idl
// generated code does not contain a copyright notice
#include "tm_msgs/msg/detail/sta_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `subcmd`
// Member `subdata`
#include "rosidl_runtime_c/string_functions.h"

bool
tm_msgs__msg__StaResponse__init(tm_msgs__msg__StaResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tm_msgs__msg__StaResponse__fini(msg);
    return false;
  }
  // subcmd
  if (!rosidl_runtime_c__String__init(&msg->subcmd)) {
    tm_msgs__msg__StaResponse__fini(msg);
    return false;
  }
  // subdata
  if (!rosidl_runtime_c__String__init(&msg->subdata)) {
    tm_msgs__msg__StaResponse__fini(msg);
    return false;
  }
  return true;
}

void
tm_msgs__msg__StaResponse__fini(tm_msgs__msg__StaResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // subcmd
  rosidl_runtime_c__String__fini(&msg->subcmd);
  // subdata
  rosidl_runtime_c__String__fini(&msg->subdata);
}

tm_msgs__msg__StaResponse *
tm_msgs__msg__StaResponse__create()
{
  tm_msgs__msg__StaResponse * msg = (tm_msgs__msg__StaResponse *)malloc(sizeof(tm_msgs__msg__StaResponse));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tm_msgs__msg__StaResponse));
  bool success = tm_msgs__msg__StaResponse__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tm_msgs__msg__StaResponse__destroy(tm_msgs__msg__StaResponse * msg)
{
  if (msg) {
    tm_msgs__msg__StaResponse__fini(msg);
  }
  free(msg);
}


bool
tm_msgs__msg__StaResponse__Sequence__init(tm_msgs__msg__StaResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tm_msgs__msg__StaResponse * data = NULL;
  if (size) {
    data = (tm_msgs__msg__StaResponse *)calloc(size, sizeof(tm_msgs__msg__StaResponse));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tm_msgs__msg__StaResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tm_msgs__msg__StaResponse__fini(&data[i - 1]);
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
tm_msgs__msg__StaResponse__Sequence__fini(tm_msgs__msg__StaResponse__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tm_msgs__msg__StaResponse__fini(&array->data[i]);
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

tm_msgs__msg__StaResponse__Sequence *
tm_msgs__msg__StaResponse__Sequence__create(size_t size)
{
  tm_msgs__msg__StaResponse__Sequence * array = (tm_msgs__msg__StaResponse__Sequence *)malloc(sizeof(tm_msgs__msg__StaResponse__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tm_msgs__msg__StaResponse__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tm_msgs__msg__StaResponse__Sequence__destroy(tm_msgs__msg__StaResponse__Sequence * array)
{
  if (array) {
    tm_msgs__msg__StaResponse__Sequence__fini(array);
  }
  free(array);
}
