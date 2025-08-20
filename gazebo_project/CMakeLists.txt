cmake_minimum_required(VERSION 2.8)
project(welcome_plugin)

# Find Gazebo (Classic)
find_package(gazebo REQUIRED)

# Use Gazebo’s include dirs/flags
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
add_definitions(${GAZEBO_CXX_FLAGS})

# Build a shared library named libwelcome_plugin.so from your source
add_library(welcome_plugin SHARED script/welcome_plugin.cc)
target_link_libraries(welcome_plugin ${GAZEBO_LIBRARIES})

