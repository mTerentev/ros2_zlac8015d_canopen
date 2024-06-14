// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from overlord100_msgs:msg/WheelsData.idl
// generated code does not contain a copyright notice

#ifndef OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__STRUCT_HPP_
#define OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__overlord100_msgs__msg__WheelsData __attribute__((deprecated))
#else
# define DEPRECATED__overlord100_msgs__msg__WheelsData __declspec(deprecated)
#endif

namespace overlord100_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelsData_
{
  using Type = WheelsData_<ContainerAllocator>;

  explicit WheelsData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0;
      this->right = 0.0;
    }
  }

  explicit WheelsData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left = 0.0;
      this->right = 0.0;
    }
  }

  // field types and members
  using _left_type =
    double;
  _left_type left;
  using _right_type =
    double;
  _right_type right;

  // setters for named parameter idiom
  Type & set__left(
    const double & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__right(
    const double & _arg)
  {
    this->right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    overlord100_msgs::msg::WheelsData_<ContainerAllocator> *;
  using ConstRawPtr =
    const overlord100_msgs::msg::WheelsData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      overlord100_msgs::msg::WheelsData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      overlord100_msgs::msg::WheelsData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__overlord100_msgs__msg__WheelsData
    std::shared_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__overlord100_msgs__msg__WheelsData
    std::shared_ptr<overlord100_msgs::msg::WheelsData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelsData_ & other) const
  {
    if (this->left != other.left) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelsData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelsData_

// alias to use template instance with default allocator
using WheelsData =
  overlord100_msgs::msg::WheelsData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace overlord100_msgs

#endif  // OVERLORD100_MSGS__MSG__DETAIL__WHEELS_DATA__STRUCT_HPP_
