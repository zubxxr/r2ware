# R2Ware
This will help with deployment on the ROSMASTER R2 and sending all the onboard sensor data to a topic, which can be used to send to Autoware.

## Getting Started 

### Method 1: Deployment of R2 with Autoware over WIFI
### Method 2. Deployment of R2 with Autoware Locally


1. **Clone Repository:**

   Clone the R2Ware repository and navigate into the project directory:

   ```bash
   cd ~/
   git clone https://github.com/ahmaad-ansari/r2ware.git
   cd r2ware
   ```

2. **Initialize Workspace:**

   Create the `src` directory and import the necessary repositories:

   ```bash
   mkdir src
   vcs import src < r2ware.repos
   ```

3. **Set Up Docker:**

   Run the provided script to set up Docker for the R2Ware environment. You can optionally specify the `vlp32` option to configure the Docker container for VLP32 usage:

   ```bash
   ./run_docker.sh vlp32
   cd ~/r2ware
   ```

4. **Install Dependencies:**

   Install ROS dependencies using `rosdep`:

   ```bash
   apt update
   rosdep update
   rosdep install -y --from-paths src --ignore-src --rosdistro $ROS_DISTRO
   ```

5. **Build the Workspace:**

   Build the R2Ware workspace using `colcon`:

   ```bash
   colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
   ```

   Or build specific packages:

   ```bash
   colcon build --symlink-install --packages-select r2ware_control
   ```
   ```bash
   colcon build --symlink-install --packages-select r2ware_sensing
   ```
   ```bash
   colcon build --symlink-install --packages-select r2ware_launch
   ```
   ```bash
   colcon build --symlink-install --packages-select r2ware_status
   ```
## Tier IV Nebula Sensor Driver


### 1.
### 2.

This guide provides instructions for setting up the Nebula Driver for VLP32C Velodyne LiDAR.

### Prerequisites

Before setting up the Nebula Driver, ensure you have the following prerequisites installed:

- ROS (Galactic distribution)
- Velodyne ROS package

You can install the Velodyne ROS package using the following command:

```bash
sudo apt-get install ros-galactic-velodyne
```

### Setup Steps

1. **Create Workspace:**

   Create a workspace directory for the Nebula Sensor Driver on the local machine:

   ```bash
   mkdir -p ~/nebula_sensor_driver/src
   cd ~/nebula_sensor_driver
   ```

2. **Clone Nebula Repository:**

   Clone the Nebula repository into the `src` directory:

   ```bash
   git clone https://github.com/tier4/nebula.git src
   ```

3. **Import Dependencies:**

   Import the dependencies using `vcs`:

   ```bash
   vcs import src < src/build_depends.repos
   ```

4. **Install Dependencies:**

   Install ROS dependencies using `rosdep`:

   ```bash
   rosdep install --from-paths src --ignore-src -y -r
   ```

5. **Build Nebula:**

   Build the Nebula driver using `colcon`:

   ```bash
   colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
   ```

>- Make sure to source your ROS workspace (`source ~/nebula_sensor_driver/install/setup.bash`) before using the Nebula Driver. And add the following to your `.bashrc` file.
>
> ```bash
> export ROS_LOCALHOST_ONLY=1
> export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
> if [ ! -e /tmp/cycloneDDS_configured ]; then
>     sudo sysctl -w net.core.rmem_max=2147483647
>     sudo ip link set lo multicast on
>     touch /tmp/cycloneDDS_configured
> fi
> ```


## Multi-Machine Communication Setup

This section outlines the setup process for enabling multi-machine communication between the R2 and a ground station.

### R2 Machine

#### Local Machine Setup

1. **Enable Multicast:**

   Run the following commands on the R2's local machine to enable communication with a ground station **on the same network**:

   ```bash
   sudo ip link set lo multicast on
   sudo ufw disable
   ```

   You can check the status of the firewall with the following command:

   ```bash
   sudo ufw status
   ```

#### Docker Container Setup

2. **Inside Docker Container:**

   Run the following commands while inside the R2's Docker container to enable communication with a ground station on the same network:

   ```bash
   apt install -y ros-foxy-fastrtps
   ```

### Ground Station Setup

3. **Ground Station Configuration:**

   Run the following commands on the ground station running Autoware:

   ```bash
   sudo ufw disable
   sudo ip link set lo multicast on
   sudo apt install -y ros-humble-fastrtps
   ```

   Set the following environment variables to enable ROS 2 communication:

   ```bash
   export ROS_LOCALHOST_ONLY=0
   export ROS_DOMAIN_ID=32
   export RMW_IMPLEMENTATION=rmw_fastrtps_cpp
   ```

### Test Connection

4. **Test Communication:**

   Once you have completed the setup steps, you can test the communication between the two machines by running one command on each machine:

   ```bash
   ros2 run demo_nodes_cpp listener
   ```

   ```bash
   ros2 run demo_nodes_cpp talker
   ```

## System Deployment

To run the entire system, follow these steps:

1. **Run on Local Machine:**

   ```bash
   ros2 launch nebula_ros nebula_launch.py sensor_model:=VLP32
   ```

2. **Run in Docker Container:**

   ```bash
   ros2 launch r2ware_launch r2ware_launch.py
   ```

3. **Run on Ground Station:**

   ```bash
   [...]
   ```
