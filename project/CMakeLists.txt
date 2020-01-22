 cmake_minimum_required(VERSION 3.11 FATAL_ERROR)
project(project VERSION 1.0.0
        DESCRIPTION "C++ Udacity Nanodegree Capstone Project"
        LANGUAGES CXX
)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++17 -pthread -Wfatal-errors")

find_package(OpenCV 4.1 REQUIRED)

include_directories(include ${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})

# Find all executables
file(GLOB project_SRCS src/*.cpp include/*.h)

add_executable(main ${project_SRCS})
target_link_libraries(main ${OpenCV_LIBRARIES})