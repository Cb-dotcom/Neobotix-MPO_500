#include "robot_controller.h"

// Constructor
RobotController::RobotController(rclcpp::Node::SharedPtr node)
{
    node_ = node;

    // Create publisher for /cmd_vel
    cmd_vel_pub_ = node_->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

    // Create subscriber for /scan
    scan_sub_ = node_->create_subscription<sensor_msgs::msg::LaserScan>(
        "/scan", 10, std::bind(&RobotController::laserScanCallback, this, std::placeholders::_1));
}

void RobotController::processLaserScanData(const sensor_msgs::msg::LaserScan::SharedPtr msg,
                          float &right_distance, float &front_distance, float &left_distance)
{
    // Calculate array size of ranges
    int ranges_len = (msg->angle_max - msg->angle_min) / msg->angle_increment;
    int split_size = ranges_len / 3;

    // // Split sensor data into three areas and extract smallest distance
    right_distance = *std::min_element(msg->ranges.begin(), msg->ranges.begin()+split_size);
    front_distance = *std::min_element(msg->ranges.begin()+split_size, msg->ranges.begin()+2*split_size);
    left_distance = *std::min_element(msg->ranges.begin()+2*split_size, msg->ranges.begin()+ranges_len);

    //or
    // right_distance = msg->ranges[540];
    // front_distance = msg->ranges[360];
    // left_distance = msg->ranges[180];
}

void RobotController::publishVelocity(float linear, float angular)
{
    //Publish the linear and angular speeds to the robot
    auto msg = geometry_msgs::msg::Twist();
    msg.linear.x = linear;
    msg.angular.z = angular;
    cmd_vel_pub_->publish(msg);
}


void RobotController::laserScanCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
{
    // Call the function to process laser data and get distances
    processLaserScanData(msg, right_distance, front_distance, left_distance);
    // Use the calculated distances to adjust robot movement
    RCLCPP_INFO(node_->get_logger(), "Right: %f, Front: %f, Left: %f", right_distance, front_distance, left_distance);

    //Logic to modify vel messages based on laser data 
    if(front_distance <= THRESHOLD_DISTANCE || right_distance <= THRESHOLD_DISTANCE)
    {
        publishVelocity(0, 0.3);  // Turn left
    }
    // else if(left_distance <= THRESHOLD_DISTANCE)
    // {
    //     publishVelocity(0, -0.3); // Turn right
    // }
    else
    {
        publishVelocity(0.3, 0);  // Move forward
    }
}