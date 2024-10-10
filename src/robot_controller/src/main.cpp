#include "rclcpp/rclcpp.hpp"
#include "robot_controller.h"

int main(int argc, char *argv[])
{
    // Initialize ROS2 communication. This sets up ROS2 and should be done before any nodes are created.
    rclcpp::init(argc, argv);

    // Create a node, which is the fundamental component of ROS2. Nodes contain publishers, subscribers, and other
    // functionalities that allow communication in the ROS2 network.
    // We pass a string "robot_controller" to name this node.
    auto node = rclcpp::Node::make_shared("robot_controller_node");

    // Create an instance of the RobotController class and pass the node to its constructor.
    // The RobotController class will handle subscribing to the /scan topic and publishing to /cmd_vel.
    auto robot_controller = std::make_shared<RobotController>(node);
    
    // rclcpp::spin() will keep the node alive and handle all incoming and outgoing ROS2 communications (e.g., receiving
    // messages from subscribers and calling their corresponding callbacks). It spins until the user stops the program
    // (e.g., with Ctrl+C).
    rclcpp::spin(node);

    // Once the node is stopped (by exiting the spin loop), we should cleanly shut down the ROS2 system.
    rclcpp::shutdown();

    return 0;
}
