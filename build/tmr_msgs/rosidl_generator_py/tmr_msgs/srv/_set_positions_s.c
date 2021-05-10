// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tmr_msgs:srv/SetPositions.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "tmr_msgs/srv/detail/set_positions__struct.h"
#include "tmr_msgs/srv/detail/set_positions__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tmr_msgs__srv__set_positions__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tmr_msgs.srv._set_positions.SetPositions_Request", full_classname_dest, 48) == 0);
  }
  tmr_msgs__srv__SetPositions_Request * ros_message = _ros_message;
  {  // motion_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motion_type = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // positions
    PyObject * field = PyObject_GetAttrString(_pymsg, "positions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'positions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->positions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    double * dest = ros_message->positions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyFloat_Check(item));
      double tmp = PyFloat_AS_DOUBLE(item);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // blend_percentage
    PyObject * field = PyObject_GetAttrString(_pymsg, "blend_percentage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blend_percentage = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fine_goal
    PyObject * field = PyObject_GetAttrString(_pymsg, "fine_goal");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fine_goal = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tmr_msgs__srv__set_positions__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPositions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tmr_msgs.srv._set_positions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPositions_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tmr_msgs__srv__SetPositions_Request * ros_message = (tmr_msgs__srv__SetPositions_Request *)raw_ros_message;
  {  // motion_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motion_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // positions
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "positions");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->positions.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->positions.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->positions.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blend_percentage
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->blend_percentage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blend_percentage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fine_goal
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fine_goal ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fine_goal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "tmr_msgs/srv/detail/set_positions__struct.h"
// already included above
// #include "tmr_msgs/srv/detail/set_positions__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tmr_msgs__srv__set_positions__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("tmr_msgs.srv._set_positions.SetPositions_Response", full_classname_dest, 49) == 0);
  }
  tmr_msgs__srv__SetPositions_Response * ros_message = _ros_message;
  {  // ok
    PyObject * field = PyObject_GetAttrString(_pymsg, "ok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ok = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tmr_msgs__srv__set_positions__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetPositions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tmr_msgs.srv._set_positions");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetPositions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tmr_msgs__srv__SetPositions_Response * ros_message = (tmr_msgs__srv__SetPositions_Response *)raw_ros_message;
  {  // ok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
