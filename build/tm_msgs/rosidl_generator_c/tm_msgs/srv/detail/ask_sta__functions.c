// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tm_msgs:srv/AskSta.idl
// generated code does not contain a copyright notice
#include "tm_msgs/srv/detail/ask_sta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `subcmd`
// Member `subdata`
#include "rosidl_runtime_c/string_functions.h"

bool
tm_msgs__srv__AskSta_Request__init(tm_msgs__srv__AskSta_Request * msg)
{
  if (!msg) {
    return false;
  }
  // subcmd
  if (!rosidl_runtime_c__String__init(&msg->subcmd)) {
    tm_msgs__srv__AskSta_Request__fini(msg);
    return false;
  }
  // subdata
  if (!rosidl_runtime_c__String__init(&msg->subdata)) {
    tm_msgs__srv__AskSta_Request__fini(msg);
    return false;
  }
  // wait_time
  return true;
}

void
tm_msgs__srv__AskSta_Request__fini(tm_msgs__srv__AskSta_Request * msg)
{
  if (!msg) {
    return;
  }
  // subcmd
  rosidl_runtime_c__String__fini(&msg->subcmd);
  // subdata
  rosidl_runtime_c__String__fini(&msg->subdata);
  // wait_time
}

tm_msgs__srv__AskSta_Request *
tm_msgs__srv__AskSta_Request__create()
{
  tm_msgs__srv__AskSta_Request * msg = (tm_msgs__srv__AskSta_Request *)malloc(sizeof(tm_msgs__srv__AskSta_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tm_msgs__srv__AskSta_Request));
  bool success = tm_msgs__srv__AskSta_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tm_msgs__srv__AskSta_Request__destroy(tm_msgs__srv__AskSta_Request * msg)
{
  if (msg) {
    tm_msgs__srv__AskSta_Request__fini(msg);
  }
  free(msg);
}


bool
tm_msgs__srv__AskSta_Request__Sequence__init(tm_msgs__srv__AskSta_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tm_msgs__srv__AskSta_Request * data = NULL;
  if (size) {
    data = (tm_msgs__srv__AskSta_Request *)calloc(size, sizeof(tm_msgs__srv__AskSta_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tm_msgs__srv__AskSta_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tm_msgs__srv__AskSta_Request__fini(&data[i - 1]);
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
tm_msgs__srv__AskSta_Request__Sequence__fini(tm_msgs__srv__AskSta_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tm_msgs__srv__AskSta_Request__fini(&array->data[i]);
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

tm_msgs__srv__AskSta_Request__Sequence *
tm_msgs__srv__AskSta_Request__Sequence__create(size_t size)
{
  tm_msgs__srv__AskSta_Request__Sequence * array = (tm_msgs__srv__AskSta_Request__Sequence *)malloc(sizeof(tm_msgs__srv__AskSta_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tm_msgs__srv__AskSta_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tm_msgs__srv__AskSta_Request__Sequence__destroy(tm_msgs__srv__AskSta_Request__Sequence * array)
{
  if (array) {
    tm_msgs__srv__AskSta_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `subcmd`
// Member `subdata`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
tm_msgs__srv__AskSta_Response__init(tm_msgs__srv__AskSta_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ok
  // subcmd
  if (!rosidl_runtime_c__String__init(&msg->subcmd)) {
    tm_msgs__srv__AskSta_Response__fini(msg);
    return false;
  }
  // subdata
  if (!rosidl_runtime_c__String__init(&msg->subdata)) {
    tm_msgs__srv__AskSta_Response__fini(msg);
    return false;
  }
  return true;
}

void
tm_msgs__srv__AskSta_Response__fini(tm_msgs__srv__AskSta_Response * msg)
{
  if (!msg) {
    return;
  }
  // ok
  // subcmd
  rosidl_runtime_c__String__fini(&msg->subcmd);
  // subdata
  rosidl_runtime_c__String__fini(&msg->subdata);
}

tm_msgs__srv__AskSta_Response *
tm_msgs__srv__AskSta_Response__create()
{
  tm_msgs__srv__AskSta_Response * msg = (tm_msgs__srv__AskSta_Response *)malloc(sizeof(tm_msgs__srv__AskSta_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tm_msgs__srv__AskSta_Response));
  bool success = tm_msgs__srv__AskSta_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tm_msgs__srv__AskSta_Response__destroy(tm_msgs__srv__AskSta_Response * msg)
{
  if (msg) {
    tm_msgs__srv__AskSta_Response__fini(msg);
  }
  free(msg);
}


bool
tm_msgs__srv__AskSta_Response__Sequence__init(tm_msgs__srv__AskSta_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tm_msgs__srv__AskSta_Response * data = NULL;
  if (size) {
    data = (tm_msgs__srv__AskSta_Response *)calloc(size, sizeof(tm_msgs__srv__AskSta_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tm_msgs__srv__AskSta_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tm_msgs__srv__AskSta_Response__fini(&data[i - 1]);
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
tm_msgs__srv__AskSta_Response__Sequence__fini(tm_msgs__srv__AskSta_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tm_msgs__srv__AskSta_Response__fini(&array->data[i]);
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

tm_msgs__srv__AskSta_Response__Sequence *
tm_msgs__srv__AskSta_Response__Sequence__create(size_t size)
{
  tm_msgs__srv__AskSta_Response__Sequence * array = (tm_msgs__srv__AskSta_Response__Sequence *)malloc(sizeof(tm_msgs__srv__AskSta_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tm_msgs__srv__AskSta_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tm_msgs__srv__AskSta_Response__Sequence__destroy(tm_msgs__srv__AskSta_Response__Sequence * array)
{
  if (array) {
    tm_msgs__srv__AskSta_Response__Sequence__fini(array);
  }
  free(array);
}
