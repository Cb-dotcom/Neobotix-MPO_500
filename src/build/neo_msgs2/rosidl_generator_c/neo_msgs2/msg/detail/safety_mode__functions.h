// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from neo_msgs2:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__FUNCTIONS_H_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "neo_msgs2/msg/rosidl_generator_c__visibility_control.h"

#include "neo_msgs2/msg/detail/safety_mode__struct.h"

/// Initialize msg/SafetyMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * neo_msgs2__msg__SafetyMode
 * )) before or use
 * neo_msgs2__msg__SafetyMode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__SafetyMode__init(neo_msgs2__msg__SafetyMode * msg);

/// Finalize msg/SafetyMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__SafetyMode__fini(neo_msgs2__msg__SafetyMode * msg);

/// Create msg/SafetyMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * neo_msgs2__msg__SafetyMode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
neo_msgs2__msg__SafetyMode *
neo_msgs2__msg__SafetyMode__create();

/// Destroy msg/SafetyMode message.
/**
 * It calls
 * neo_msgs2__msg__SafetyMode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__SafetyMode__destroy(neo_msgs2__msg__SafetyMode * msg);

/// Check for msg/SafetyMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__SafetyMode__are_equal(const neo_msgs2__msg__SafetyMode * lhs, const neo_msgs2__msg__SafetyMode * rhs);

/// Copy a msg/SafetyMode message.
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
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__SafetyMode__copy(
  const neo_msgs2__msg__SafetyMode * input,
  neo_msgs2__msg__SafetyMode * output);

/// Initialize array of msg/SafetyMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * neo_msgs2__msg__SafetyMode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__SafetyMode__Sequence__init(neo_msgs2__msg__SafetyMode__Sequence * array, size_t size);

/// Finalize array of msg/SafetyMode messages.
/**
 * It calls
 * neo_msgs2__msg__SafetyMode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__SafetyMode__Sequence__fini(neo_msgs2__msg__SafetyMode__Sequence * array);

/// Create array of msg/SafetyMode messages.
/**
 * It allocates the memory for the array and calls
 * neo_msgs2__msg__SafetyMode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
neo_msgs2__msg__SafetyMode__Sequence *
neo_msgs2__msg__SafetyMode__Sequence__create(size_t size);

/// Destroy array of msg/SafetyMode messages.
/**
 * It calls
 * neo_msgs2__msg__SafetyMode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
void
neo_msgs2__msg__SafetyMode__Sequence__destroy(neo_msgs2__msg__SafetyMode__Sequence * array);

/// Check for msg/SafetyMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__SafetyMode__Sequence__are_equal(const neo_msgs2__msg__SafetyMode__Sequence * lhs, const neo_msgs2__msg__SafetyMode__Sequence * rhs);

/// Copy an array of msg/SafetyMode messages.
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
ROSIDL_GENERATOR_C_PUBLIC_neo_msgs2
bool
neo_msgs2__msg__SafetyMode__Sequence__copy(
  const neo_msgs2__msg__SafetyMode__Sequence * input,
  neo_msgs2__msg__SafetyMode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__FUNCTIONS_H_
