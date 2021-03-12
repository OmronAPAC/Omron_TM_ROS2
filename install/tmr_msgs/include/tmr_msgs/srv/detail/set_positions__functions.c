// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tmr_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice
#include "tmr_msgs/srv/detail/set_positions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `positions`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
tmr_msgs__srv__SetPositions_Request__init(tmr_msgs__srv__SetPositions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motion_type
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    tmr_msgs__srv__SetPositions_Request__fini(msg);
    return false;
  }
  // velocity
  // acc_time
  // blend_percentage
  // fine_goal
  return true;
}

void
tmr_msgs__srv__SetPositions_Request__fini(tmr_msgs__srv__SetPositions_Request * msg)
{
  if (!msg) {
    return;
  }
  // motion_type
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
  // velocity
  // acc_time
  // blend_percentage
  // fine_goal
}

tmr_msgs__srv__SetPositions_Request *
tmr_msgs__srv__SetPositions_Request__create()
{
  tmr_msgs__srv__SetPositions_Request * msg = (tmr_msgs__srv__SetPositions_Request *)malloc(sizeof(tmr_msgs__srv__SetPositions_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tmr_msgs__srv__SetPositions_Request));
  bool success = tmr_msgs__srv__SetPositions_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tmr_msgs__srv__SetPositions_Request__destroy(tmr_msgs__srv__SetPositions_Request * msg)
{
  if (msg) {
    tmr_msgs__srv__SetPositions_Request__fini(msg);
  }
  free(msg);
}


bool
tmr_msgs__srv__SetPositions_Request__Sequence__init(tmr_msgs__srv__SetPositions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tmr_msgs__srv__SetPositions_Request * data = NULL;
  if (size) {
    data = (tmr_msgs__srv__SetPositions_Request *)calloc(size, sizeof(tmr_msgs__srv__SetPositions_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tmr_msgs__srv__SetPositions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tmr_msgs__srv__SetPositions_Request__fini(&data[i - 1]);
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
tmr_msgs__srv__SetPositions_Request__Sequence__fini(tmr_msgs__srv__SetPositions_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tmr_msgs__srv__SetPositions_Request__fini(&array->data[i]);
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

tmr_msgs__srv__SetPositions_Request__Sequence *
tmr_msgs__srv__SetPositions_Request__Sequence__create(size_t size)
{
  tmr_msgs__srv__SetPositions_Request__Sequence * array = (tmr_msgs__srv__SetPositions_Request__Sequence *)malloc(sizeof(tmr_msgs__srv__SetPositions_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tmr_msgs__srv__SetPositions_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tmr_msgs__srv__SetPositions_Request__Sequence__destroy(tmr_msgs__srv__SetPositions_Request__Sequence * array)
{
  if (array) {
    tmr_msgs__srv__SetPositions_Request__Sequence__fini(array);
  }
  free(array);
}


bool
tmr_msgs__srv__SetPositions_Response__init(tmr_msgs__srv__SetPositions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ok
  return true;
}

void
tmr_msgs__srv__SetPositions_Response__fini(tmr_msgs__srv__SetPositions_Response * msg)
{
  if (!msg) {
    return;
  }
  // ok
}

tmr_msgs__srv__SetPositions_Response *
tmr_msgs__srv__SetPositions_Response__create()
{
  tmr_msgs__srv__SetPositions_Response * msg = (tmr_msgs__srv__SetPositions_Response *)malloc(sizeof(tmr_msgs__srv__SetPositions_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tmr_msgs__srv__SetPositions_Response));
  bool success = tmr_msgs__srv__SetPositions_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tmr_msgs__srv__SetPositions_Response__destroy(tmr_msgs__srv__SetPositions_Response * msg)
{
  if (msg) {
    tmr_msgs__srv__SetPositions_Response__fini(msg);
  }
  free(msg);
}


bool
tmr_msgs__srv__SetPositions_Response__Sequence__init(tmr_msgs__srv__SetPositions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tmr_msgs__srv__SetPositions_Response * data = NULL;
  if (size) {
    data = (tmr_msgs__srv__SetPositions_Response *)calloc(size, sizeof(tmr_msgs__srv__SetPositions_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tmr_msgs__srv__SetPositions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tmr_msgs__srv__SetPositions_Response__fini(&data[i - 1]);
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
tmr_msgs__srv__SetPositions_Response__Sequence__fini(tmr_msgs__srv__SetPositions_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tmr_msgs__srv__SetPositions_Response__fini(&array->data[i]);
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

tmr_msgs__srv__SetPositions_Response__Sequence *
tmr_msgs__srv__SetPositions_Response__Sequence__create(size_t size)
{
  tmr_msgs__srv__SetPositions_Response__Sequence * array = (tmr_msgs__srv__SetPositions_Response__Sequence *)malloc(sizeof(tmr_msgs__srv__SetPositions_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tmr_msgs__srv__SetPositions_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tmr_msgs__srv__SetPositions_Response__Sequence__destroy(tmr_msgs__srv__SetPositions_Response__Sequence * array)
{
  if (array) {
    tmr_msgs__srv__SetPositions_Response__Sequence__fini(array);
  }
  free(array);
}
