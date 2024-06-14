// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "overlord100_msgs/msg/detail/wheels_data__rosidl_typesupport_introspection_c.h"
#include "overlord100_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "overlord100_msgs/msg/detail/wheels_data__functions.h"
#include "overlord100_msgs/msg/detail/wheels_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  overlord100_msgs__msg__WheelsData__init(message_memory);
}

void overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_fini_function(void * message_memory)
{
  overlord100_msgs__msg__WheelsData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_member_array[2] = {
  {
    "left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(overlord100_msgs__msg__WheelsData, left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(overlord100_msgs__msg__WheelsData, right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_members = {
  "overlord100_msgs__msg",  // message namespace
  "WheelsData",  // message name
  2,  // number of fields
  sizeof(overlord100_msgs__msg__WheelsData),
  overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_member_array,  // message members
  overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_init_function,  // function to initialize message memory (memory has to be allocated)
  overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_type_support_handle = {
  0,
  &overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_overlord100_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, overlord100_msgs, msg, WheelsData)() {
  if (!overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_type_support_handle.typesupport_identifier) {
    overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &overlord100_msgs__msg__WheelsData__rosidl_typesupport_introspection_c__WheelsData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
