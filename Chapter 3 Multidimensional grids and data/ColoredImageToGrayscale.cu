#include "ColoredImageToGrayscale.h"



// Convert colored image to grayscale kernel
// __global__
// void Colored2GrayscaleKernel(unsigned char* Pin, unsigned char* Pout, int width, int height)
// {
//     size_t row_index {blockDim.y * blockIdx.y + threadIdx.y};
//     size_t column_index {blockDim.x * blockIdx.x + threadIdx.x};

//     // check whether thread grid fit with images
//     if (column_index < width && row_index < height)
//     {
//         // Get grayscale offset
//         size_t GrayOffset {row_index * width + column_index};

//         // Get colored offset
//         size_t ColoredOffset {GrayOffset * 3};

//         // Get RGB values
//         unsigned char RedValue      = Pin[ColoredOffset + 0];
//         unsigned char GreenValue    = Pin[ColoredOffset + 1];
//         unsigned char BlueValue     = Pin[ColoredOffset + 2];

//         // Get gray value from RGB
//         Pout[GrayOffset] = 0.21f*RedValue + 0.71f*GreenValue + 0.07f*BlueValue;
//     }

// }

// void Colored2Grayscale(unsigned char* Pin_h, unsigned char* Pout_h, int width, int height)
// {

//     size_t SizeAllocColored {static_cast<size_t>(3 * width * height * sizeof(unsigned char))};
//     size_t SizeAllocGray {static_cast<size_t>(width * height * sizeof(unsigned char))};
    
//     unsigned char* Pin_d {};
//     unsigned char* Pout_d {};

//     // Allocate device's memory for Pin and Pout
//     assert(cudaMalloc((void **) &Pin_d, SizeAllocColored) == cudaSuccess);
//     assert(cudaMalloc((void **) &Pout_d, SizeAllocGray) == cudaSuccess);

//     // Copy Pin to device memory
//     assert(cudaMemcpy(Pin_d, Pin_h, SizeAllocColored, cudaMemcpyHostToDevice) == cudaSuccess);

//     // Call kernel function
//     dim3 Blockdim {static_cast<unsigned int>(16), 
//                     static_cast<unsigned int>(16), 
//                     static_cast<unsigned int>(1)};
                    
//     dim3 Griddim {static_cast<unsigned int>(ceil(width/16.0)), 
//                    static_cast<unsigned int>(ceil(height/16.0)), 
//                    static_cast<unsigned int>(1)};

//     Colored2GrayscaleKernel<<<Griddim, Blockdim>>>(Pin_d, Pout_d, width, height);

//     // Copy Pout from device to host
//     assert(cudaMemcpy(Pout_h, Pout_d, SizeAllocGray, cudaMemcpyDeviceToHost) == cudaSuccess);
//     std::cout << "Colored image to grayscale image is done!" << std::endl;
//     // Free device's memory
//     cudaFree(Pin_d);
//     cudaFree(Pout_d);

// }


__host__
__device__
__attribute__((always_inline))
inline void color_to_grayscale_unit (u_char *input, u_char *output, const int width, const int height, int row, int col){
	int gray_offset = row*width + col;
	int rgb_offset = gray_offset * 3;
	output[gray_offset] = 0.07*input[rgb_offset + 2] + 0.71*input[rgb_offset + 1] + 0.21*input[rgb_offset + 0];
}

__global__
void color_to_grayscale_kernel(u_char *input, u_char *output, const int width, const int height){
	int row = blockIdx.y*blockDim.y + threadIdx.y;
	int col = blockIdx.x*blockDim.x + threadIdx.x;

	if(col < width && row < height){
		color_to_grayscale_unit(input, output, width, height, row, col);
	}
}


void ch3__color_to_grayscale_device(u_char *h_input, u_char *h_output, const int width, const int height){
	u_char *d_input, *d_output;
	const int length = width*height;

	cudaMalloc(&d_input, 3*length*sizeof(u_char));
	cudaMalloc(&d_output, length*sizeof(u_char));

	cudaMemcpy(d_input, h_input, 3*length*sizeof(u_char), cudaMemcpyHostToDevice);

	dim3 block_dim(16, 16, 1);
	dim3 grid_dim(ceil(width/(double)16), ceil(height/(double)16), 1);

	color_to_grayscale_kernel<<<grid_dim, block_dim>>>(d_input, d_output, width, height);

	cudaMemcpy(h_output, d_output, length*sizeof(u_char), cudaMemcpyDeviceToHost);
    std::cout << "host output: " << int(h_output[0]) << std::endl;
    std::cout << "host input: " << int(h_input[0]) << std::endl;

	cudaFree(d_input);
	cudaFree(d_output);
}