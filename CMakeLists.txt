#rmdir /S /Q .bld && cmake -S . -B .bld -A Win32 && cmake --build .bld --target install
cmake_minimum_required(VERSION 3.26)

get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" PROJECT_NAME ${PROJECT_NAME})
project(${PROJECT_NAME} DESCRIPTION "")

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(Dll)
add_subdirectory(Exe)

