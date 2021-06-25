cmake_minimum_required(VERSION 3.10.2)
project(tm_models)

find_package(ament_cmake REQUIRED)

ament_package(
#  INCLUDE_DIRS include
#  LIBRARIES tm12_description
#  CATKIN_DEPENDS other_catkin_pkg
#  DEPENDS system_lib
)

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})
install(DIRECTORY urdf DESTINATION share/${PROJECT_NAME})
install(DIRECTORY meshes DESTINATION share/${PROJECT_NAME})

