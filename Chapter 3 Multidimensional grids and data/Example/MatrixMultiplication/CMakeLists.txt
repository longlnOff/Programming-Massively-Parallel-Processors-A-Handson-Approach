cmake_minimum_required(VERSION 3.8)
set(CMAKE_CUDA_ARCHITECTURES 60 61 62 70 72 75 86)
project(test LANGUAGES CXX CUDA)
find_package(OpenCV REQUIRED)
# cmake_policy(CUDA_ARCHITECTURES CMP0122)
# compile the target
add_executable(run main.cpp MatrixMultiplication.cu)
target_link_libraries(run PRIVATE cudart ${OpenCV_LIBS})
