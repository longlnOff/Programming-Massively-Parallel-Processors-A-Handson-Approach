#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "BlurImage.h"

using namespace cv; 

inline void blur_unit (uchar *input, uchar *output, const int blur_size, const int width, const int height, int row, int col){
	int pix_val = 0;
	int pixels = 0;

	for(int blur_row = -blur_size; blur_row < blur_size+1; ++blur_row){
		for(int blur_col = -blur_size; blur_col < blur_size+1; ++blur_col){
			int cur_row = row + blur_row;
			int cur_col = col + blur_col;

			if(cur_row > -1 && cur_row < height && cur_col > -1 && cur_col < width){
				pix_val += input[cur_row * width + cur_col];
				pixels++;
			}
		}
	}
	output[row * width + col] = (uchar)(pix_val/pixels);
}

void ch3__blur_host(uchar *input, uchar *output, const int blur_size, const int width, const int height){
	for(int row = 0; row < height; row++){
		for(int col = 0; col < width; col++){
			blur_unit(input, output, blur_size, width, height, row, col);
		}
	}
}


int main()
{
    Mat image {imread("../Images/GrayShip.png", IMREAD_GRAYSCALE)};
        if (!image.data) 
        { 
            printf("No image data \n"); 
            return -1;
        }
 
    u_char* input {new u_char[image.rows * image.cols]};
    u_char* GPU_output {new u_char[image.rows * image.cols]};
    u_char* CPU_output {new u_char[image.rows * image.cols]};

    const int BLURSIXE {1};

    
    memcpy(input, image.data, image.rows * image.cols);


    Mat BlurImage_GPU {image.rows, image.cols, CV_8UC1, GPU_output};
    Mat BlurImage_CPU {image.rows, image.cols, CV_8UC1, CPU_output};

    BlurImage(input, GPU_output, image.cols, image.rows, BLURSIXE);

    ch3__blur_host(input, CPU_output, BLURSIXE, image.cols, image.rows);


    imwrite("../Images/blured_ship_GPU.png", BlurImage_GPU);

    imwrite("../Images/blured_ship_CPU.png", BlurImage_CPU);


    return 0;
}