cmake_minimum_required(VERSION 2.8.3)
project(quad)

## Find catkin and any catkin packages
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs genmsg sensor_msgs cv_bridge image_transport)

## Declare ROS messages and services
#add_message_files(FILES Num.msg)
#add_service_files(FILES AddTwoInts.srv)

## Generate added messages and services
generate_messages(DEPENDENCIES std_msgs)

## Declare a catkin package
catkin_package()

## Build talker and listener
include_directories(include ${catkin_INCLUDE_DIRS})



add_executable(image src/image.cpp)
target_link_libraries(image ${catkin_LIBRARIES})
add_dependencies(image quad_generate_messages_cpp)

add_executable(lines src/lines.cpp)
target_link_libraries(lines ${catkin_LIBRARIES})
add_dependencies(lines quad_generate_messages_cpp)

add_executable(turn src/turn.cpp)
target_link_libraries(turn ${catkin_LIBRARIES})
add_dependencies(turn quad_generate_messages_cpp)
