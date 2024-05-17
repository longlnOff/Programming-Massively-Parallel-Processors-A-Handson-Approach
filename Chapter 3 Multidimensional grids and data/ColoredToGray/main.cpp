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
 
    u_char* input {};
    u_char* output {}; 

    input = (u_char*)malloc(image.rows * image.cols * 3);
    output = (u_char*)malloc(image.rows * image.cols);
    memcpy(input, image.data, image.rows * image.cols * 3);

    Colored2Grayscale(input, output, image.rows, image.cols);
    ch3__color_to_grayscale_host(input, output, image.rows, image.cols);

    Mat grayImage_device {image.rows, image.cols, CV_8UC1, output};
    Mat grayImage_host {image.rows, image.cols, CV_8UC1, output};


    imwrite("../Images/gray_ship_device.png", grayImage_device);
    imwrite("../Images/gray_ship_host.png", grayImage_host);



    return 0;
}