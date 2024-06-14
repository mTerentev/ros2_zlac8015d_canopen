// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "overlord100_msgs/msg/detail/wheels_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace overlord100_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WheelsData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) overlord100_msgs::msg::WheelsData(_init);
}

void WheelsData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<overlord100_msgs::msg::WheelsData *>(message_memory);
  typed_message->~WheelsData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelsData_message_member_array[2] = {
  {
    "left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(overlord100_msgs::msg::WheelsData, left),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(overlord100_msgs::msg::WheelsData, right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelsData_message_members = {
  "overlord100_msgs::msg",  // message namespace
  "WheelsData",  // message name
  2,  // number of fields
  sizeof(overlord100_msgs::msg::WheelsData),
  WheelsData_message_member_array,  // message members
  WheelsData_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelsData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelsData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelsData_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace overlord100_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<overlord100_msgs::msg::WheelsData>()
{
  return &::overlord100_msgs::msg::rosidl_typesupport_introspection_cpp::WheelsData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, overlord100_msgs, msg, WheelsData)() {
  return &::overlord100_msgs::msg::rosidl_typesupport_introspection_cpp::WheelsData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
