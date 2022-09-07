
# sms-course-project 7

![image](https://user-images.githubusercontent.com/8993081/166431770-4f91e04e-cfc0-44b6-9784-6636e8056a30.png)
### Creating the project 7

1. create a GitHub Repository
2. Add ROS gitignore file & Readme.md files. 

```bash
ros@ubuntu:~/catkin_ws$ git clone https://github.com/online-courses-materials/sms-project7.git
Cloning into 'sms-project7'...
remote: Enumerating objects: 4, done.
remote: Counting objects: 100% (4/4), done.
remote: Compressing objects: 100% (3/3), done.
remote: Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (4/4), 931 bytes | 931.00 KiB/s, done.
ros@ubuntu:~/catkin_ws$ ls
project1_ws  project2_ws  project3_ws  project4_ws  project5_ws  project6_ws  sms-project7
ros@ubuntu:~/catkin_ws$ cd sms-project7/
ros@ubuntu:~/catkin_ws/sms-project7$ ls
README.md
ros@ubuntu:~/catkin_ws/sms-project7$ mkdir src
ros@ubuntu:~/catkin_ws/sms-project7$ cd src
ros@ubuntu:~/catkin_ws/sms-project7/src$ catkin_create_pkg project7 roscpp
Created file project7/package.xml
Created file project7/CMakeLists.txt
Created folder project7/include/project7
Created folder project7/src
Successfully created files in /home/ros/catkin_ws/sms-project7/src/project7. Please adjust the values in package.xml.
ros@ubuntu:~/catkin_ws/sms-project7$/src$
---------------------------------------------------------------
UPDATE src FOLDER CPP CODES, package.xml AND C_MAKE FILE (add target information)
---------------------------------------------------------------
ros@ubuntu:~/catkin_ws/sms-project7/src$ cd ..
ros@ubuntu:~/catkin_ws/sms-project7$ catkin_make
Base path: /home/ros/catkin_ws/sms-project7
Source space: /home/ros/catkin_ws/sms-project7/src
Build space: /home/ros/catkin_ws/sms-project7/build
Devel space: /home/ros/catkin_ws/sms-project7/devel
Install space: /home/ros/catkin_ws/sms-project7/install
####
#### Running command: "make cmake_check_build_system" in "/home/ros/catkin_ws/sms-project7/build"
####
####
#### Running command: "make -j4 -l4" in "/home/ros/catkin_ws/sms-project7/build"
####
[  0%] Built target sensor_msgs_generate_messages_cpp
[  0%] Built target _project7_generate_messages_check_deps_Navigate2DAction
[  0%] Built target actionlib_msgs_generate_messages_cpp
[  0%] Built target _project7_generate_messages_check_deps_Navigate2DActionGoal
[  0%] Built target _project7_generate_messages_check_deps_Navigate2DFeedback
[  0%] Built target std_msgs_generate_messages_cpp
[  0%] Built target _project7_generate_messages_check_deps_Navigate2DResult
[  0%] Built target _project7_generate_messages_check_deps_Navigate2DActionResult
[  0%] Built target _project7_generate_messages_check_deps_Navigate2DGoal
[  0%] Built target sensor_msgs_generate_messages_eus
[  0%] Built target std_msgs_generate_messages_eus
[  0%] Built target actionlib_msgs_generate_messages_eus
[  0%] Built target _project7_generate_messages_check_deps_Navigate2DActionFeedback
[  0%] Built target std_msgs_generate_messages_lisp
[  0%] Built target sensor_msgs_generate_messages_lisp
[  0%] Built target sensor_msgs_generate_messages_nodejs
[  0%] Built target actionlib_msgs_generate_messages_lisp
[  0%] Built target actionlib_msgs_generate_messages_nodejs
[  0%] Built target std_msgs_generate_messages_nodejs
[  0%] Built target std_msgs_generate_messages_py
[  0%] Built target sensor_msgs_generate_messages_py
[  0%] Built target actionlib_msgs_generate_messages_py
[ 17%] Built target project7_generate_messages_cpp
[ 36%] Built target project7_generate_messages_eus
[ 53%] Built target project7_generate_messages_lisp
Scanning dependencies of target action_client
[ 70%] Built target project7_generate_messages_nodejs
Scanning dependencies of target action_server
[ 90%] Built target project7_generate_messages_py
[ 92%] Building CXX object project7/CMakeFiles/action_client.dir/src/action_client.cpp.o
[ 95%] Building CXX object project7/CMakeFiles/action_server.dir/src/action_server.cpp.o
[ 95%] Built target project7_generate_messages
[ 97%] Linking CXX executable /home/ros/catkin_ws/sms-project7/devel/lib/project7/action_server
[100%] Linking CXX executable /home/ros/catkin_ws/sms-project7/devel/lib/project7/action_client
[100%] Built target action_server
[100%] Built target action_client
ros@ubuntu:~/catkin_ws/sms-project7$ source devel/setup.bash
ros@ubuntu:~/catkin_ws/sms-project7$ rosmsg list
actionlib/TestAction
actionlib/TestActionFeedback
actionlib/TestActionGoal
actionlib/TestActionResult
actionlib/TestFeedback
actionlib/TestGoal
actionlib/TestRequestAction
actionlib/TestRequestActionFeedback
actionlib/TestRequestActionGoal
actionlib/TestRequestActionResult
actionlib/TestRequestFeedback
actionlib/TestRequestGoal
actionlib/TestRequestResult
actionlib/TestResult
actionlib/TwoIntsAction
actionlib/TwoIntsActionFeedback
actionlib/TwoIntsActionGoal
actionlib/TwoIntsActionResult
actionlib/TwoIntsFeedback
actionlib/TwoIntsGoal
actionlib/TwoIntsResult
actionlib_msgs/GoalID
actionlib_msgs/GoalStatus
actionlib_msgs/GoalStatusArray
actionlib_tutorials/AveragingAction
actionlib_tutorials/AveragingActionFeedback
actionlib_tutorials/AveragingActionGoal
actionlib_tutorials/AveragingActionResult
actionlib_tutorials/AveragingFeedback
actionlib_tutorials/AveragingGoal
actionlib_tutorials/AveragingResult
actionlib_tutorials/FibonacciAction
actionlib_tutorials/FibonacciActionFeedback
actionlib_tutorials/FibonacciActionGoal
actionlib_tutorials/FibonacciActionResult
actionlib_tutorials/FibonacciFeedback
actionlib_tutorials/FibonacciGoal
actionlib_tutorials/FibonacciResult
bond/Constants
bond/Status
control_msgs/FollowJointTrajectoryAction
control_msgs/FollowJointTrajectoryActionFeedback
control_msgs/FollowJointTrajectoryActionGoal
control_msgs/FollowJointTrajectoryActionResult
control_msgs/FollowJointTrajectoryFeedback
control_msgs/FollowJointTrajectoryGoal
control_msgs/FollowJointTrajectoryResult
control_msgs/GripperCommand
control_msgs/GripperCommandAction
control_msgs/GripperCommandActionFeedback
control_msgs/GripperCommandActionGoal
control_msgs/GripperCommandActionResult
control_msgs/GripperCommandFeedback
control_msgs/GripperCommandGoal
control_msgs/GripperCommandResult
control_msgs/JointControllerState
control_msgs/JointJog
control_msgs/JointTolerance
control_msgs/JointTrajectoryAction
control_msgs/JointTrajectoryActionFeedback
control_msgs/JointTrajectoryActionGoal
control_msgs/JointTrajectoryActionResult
control_msgs/JointTrajectoryControllerState
control_msgs/JointTrajectoryFeedback
control_msgs/JointTrajectoryGoal
control_msgs/JointTrajectoryResult
control_msgs/PidState
control_msgs/PointHeadAction
control_msgs/PointHeadActionFeedback
control_msgs/PointHeadActionGoal
control_msgs/PointHeadActionResult
control_msgs/PointHeadFeedback
control_msgs/PointHeadGoal
control_msgs/PointHeadResult
control_msgs/SingleJointPositionAction
control_msgs/SingleJointPositionActionFeedback
control_msgs/SingleJointPositionActionGoal
control_msgs/SingleJointPositionActionResult
control_msgs/SingleJointPositionFeedback
control_msgs/SingleJointPositionGoal
control_msgs/SingleJointPositionResult
controller_manager_msgs/ControllerState
controller_manager_msgs/ControllerStatistics
controller_manager_msgs/ControllersStatistics
controller_manager_msgs/HardwareInterfaceResources
diagnostic_msgs/DiagnosticArray
diagnostic_msgs/DiagnosticStatus
diagnostic_msgs/KeyValue
dynamic_reconfigure/BoolParameter
dynamic_reconfigure/Config
dynamic_reconfigure/ConfigDescription
dynamic_reconfigure/DoubleParameter
dynamic_reconfigure/Group
dynamic_reconfigure/GroupState
dynamic_reconfigure/IntParameter
dynamic_reconfigure/ParamDescription
dynamic_reconfigure/SensorLevels
dynamic_reconfigure/StrParameter
gazebo_msgs/ContactState
gazebo_msgs/ContactsState
gazebo_msgs/LinkState
gazebo_msgs/LinkStates
gazebo_msgs/ModelState
gazebo_msgs/ModelStates
gazebo_msgs/ODEJointProperties
gazebo_msgs/ODEPhysics
gazebo_msgs/PerformanceMetrics
gazebo_msgs/SensorPerformanceMetric
gazebo_msgs/WorldState
geometry_msgs/Accel
geometry_msgs/AccelStamped
geometry_msgs/AccelWithCovariance
geometry_msgs/AccelWithCovarianceStamped
geometry_msgs/Inertia
geometry_msgs/InertiaStamped
geometry_msgs/Point
geometry_msgs/Point32
geometry_msgs/PointStamped
geometry_msgs/Polygon
geometry_msgs/PolygonStamped
geometry_msgs/Pose
geometry_msgs/Pose2D
geometry_msgs/PoseArray
geometry_msgs/PoseStamped
geometry_msgs/PoseWithCovariance
geometry_msgs/PoseWithCovarianceStamped
geometry_msgs/Quaternion
geometry_msgs/QuaternionStamped
geometry_msgs/Transform
geometry_msgs/TransformStamped
geometry_msgs/Twist
geometry_msgs/TwistStamped
geometry_msgs/TwistWithCovariance
geometry_msgs/TwistWithCovarianceStamped
geometry_msgs/Vector3
geometry_msgs/Vector3Stamped
geometry_msgs/Wrench
geometry_msgs/WrenchStamped
map_msgs/OccupancyGridUpdate
map_msgs/PointCloud2Update
map_msgs/ProjectedMap
map_msgs/ProjectedMapInfo
nav_msgs/GetMapAction
nav_msgs/GetMapActionFeedback
nav_msgs/GetMapActionGoal
nav_msgs/GetMapActionResult
nav_msgs/GetMapFeedback
nav_msgs/GetMapGoal
nav_msgs/GetMapResult
nav_msgs/GridCells
nav_msgs/MapMetaData
nav_msgs/OccupancyGrid
nav_msgs/Odometry
nav_msgs/Path
pcl_msgs/ModelCoefficients
pcl_msgs/PointIndices
pcl_msgs/PolygonMesh
pcl_msgs/Vertices
project7/Navigate2DAction                  <---------------
project7/Navigate2DActionFeedback
project7/Navigate2DActionGoal
project7/Navigate2DActionResult
project7/Navigate2DFeedback
project7/Navigate2DGoal
project7/Navigate2DResult                   <---------------
roscpp/Logger
rosgraph_msgs/Clock
rosgraph_msgs/Log
rosgraph_msgs/TopicStatistics
rospy_tutorials/Floats
rospy_tutorials/HeaderString
sensor_msgs/BatteryState
sensor_msgs/CameraInfo
sensor_msgs/ChannelFloat32
sensor_msgs/CompressedImage
sensor_msgs/FluidPressure
sensor_msgs/Illuminance
sensor_msgs/Image
sensor_msgs/Imu
sensor_msgs/JointState
sensor_msgs/Joy
sensor_msgs/JoyFeedback
sensor_msgs/JoyFeedbackArray
sensor_msgs/LaserEcho
sensor_msgs/LaserScan
sensor_msgs/MagneticField
sensor_msgs/MultiDOFJointState
sensor_msgs/MultiEchoLaserScan
sensor_msgs/NavSatFix
sensor_msgs/NavSatStatus
sensor_msgs/PointCloud
sensor_msgs/PointCloud2
sensor_msgs/PointField
sensor_msgs/Range
sensor_msgs/RegionOfInterest
sensor_msgs/RelativeHumidity
sensor_msgs/Temperature
sensor_msgs/TimeReference
shape_msgs/Mesh
shape_msgs/MeshTriangle
shape_msgs/Plane
shape_msgs/SolidPrimitive
smach_msgs/SmachContainerInitialStatusCmd
smach_msgs/SmachContainerStatus
smach_msgs/SmachContainerStructure
std_msgs/Bool
std_msgs/Byte
std_msgs/ByteMultiArray
std_msgs/Char
std_msgs/ColorRGBA
std_msgs/Duration
std_msgs/Empty
std_msgs/Float32
std_msgs/Float32MultiArray
std_msgs/Float64
std_msgs/Float64MultiArray
std_msgs/Header
std_msgs/Int16
std_msgs/Int16MultiArray
std_msgs/Int32
std_msgs/Int32MultiArray
std_msgs/Int64
std_msgs/Int64MultiArray
std_msgs/Int8
std_msgs/Int8MultiArray
std_msgs/MultiArrayDimension
std_msgs/MultiArrayLayout
std_msgs/String
std_msgs/Time
std_msgs/UInt16
std_msgs/UInt16MultiArray
std_msgs/UInt32
std_msgs/UInt32MultiArray
std_msgs/UInt64
std_msgs/UInt64MultiArray
std_msgs/UInt8
std_msgs/UInt8MultiArray
stereo_msgs/DisparityImage
tf/tfMessage
tf2_msgs/LookupTransformAction
tf2_msgs/LookupTransformActionFeedback
tf2_msgs/LookupTransformActionGoal
tf2_msgs/LookupTransformActionResult
tf2_msgs/LookupTransformFeedback
tf2_msgs/LookupTransformGoal
tf2_msgs/LookupTransformResult
tf2_msgs/TF2Error
tf2_msgs/TFMessage
theora_image_transport/Packet
trajectory_msgs/JointTrajectory
trajectory_msgs/JointTrajectoryPoint
trajectory_msgs/MultiDOFJointTrajectory
trajectory_msgs/MultiDOFJointTrajectoryPoint
turtle_actionlib/ShapeAction
turtle_actionlib/ShapeActionFeedback
turtle_actionlib/ShapeActionGoal
turtle_actionlib/ShapeActionResult
turtle_actionlib/ShapeFeedback
turtle_actionlib/ShapeGoal
turtle_actionlib/ShapeResult
turtle_actionlib/Velocity
turtlesim/Color
turtlesim/Pose
visualization_msgs/ImageMarker
visualization_msgs/InteractiveMarker
visualization_msgs/InteractiveMarkerControl
visualization_msgs/InteractiveMarkerFeedback
visualization_msgs/InteractiveMarkerInit
visualization_msgs/InteractiveMarkerPose
visualization_msgs/InteractiveMarkerUpdate
visualization_msgs/Marker
visualization_msgs/MarkerArray
visualization_msgs/MenuEntry
ros@ubuntu:~/catkin_ws/sms-project7$ 
os@ubuntu:~/catkin_ws/sms-project7$ rosmsg show project7/Navigate2DGoal
geometry_msgs/Point point
  float64 x
  float64 y
  float64 z

ros@ubuntu:~/catkin_ws/sms-project7$ rosmsg show project7/Navigate2DAction
project7/Navigate2DActionGoal action_goal
  std_msgs/Header header
    uint32 seq
    time stamp
    string frame_id
  actionlib_msgs/GoalID goal_id
    time stamp
    string id
  project7/Navigate2DGoal goal
    geometry_msgs/Point point
      float64 x
      float64 y
      float64 z
project7/Navigate2DActionResult action_result
  std_msgs/Header header
    uint32 seq
    time stamp
    string frame_id
  actionlib_msgs/GoalStatus status
    uint8 PENDING=0
    uint8 ACTIVE=1
    uint8 PREEMPTED=2
    uint8 SUCCEEDED=3
    uint8 ABORTED=4
    uint8 REJECTED=5
    uint8 PREEMPTING=6
    uint8 RECALLING=7
    uint8 RECALLED=8
    uint8 LOST=9
    actionlib_msgs/GoalID goal_id
      time stamp
      string id
    uint8 status
    string text
  project7/Navigate2DResult result
    float32 elapsed_time
project7/Navigate2DActionFeedback action_feedback
  std_msgs/Header header
    uint32 seq
    time stamp
    string frame_id
  actionlib_msgs/GoalStatus status
    uint8 PENDING=0
    uint8 ACTIVE=1
    uint8 PREEMPTED=2
    uint8 SUCCEEDED=3
    uint8 ABORTED=4
    uint8 REJECTED=5
    uint8 PREEMPTING=6
    uint8 RECALLING=7
    uint8 RECALLED=8
    uint8 LOST=9
    actionlib_msgs/GoalID goal_id
      time stamp
      string id
    uint8 status
    string text
  project7/Navigate2DFeedback feedback
    float32 distance_to_point

ros@ubuntu:~/catkin_ws/sms-project7$ 

```

### Create new Tab for Running Action Server Code
```bash
os@ubuntu:~/catkin_ws/sms-project7$ rostopic list
/rosout
/rosout_agg

ros@ubuntu:~/catkin_ws/sms-project7$ source devel/setup.sh 
ros@ubuntu:~/catkin_ws/sms-project7$ rosrun project7 action_server 

[ INFO] [1651564982.795467899]: Goal Received
[ INFO] [1651564982.796024696]: Goal Reached
[ INFO] [1651566181.375072269]: Goal Received
[ INFO] [1651568006.875340672]: Goal Reached
[ INFO] [1651568047.796487156]: Goal Received
[ INFO] [1651568047.796629357]: Goal Reached


```
### Create new Tab for Running ROS Topic
```bash
ros@ubuntu:~/catkin_ws/sms-project7$ rostopic list
/navigate_2d/cancel              <-------
/navigate_2d/feedback
/navigate_2d/goal
/navigate_2d/result
/navigate_2d/status
/robot_position                   <-------
/rosout
/rosout_agg

```
### Create new Tab for Running Action Client Code
```bash
ros@ubuntu:~/catkin_ws/sms-project7$ source devel/setup.sh 
ros@ubuntu:~/catkin_ws/sms-project7$ rosrun project7 action_client 

Enter the X-Coordinate: 2

Enter the Y-Coordinate: 3

Goal Activated
Distance to Goal: 0.0509902

Finished.
Time Elapsed: 1825.5

Enter the X-Coordinate: 1.99

Enter the Y-Coordinate: 3.05

Goal Activated


Finished.
Time Elapsed: 0.000168324

Enter the X-Coordinate: 

```

### Create new Tab for Running ROS RQT (creating a publisher)
![image](https://user-images.githubusercontent.com/8993081/166431873-cb7ddf74-6225-4049-9911-45f3f833239d.png)


```bash
ros@ubuntu:~/catkin_ws/sms-project7$ rostopic echo /ro
/robot_position  /rosout          /rosout_agg      
ros@ubuntu:~/catkin_ws/sms-project7$ rostopic echo /robot_position 
x: 0.0
y: 0.0
z: 0.0
---
x: 0.0
y: 0.0
z: 0.0
---
x: 0.0
y: 0.0
z: 0.0
---
x: 0.0
y: 0.0
z: 0.0
---



```


