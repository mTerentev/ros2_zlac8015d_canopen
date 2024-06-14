// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice

#ifndef OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__BUILDER_HPP_
#define OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "overlord100_msgs/msg/detail/wheels_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace overlord100_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelsData_right
{
public:
  explicit Init_WheelsData_right(::overlord100_msgs::msg::WheelsData & msg)
  : msg_(msg)
  {}
  ::overlord100_msgs::msg::WheelsData right(::overlord100_msgs::msg::WheelsData::_right_type arg)
  {
    msg_.right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::overlord100_msgs::msg::WheelsData msg_;
};

class Init_WheelsData_left
{
public:
  Init_WheelsData_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelsData_right left(::overlord100_msgs::msg::WheelsData::_left_type arg)
  {
    msg_.left = std::move(arg);
    return Init_WheelsData_right(msg_);
  }

private:
  ::overlord100_msgs::msg::WheelsData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::overlord100_msgs::msg::WheelsData>()
{
  return overlord100_msgs::msg::builder::Init_WheelsData_left();
}

}  // namespace overlord100_msgs

#endif  // OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__BUILDER_HPP_
