cmake_minimum_required(VERSION 3.8)
set(CMAKE_CUDA_ARCHITECTURES 60 61 62 70 72 75 86)
project(test LANGUAGES CXX CUDA)
find_package(OpenCV REQUIRED)
# cmake_policy(CUDA_ARCHITECTURES CMP0122)
# compile the target
add_executable(run main.cpp BlurImage.cu)
target_link_libraries(run PRIVATE cudart ${OpenCV_LIBS})



# void BlurImageKernel(u_char* Pin, u_char* Pout, int width, int height, int BLURSIZE)
# {
#     int row_index {static_cast<int>(blockDim.y * blockIdx.y + threadIdx.y)};
#     int column_index {static_cast<int>(blockDim.x * blockIdx.x + threadIdx.x)};

#     // check whether thread grid fit with images
#     if (column_index < width && row_index < height)
#     {
#         u_char PixValRed   = 0;
#         u_char PixValGreen = 0;
#         u_char PixValBlue  = 0;

#         int NumberOfPixels = 0;

#         for (int i {-BLURSIZE}; i < BLURSIZE + 1; ++i)
#         {
#             for (int j {-BLURSIZE}; j < BLURSIZE + 1; ++j)
#             {
#                 int BlurRow {row_index + i};
#                 int BlurCol {column_index + j};

#                 if (BlurRow >= 0 && BlurRow < height && BlurCol >= 0 && BlurCol < width)
#                 {   
#                     int GrayOffset {BlurRow*width + BlurCol};
#                     u_char RedValue      = Pin[GrayOffset + 0];
#                     u_char GreenValue    = Pin[GrayOffset + 1];
#                     u_char BlueValue     = Pin[GrayOffset + 2];

#                     PixValRed += RedValue;
#                     PixValGreen += GreenValue;
#                     PixValBlue += BlueValue;
#                     ++NumberOfPixels;
#                 }
#             }
#         }
#         PixValRed /= NumberOfPixels;
#         PixValBlue /= NumberOfPixels;
#         PixValGreen /= NumberOfPixels;
#     }

# }