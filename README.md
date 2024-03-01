# R2Ware

## Getting Started

Clone the R2Ware repository and navigate into the project directory:

```bash
git clone https://github.com/ahmaad-ansari/r2ware.git ~/
cd r2ware
```

## Setting Up Docker

Run the provided script to set up Docker for the R2Ware environment:

```bash
./run_docker.sh
```

## Initializing Workspace

Create the `src` directory and import the necessary repositories:

```bash
cd r2ware
mkdir src
vcs import src < r2ware.repos
```

## Installing Dependencies

Install ROS dependencies using `rosdep`:

```bash
rosdep install -y --from-paths src --ignore-src --rosdistro $ROS_DISTRO
```

## Building the Workspace

Build the R2Ware workspace using `colcon`:

```bash
colcon build
```

Now, your R2Ware workspace is set up and ready for use. Refer to specific documentation for further details on running and utilizing R2Ware functionalities.
