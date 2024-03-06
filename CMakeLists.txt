cmake_minimum_required(VERSION 3.27)

project(opencv2)

set(CMAKE_CXX_STANDARD 17)
set(OpenCV_DIR "D:\\xrsspace\\app\\opencv\\opencv\\mingw-build")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv2 main.cpp)
link_directories(${OpenCV_LIBRARY_DIRS})
target_link_libraries(opencv2 ${OpenCV_LIBS})

