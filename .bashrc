# env
alias python=python3

export ROBOT_TYPE=r2            # r2, x1, x3
export RPLIDAR_TYPE=4ROS          # a1, s2, 4ROS
export CAMERA_TYPE=astrapro    # astrapro, astraplus
echo "--------------------------------------------------------"
echo -e "my_robot_type: \033[32m$ROBOT_TYPE\033[0m | my_lidar: \033[32m$RPLIDAR_TYPE\033[0m | my_camera: \033[32m$CAMERA_TYPE\033[0m"
echo "--------------------------------------------------------"

#ros2
source /opt/ros/humble/setup.bash
source "$HOME/yahboomcar_ros2_ws/yahboomcar_ws/install/setup.bash"
source "$HOME/yahboomcar_ros2_ws/software/library_ws/install/setup.bash"

#r2ware
source "$HOME/r2ware/install/setup.bash"

# orbslam2
export ORB_SLAM2_ROOT_DIR="$HOME/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master"
export LD_LIBRARY_PATH="\
$HOME/yahboomcar_ros2_ws/software/orbslam2/Pangolin-0.6/build/src:\
$HOME/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master/Thirdparty/DBoW2/lib:\
$HOME/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master/Thirdparty/g2o/lib:\
$HOME/yahboomcar_ros2_ws/software/orbslam2/ORB_SLAM2-master/lib:\
$LD_LIBRARY_PATH"
