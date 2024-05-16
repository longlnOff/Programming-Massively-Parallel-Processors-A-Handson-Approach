#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "ColoredImageToGrayscale.h"

using namespace cv; 



// void color_to_grayscale_unit (uchar *input, uchar *output, const int width, const int height, int row, int col){
// 	int gray_offset = row*width + col;
// 	int rgb_offset = gray_offset * 3;
// 	output[gray_offset] = 0.07*input[rgb_offset + 2] + 0.71*input[rgb_offset + 1] + 0.21*input[rgb_offset + 0];
// }


// void ch3__color_to_grayscale_host(uchar *input, uchar *output, const int width, const int height){
// 	for(int row = 0; row < height; row++){
// 	    for(int col = 0; col < width; col++){
// 	    	color_to_grayscale_unit(input, output, width, height, row, col);
// 	    }
// 	}
// }


int main()
{
    Mat image {imread("ship.png", IMREAD_COLOR)};
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

    ch3__color_to_grayscale_device(input, output, image.cols, image.rows);

    // Colored2Grayscale(input, output, image.rows, image.cols);

    Mat grayImage {image.rows, image.cols, CV_8UC1, output};
    std::cout << output[0] << std::endl;
    std::cout << input[0] << std::endl;

    imwrite("gray_ship.png", grayImage);


    return 0;
}