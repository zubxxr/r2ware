# R2Ware

## R2: Multi-Machine Communication

Run the following commands on the R2's local machine to enable communication with a ground station **on the same network**:

```bash
sudo ip link set lo multicast on
sudo ufw disable
```

You can check the status of the firewall with the following command:

```bash
sudo ufw status
```

## Getting Started

Clone the R2Ware repository and navigate into the project directory:

```bash
cd ~/
git clone https://github.com/ahmaad-ansari/r2ware.git
cd r2ware
```

## Initializing Workspace

Create the `src` directory and import the necessary repositories:

```bash
mkdir src
vcs import src < r2ware.repos
```

## Setting Up Docker

Run the provided script to set up Docker for the R2Ware environment. You can optionally specify the `vlp32` option to configure the Docker container for VLP32 usage:

```bash
./run_docker.sh vlp32
cd ~/r2ware
```

## Installing Dependencies

Install ROS dependencies using `rosdep`:

```bash
apt update
rosdep update
rosdep install -y --from-paths src --ignore-src --rosdistro $ROS_DISTRO
rosdep install -y -r --from-paths src --ignore-src --rosdistro $ROS_DISTRO

```

## Building the Workspace

Build the R2Ware workspace using `colcon`:

```bash
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
```

Or build specific packages
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

## R2: Multi-Machine Communication

Run the following commands while inside the R2's Docker container to enable communication with a ground station on the same network:

```bash
apt update
apt install -y ros-foxy-fastrtps
```

## Ground Station: Multi-Machine Communication

Run the following commands on the ground station running Autoware:

```bash
sudo ufw disable
sudo ip link set lo multicast on
sudo apt install -y ros-humble-fastrtps
```

Set the followiwng environment variables to enable ROS 2 communication:

```bash
export ROS_LOCALHOST_ONLY=0
export ROS_DOMAIN_ID=32
```

Once you have reached this step, you can test the communication between the two machines by running one command on each machine:
```bash
ros2 run demo_nodes_cpp listener
```
```bash
ros2 run demo_nodes_cpp talker
```
## Autoware Communication

Once you have ensured proper communication, you can run autoware on your ground station and r2ware on the local machine.

```bash
ros2 launch autoware_launch e2e_simulator.launch.xml vehicle_model:=r2_vehicle sensor_model:=r2_sensor_kit map_path:=$HOME/autoware_map/nishishinjuku_autoware_map/
```

```bash
ros2 launch r2ware_launch r2ware_launch.py 
```
