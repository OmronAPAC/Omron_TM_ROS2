// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tm_msgs:srv/ConnectTM.idl
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
#include "tm_msgs/srv/detail/connect_tm__struct.h"
#include "tm_msgs/srv/detail/connect_tm__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tm_msgs__srv__connect_tm__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("tm_msgs.srv._connect_tm.ConnectTM_Request", full_classname_dest, 41) == 0);
  }
  tm_msgs__srv__ConnectTM_Request * ros_message = _ros_message;
  {  // server
    PyObject * field = PyObject_GetAttrString(_pymsg, "server");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->server = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // connect
    PyObject * field = PyObject_GetAttrString(_pymsg, "connect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->connect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // reconnect
    PyObject * field = PyObject_GetAttrString(_pymsg, "reconnect");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->reconnect = (Py_True == field);
    Py_DECREF(field);
  }
  {  // timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeout");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timeout = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timeval
    PyObject * field = PyObject_GetAttrString(_pymsg, "timeval");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timeval = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tm_msgs__srv__connect_tm__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConnectTM_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tm_msgs.srv._connect_tm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConnectTM_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tm_msgs__srv__ConnectTM_Request * ros_message = (tm_msgs__srv__ConnectTM_Request *)raw_ros_message;
  {  // server
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->server);
    {
      int rc = PyObject_SetAttrString(_pymessage, "server", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->connect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "connect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reconnect
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->reconnect ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reconnect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeout
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timeout);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timeval
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timeval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timeval", field);
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
// #include "tm_msgs/srv/detail/connect_tm__struct.h"
// already included above
// #include "tm_msgs/srv/detail/connect_tm__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tm_msgs__srv__connect_tm__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("tm_msgs.srv._connect_tm.ConnectTM_Response", full_classname_dest, 42) == 0);
  }
  tm_msgs__srv__ConnectTM_Response * ros_message = _ros_message;
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
PyObject * tm_msgs__srv__connect_tm__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ConnectTM_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tm_msgs.srv._connect_tm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ConnectTM_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tm_msgs__srv__ConnectTM_Response * ros_message = (tm_msgs__srv__ConnectTM_Response *)raw_ros_message;
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
