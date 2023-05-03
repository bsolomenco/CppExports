cmake_minimum_required(VERSION 3.26)

get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" PROJECT_NAME ${PROJECT_NAME})
project(${PROJECT_NAME} DESCRIPTION "")

file(GLOB_RECURSE Src CONFIGURE_DEPENDS *.cpp)

add_executable(${PROJECT_NAME} ${Src})
target_link_libraries(${PROJECT_NAME} Dll)

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}
)