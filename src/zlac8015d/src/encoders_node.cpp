#include <memory>
#include <chrono>

#include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/string.hpp"
#include "overlord100_msgs/msg/wheels_data.hpp"
#include "can_msgs/msg/frame.hpp"
#include <algorithm>
#include <vector>

using std::placeholders::_1;
using namespace std::chrono_literals;

#define CAN_OUT_TOPIC "/CAN/can0/transmit"
#define CAN_IN_TOPIC "/CAN/can0/receive"

#define VELOCITIES_TOPIC "/encoders_velocities"
#define ANGLES_TOPIC "/encoders_angles"

#define NODE_ID 1

class EncodersNode : public rclcpp::Node
{
  public:
    MotorsDriverNode()
    : Node("encoders_node")
    {
        
        request = this->create_publisher<can_msgs::msg::Frame>(CAN_OUT_TOPIC, 10);

        response = this->create_subscription<can_msgs::msg::Frame>(CAN_IN_TOPIC, 10, std::bind(&EncodersNode::get_response, this, _1));

        pub_velocities = this->create_publisher<overlord100_msgs::msg::WheelsData>(VELOCITIES_TOPIC, 10);
        pub_angles = this->create_publisher<overlord100_msgs::msg::WheelsData>(ANGLES_TOPIC, 10);

        timer_ = this->create_wall_timer(500ms, std::bind(&MotorsDriverNode::send_request, this));
    }

  private:
    void get_response(const can_msgs::msg::Frame & msg)
    {
        msg.data[]
    }

    void send_request() {

      RCLCPP_INFO(this->get_logger(), "OK\n");

      std::array<uint8_t, 8UL> command = std::array<uint8_t, 8UL>({
        {0x2B, 0x0F, 0x20, 0x00, 0x01, 0x00, 0x00, 0x00},
      });

        can_msgs::msg::Frame msg;
        msg.id = (0xC << 7) + (u_int32_t)NODE_ID;
        msg.dlc = 8;
        msg.data = command;

        request->publish(msg);

    }


    rclcpp::Publisher<overlord100_msgs::msg::WheelsData>::SharedPtr pub_velocities;
    rclcpp::Publisher<overlord100_msgs::msg::WheelsData>::SharedPtr pub_angles;

    rclcpp::Publisher<can_msgs::msg::Frame>::SharedPtr request;

    rclcpp::TimerBase::SharedPtr timer_;


};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<EncodersNode>());
  rclcpp::shutdown();
  return 0;
}