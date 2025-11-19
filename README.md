# R2Ware

## Getting Started 

1. **Clone Repository:**

   Clone the R2Ware repository and navigate into the project directory:

   ```bash
   cd ~/
   git clone https://github.com/zubxxr/R2Ware.git
   cd R2Ware
   ```

2. **Initialize Workspace:**

   Create the `src` directory and import the necessary repositories:

   ```bash
   mkdir src
   vcs import src < r2ware.repos
   ```

3. **Build the Workspace:**

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

Set up the Nebula Driver for VLP32C Velodyne LiDAR.

1. **Run Nebula Velodyne Driver.**

   ```bash
   source $HOME/autoware/install/setup.bash
   ros2 launch nebula_ros nebula_launch.py sensor_model:=VLP32
   ```

2. **Run Vehicle Sensor Data Launcher in Docker Container.**
   
   ```bash
   source $HOME/R2Ware/install/setup.bash
   ros2 launch r2ware_launch r2ware_launch.py
   ```

3. **Run Autoware.**

   ```bash
   source $HOME/autoware/install/setup.bash
   ros2 launch autoware_launch autoware.launch.xml \
    map_path:=/PATH/TO/YOUR/MAP \
    vehicle_model:=YOUR_VEHICLE \
    sensor_model:=YOUR_SENSOR_KIT
   ```
