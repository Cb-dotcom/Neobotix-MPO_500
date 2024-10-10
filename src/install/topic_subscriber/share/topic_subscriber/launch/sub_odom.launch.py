from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
        package='topic_subscriber',
        executable='odom_sub_node',
        output='screen'),
        ])
