cmake_minimum_required(VERSION 3.8)
set(CMAKE_CUDA_ARCHITECTURES 60 61 62 70 72 75 86)
project(test LANGUAGES CXX CUDA)
find_package(OpenCV REQUIRED)
# compile the target
add_executable(test_app main.cpp medianFilter.cu)
target_link_libraries(test_app PRIVATE cudart ${OpenCV_LIBS})