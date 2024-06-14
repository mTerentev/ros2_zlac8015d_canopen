// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice

#ifndef OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__TRAITS_HPP_
#define OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "overlord100_msgs/msg/detail/wheels_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace overlord100_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelsData & msg,
  std::ostream & out)
{
  out << "{";
  // member: left
  {
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << ", ";
  }

  // member: right
  {
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelsData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left: ";
    rosidl_generator_traits::value_to_yaml(msg.left, out);
    out << "\n";
  }

  // member: right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right: ";
    rosidl_generator_traits::value_to_yaml(msg.right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelsData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace overlord100_msgs

namespace rosidl_generator_traits
{

[[deprecated("use overlord100_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const overlord100_msgs::msg::WheelsData & msg,
  std::ostream & out, size_t indentation = 0)
{
  overlord100_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use overlord100_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const overlord100_msgs::msg::WheelsData & msg)
{
  return overlord100_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<overlord100_msgs::msg::WheelsData>()
{
  return "overlord100_msgs::msg::WheelsData";
}

template<>
inline const char * name<overlord100_msgs::msg::WheelsData>()
{
  return "overlord100_msgs/msg/WheelsData";
}

template<>
struct has_fixed_size<overlord100_msgs::msg::WheelsData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<overlord100_msgs::msg::WheelsData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<overlord100_msgs::msg::WheelsData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__TRAITS_HPP_
