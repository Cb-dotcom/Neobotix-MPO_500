import launch
import launch.actions
import launch.substitutions
import os
from ament_index_python.packages import get_package_share_directory
import launch_ros.actions

def generate_launch_description():
    robot_namespace = launch.substitutions.LaunchConfiguration('namespace', default="")
    config = os.path.join(get_package_share_directory('neo_mpo_500-2'),'configs/kinematics','kinematics.yaml')
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package='neo_kinematics_mecanum2',
            executable='neo_mecanum_node',
            namespace = robot_namespace,
            output='screen',
            name='neo_mecanum_node',
            parameters = [config])
    ])
