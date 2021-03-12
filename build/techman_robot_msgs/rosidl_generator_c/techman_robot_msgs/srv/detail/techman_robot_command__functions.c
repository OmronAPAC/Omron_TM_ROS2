// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from techman_robot_msgs:srv/TechmanRobotCommand.idl
// generated code does not contain a copyright notice
#include "techman_robot_msgs/srv/detail/techman_robot_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `command`
// Member `command_parameter_string`
#include "rosidl_runtime_c/string_functions.h"

bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__init(techman_robot_msgs__srv__TechmanRobotCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(msg);
    return false;
  }
  // command_parameter_string
  if (!rosidl_runtime_c__String__init(&msg->command_parameter_string)) {
    techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(techman_robot_msgs__srv__TechmanRobotCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // command_parameter_string
  rosidl_runtime_c__String__fini(&msg->command_parameter_string);
}

techman_robot_msgs__srv__TechmanRobotCommand_Request *
techman_robot_msgs__srv__TechmanRobotCommand_Request__create()
{
  techman_robot_msgs__srv__TechmanRobotCommand_Request * msg = (techman_robot_msgs__srv__TechmanRobotCommand_Request *)malloc(sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Request));
  bool success = techman_robot_msgs__srv__TechmanRobotCommand_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
techman_robot_msgs__srv__TechmanRobotCommand_Request__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Request * msg)
{
  if (msg) {
    techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(msg);
  }
  free(msg);
}


bool
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__init(techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  techman_robot_msgs__srv__TechmanRobotCommand_Request * data = NULL;
  if (size) {
    data = (techman_robot_msgs__srv__TechmanRobotCommand_Request *)calloc(size, sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = techman_robot_msgs__srv__TechmanRobotCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(&data[i - 1]);
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
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__fini(techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      techman_robot_msgs__srv__TechmanRobotCommand_Request__fini(&array->data[i]);
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

techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__create(size_t size)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * array = (techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence *)malloc(sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence * array)
{
  if (array) {
    techman_robot_msgs__srv__TechmanRobotCommand_Request__Sequence__fini(array);
  }
  free(array);
}


bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__init(techman_robot_msgs__srv__TechmanRobotCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // is_success
  return true;
}

void
techman_robot_msgs__srv__TechmanRobotCommand_Response__fini(techman_robot_msgs__srv__TechmanRobotCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // is_success
}

techman_robot_msgs__srv__TechmanRobotCommand_Response *
techman_robot_msgs__srv__TechmanRobotCommand_Response__create()
{
  techman_robot_msgs__srv__TechmanRobotCommand_Response * msg = (techman_robot_msgs__srv__TechmanRobotCommand_Response *)malloc(sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Response));
  bool success = techman_robot_msgs__srv__TechmanRobotCommand_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
techman_robot_msgs__srv__TechmanRobotCommand_Response__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Response * msg)
{
  if (msg) {
    techman_robot_msgs__srv__TechmanRobotCommand_Response__fini(msg);
  }
  free(msg);
}


bool
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__init(techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  techman_robot_msgs__srv__TechmanRobotCommand_Response * data = NULL;
  if (size) {
    data = (techman_robot_msgs__srv__TechmanRobotCommand_Response *)calloc(size, sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = techman_robot_msgs__srv__TechmanRobotCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        techman_robot_msgs__srv__TechmanRobotCommand_Response__fini(&data[i - 1]);
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
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__fini(techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      techman_robot_msgs__srv__TechmanRobotCommand_Response__fini(&array->data[i]);
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

techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence *
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__create(size_t size)
{
  techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * array = (techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence *)malloc(sizeof(techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__destroy(techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence * array)
{
  if (array) {
    techman_robot_msgs__srv__TechmanRobotCommand_Response__Sequence__fini(array);
  }
  free(array);
}
