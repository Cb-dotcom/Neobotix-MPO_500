#ifndef ROBOT_CONTROLLER_H
#define ROBOT_CONTROLLER_H

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>

#define THRESHOLD_DISTANCE 1.2 

class RobotController
{
public:
    RobotController(rclcpp::Node::SharedPtr node);

private:
    float left_distance;
    float front_distance;
    float right_distance;

    void laserScanCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg);
    void publishVelocity(float linear, float angular);
    void processLaserScanData(const sensor_msgs::msg::LaserScan::SharedPtr msg,
                          float &right_distance, float &front_distance, float &left_distance);

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
    rclcpp::Node::SharedPtr node_;
};

#endif  // ROBOT_CONTROLLER_H
