// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neo_msgs2:msg/SafetyMode.idl
// generated code does not contain a copyright notice

#ifndef NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__STRUCT_H_
#define NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SM_NONE'.
enum
{
  neo_msgs2__msg__SafetyMode__SM_NONE = 0
};

/// Constant 'SM_APPROACHING'.
enum
{
  neo_msgs2__msg__SafetyMode__SM_APPROACHING = 1
};

/// Constant 'SM_DEPARTING'.
enum
{
  neo_msgs2__msg__SafetyMode__SM_DEPARTING = 2
};

/// Constant 'SM_WORKING'.
enum
{
  neo_msgs2__msg__SafetyMode__SM_WORKING = 3
};

/// Constant 'SM_HANDLING'.
enum
{
  neo_msgs2__msg__SafetyMode__SM_HANDLING = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SafetyMode in the package neo_msgs2.
/**
  * This message holds specific data available from Neobotix RelayBoardV2
 */
typedef struct neo_msgs2__msg__SafetyMode
{
  std_msgs__msg__Header header;
  /// See values above
  uint8_t mode;
} neo_msgs2__msg__SafetyMode;

// Struct for a sequence of neo_msgs2__msg__SafetyMode.
typedef struct neo_msgs2__msg__SafetyMode__Sequence
{
  neo_msgs2__msg__SafetyMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neo_msgs2__msg__SafetyMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEO_MSGS2__MSG__DETAIL__SAFETY_MODE__STRUCT_H_
