// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from buff_interfaces:msg/Blade.idl
// generated code does not contain a copyright notice

#ifndef BUFF_INTERFACES__MSG__DETAIL__BLADE__FUNCTIONS_H_
#define BUFF_INTERFACES__MSG__DETAIL__BLADE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "buff_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "buff_interfaces/msg/detail/blade__struct.h"

/// Initialize msg/Blade message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * buff_interfaces__msg__Blade
 * )) before or use
 * buff_interfaces__msg__Blade__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
bool
buff_interfaces__msg__Blade__init(buff_interfaces__msg__Blade * msg);

/// Finalize msg/Blade message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
void
buff_interfaces__msg__Blade__fini(buff_interfaces__msg__Blade * msg);

/// Create msg/Blade message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * buff_interfaces__msg__Blade__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
buff_interfaces__msg__Blade *
buff_interfaces__msg__Blade__create();

/// Destroy msg/Blade message.
/**
 * It calls
 * buff_interfaces__msg__Blade__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
void
buff_interfaces__msg__Blade__destroy(buff_interfaces__msg__Blade * msg);

/// Check for msg/Blade message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
bool
buff_interfaces__msg__Blade__are_equal(const buff_interfaces__msg__Blade * lhs, const buff_interfaces__msg__Blade * rhs);

/// Copy a msg/Blade message.
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
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
bool
buff_interfaces__msg__Blade__copy(
  const buff_interfaces__msg__Blade * input,
  buff_interfaces__msg__Blade * output);

/// Initialize array of msg/Blade messages.
/**
 * It allocates the memory for the number of elements and calls
 * buff_interfaces__msg__Blade__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
bool
buff_interfaces__msg__Blade__Sequence__init(buff_interfaces__msg__Blade__Sequence * array, size_t size);

/// Finalize array of msg/Blade messages.
/**
 * It calls
 * buff_interfaces__msg__Blade__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
void
buff_interfaces__msg__Blade__Sequence__fini(buff_interfaces__msg__Blade__Sequence * array);

/// Create array of msg/Blade messages.
/**
 * It allocates the memory for the array and calls
 * buff_interfaces__msg__Blade__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
buff_interfaces__msg__Blade__Sequence *
buff_interfaces__msg__Blade__Sequence__create(size_t size);

/// Destroy array of msg/Blade messages.
/**
 * It calls
 * buff_interfaces__msg__Blade__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
void
buff_interfaces__msg__Blade__Sequence__destroy(buff_interfaces__msg__Blade__Sequence * array);

/// Check for msg/Blade message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
bool
buff_interfaces__msg__Blade__Sequence__are_equal(const buff_interfaces__msg__Blade__Sequence * lhs, const buff_interfaces__msg__Blade__Sequence * rhs);

/// Copy an array of msg/Blade messages.
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
ROSIDL_GENERATOR_C_PUBLIC_buff_interfaces
bool
buff_interfaces__msg__Blade__Sequence__copy(
  const buff_interfaces__msg__Blade__Sequence * input,
  buff_interfaces__msg__Blade__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BUFF_INTERFACES__MSG__DETAIL__BLADE__FUNCTIONS_H_