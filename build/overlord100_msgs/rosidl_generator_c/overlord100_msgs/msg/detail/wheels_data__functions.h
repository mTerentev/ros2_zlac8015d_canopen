// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice

#ifndef OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__FUNCTIONS_H_
#define OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "overlord100_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "overlord100_msgs/msg/detail/wheels_data__struct.h"

/// Initialize msg/WheelsData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * overlord100_msgs__msg__WheelsData
 * )) before or use
 * overlord100_msgs__msg__WheelsData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
bool
overlord100_msgs__msg__WheelsData__init(overlord100_msgs__msg__WheelsData * msg);

/// Finalize msg/WheelsData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
void
overlord100_msgs__msg__WheelsData__fini(overlord100_msgs__msg__WheelsData * msg);

/// Create msg/WheelsData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * overlord100_msgs__msg__WheelsData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
overlord100_msgs__msg__WheelsData *
overlord100_msgs__msg__WheelsData__create();

/// Destroy msg/WheelsData message.
/**
 * It calls
 * overlord100_msgs__msg__WheelsData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
void
overlord100_msgs__msg__WheelsData__destroy(overlord100_msgs__msg__WheelsData * msg);

/// Check for msg/WheelsData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
bool
overlord100_msgs__msg__WheelsData__are_equal(const overlord100_msgs__msg__WheelsData * lhs, const overlord100_msgs__msg__WheelsData * rhs);

/// Copy a msg/WheelsData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
bool
overlord100_msgs__msg__WheelsData__copy(
  const overlord100_msgs__msg__WheelsData * input,
  overlord100_msgs__msg__WheelsData * output);

/// Initialize array of msg/WheelsData messages.
/**
 * It allocates the memory for the number of elements and calls
 * overlord100_msgs__msg__WheelsData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
bool
overlord100_msgs__msg__WheelsData__Sequence__init(overlord100_msgs__msg__WheelsData__Sequence * array, size_t size);

/// Finalize array of msg/WheelsData messages.
/**
 * It calls
 * overlord100_msgs__msg__WheelsData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
void
overlord100_msgs__msg__WheelsData__Sequence__fini(overlord100_msgs__msg__WheelsData__Sequence * array);

/// Create array of msg/WheelsData messages.
/**
 * It allocates the memory for the array and calls
 * overlord100_msgs__msg__WheelsData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
overlord100_msgs__msg__WheelsData__Sequence *
overlord100_msgs__msg__WheelsData__Sequence__create(size_t size);

/// Destroy array of msg/WheelsData messages.
/**
 * It calls
 * overlord100_msgs__msg__WheelsData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
void
overlord100_msgs__msg__WheelsData__Sequence__destroy(overlord100_msgs__msg__WheelsData__Sequence * array);

/// Check for msg/WheelsData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
bool
overlord100_msgs__msg__WheelsData__Sequence__are_equal(const overlord100_msgs__msg__WheelsData__Sequence * lhs, const overlord100_msgs__msg__WheelsData__Sequence * rhs);

/// Copy an array of msg/WheelsData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_overlord100_msgs
bool
overlord100_msgs__msg__WheelsData__Sequence__copy(
  const overlord100_msgs__msg__WheelsData__Sequence * input,
  overlord100_msgs__msg__WheelsData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__FUNCTIONS_H_
