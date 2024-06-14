// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice

#ifndef OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__STRUCT_H_
#define OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/WheelsData in the package overlord100_msgs.
typedef struct overlord100_msgs__msg__WheelsData
{
  double left;
  double right;
} overlord100_msgs__msg__WheelsData;

// Struct for a sequence of overlord100_msgs__msg__WheelsData.
typedef struct overlord100_msgs__msg__WheelsData__Sequence
{
  overlord100_msgs__msg__WheelsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} overlord100_msgs__msg__WheelsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__STRUCT_H_
