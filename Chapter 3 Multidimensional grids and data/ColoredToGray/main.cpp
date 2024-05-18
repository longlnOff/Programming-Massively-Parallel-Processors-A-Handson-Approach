#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "ColoredImageToGrayscale.h"

using namespace cv; 


int main()
{
    Mat image {imread("../Images/ship.png", IMREAD_COLOR)};
        if (!image.data) 
        { 
            printf("No image data \n"); 
            return -1;
        }
 
    u_char* input {new u_char[image.rows * image.cols * 3]};
    u_char* GPU_output {new u_char[image.rows * image.cols]};
    u_char* CPU_output {new u_char[image.rows * image.cols]};

    
    memcpy(input, image.data, image.rows * image.cols * 3);

    Colored2Grayscale(input, GPU_output, image.rows, image.cols);
    ch3__color_to_grayscale_host(input, CPU_output, image.rows, image.cols);

    Mat grayImage_GPU {image.rows, image.cols, CV_8UC1, GPU_output};
    Mat grayImage_CPU {image.rows, image.cols, CV_8UC1, CPU_output};


    imwrite("../Images/gray_ship_GPU.png", grayImage_GPU);
    imwrite("../Images/gray_ship_CPU.png", grayImage_CPU);


    return 0;
}