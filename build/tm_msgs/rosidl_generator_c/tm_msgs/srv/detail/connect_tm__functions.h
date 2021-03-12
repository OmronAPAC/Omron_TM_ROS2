// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tm_msgs:srv/ConnectTM.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__CONNECT_TM__FUNCTIONS_H_
#define TM_MSGS__SRV__DETAIL__CONNECT_TM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tm_msgs/srv/detail/connect_tm__struct.h"

/// Initialize srv/ConnectTM message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tm_msgs__srv__ConnectTM_Request
 * )) before or use
 * tm_msgs__srv__ConnectTM_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
bool
tm_msgs__srv__ConnectTM_Request__init(tm_msgs__srv__ConnectTM_Request * msg);

/// Finalize srv/ConnectTM message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Request__fini(tm_msgs__srv__ConnectTM_Request * msg);

/// Create srv/ConnectTM message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tm_msgs__srv__ConnectTM_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
tm_msgs__srv__ConnectTM_Request *
tm_msgs__srv__ConnectTM_Request__create();

/// Destroy srv/ConnectTM message.
/**
 * It calls
 * tm_msgs__srv__ConnectTM_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Request__destroy(tm_msgs__srv__ConnectTM_Request * msg);


/// Initialize array of srv/ConnectTM messages.
/**
 * It allocates the memory for the number of elements and calls
 * tm_msgs__srv__ConnectTM_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
bool
tm_msgs__srv__ConnectTM_Request__Sequence__init(tm_msgs__srv__ConnectTM_Request__Sequence * array, size_t size);

/// Finalize array of srv/ConnectTM messages.
/**
 * It calls
 * tm_msgs__srv__ConnectTM_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Request__Sequence__fini(tm_msgs__srv__ConnectTM_Request__Sequence * array);

/// Create array of srv/ConnectTM messages.
/**
 * It allocates the memory for the array and calls
 * tm_msgs__srv__ConnectTM_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
tm_msgs__srv__ConnectTM_Request__Sequence *
tm_msgs__srv__ConnectTM_Request__Sequence__create(size_t size);

/// Destroy array of srv/ConnectTM messages.
/**
 * It calls
 * tm_msgs__srv__ConnectTM_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Request__Sequence__destroy(tm_msgs__srv__ConnectTM_Request__Sequence * array);

/// Initialize srv/ConnectTM message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tm_msgs__srv__ConnectTM_Response
 * )) before or use
 * tm_msgs__srv__ConnectTM_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
bool
tm_msgs__srv__ConnectTM_Response__init(tm_msgs__srv__ConnectTM_Response * msg);

/// Finalize srv/ConnectTM message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Response__fini(tm_msgs__srv__ConnectTM_Response * msg);

/// Create srv/ConnectTM message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tm_msgs__srv__ConnectTM_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
tm_msgs__srv__ConnectTM_Response *
tm_msgs__srv__ConnectTM_Response__create();

/// Destroy srv/ConnectTM message.
/**
 * It calls
 * tm_msgs__srv__ConnectTM_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Response__destroy(tm_msgs__srv__ConnectTM_Response * msg);


/// Initialize array of srv/ConnectTM messages.
/**
 * It allocates the memory for the number of elements and calls
 * tm_msgs__srv__ConnectTM_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
bool
tm_msgs__srv__ConnectTM_Response__Sequence__init(tm_msgs__srv__ConnectTM_Response__Sequence * array, size_t size);

/// Finalize array of srv/ConnectTM messages.
/**
 * It calls
 * tm_msgs__srv__ConnectTM_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Response__Sequence__fini(tm_msgs__srv__ConnectTM_Response__Sequence * array);

/// Create array of srv/ConnectTM messages.
/**
 * It allocates the memory for the array and calls
 * tm_msgs__srv__ConnectTM_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
tm_msgs__srv__ConnectTM_Response__Sequence *
tm_msgs__srv__ConnectTM_Response__Sequence__create(size_t size);

/// Destroy array of srv/ConnectTM messages.
/**
 * It calls
 * tm_msgs__srv__ConnectTM_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tm_msgs
void
tm_msgs__srv__ConnectTM_Response__Sequence__destroy(tm_msgs__srv__ConnectTM_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__CONNECT_TM__FUNCTIONS_H_
