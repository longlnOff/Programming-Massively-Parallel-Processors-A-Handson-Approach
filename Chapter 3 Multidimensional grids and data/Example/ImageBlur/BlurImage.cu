#include "BlurImage.h"


// Convert colored image to grayscale kernel
__global__
void BlurImageKernel(u_char* Pin, u_char* Pout, const int width, const int height, const int BLURSIZE)
{
    int row_index {static_cast<int>(blockDim.y * blockIdx.y + threadIdx.y)};
    int column_index {static_cast<int>(blockDim.x * blockIdx.x + threadIdx.x)};

    // check whether thread grid fit with images
    if (column_index < width && row_index < height)
    {
        int PixVal = 0;
        int NumberOfPixels = 0;

        for (int blur_row {-BLURSIZE}; blur_row < BLURSIZE + 1; ++blur_row)
        {
            for (int blur_col {-BLURSIZE}; blur_col < BLURSIZE + 1; ++blur_col)
            {
                int BlurRow {row_index + blur_row};
                int BlurCol {column_index + blur_col};

                if (BlurRow >= 0 && BlurRow < height && BlurCol >= 0 && BlurCol < width)
                {
                    PixVal += Pin[BlurRow*width + BlurCol];
                    NumberOfPixels++;
                }
            }
        }
        
        Pout[row_index*width + column_index] = static_cast<u_char>(PixVal / NumberOfPixels);
    }

}

void BlurImage(u_char* Pin_h, u_char* Pout_h, const int width, const int height, const int BLURSIZE)
{

    const int SizeAlloc {(width * height * static_cast<int>(sizeof(u_char)))};
    
    u_char* Pin_d {nullptr};
    u_char* Pout_d {nullptr};

    // Allocate device's memory for Pin and Pout
    assert(cudaMalloc((void **) &Pin_d, SizeAlloc) == cudaSuccess);
    assert(cudaMalloc((void **) &Pout_d, SizeAlloc) == cudaSuccess);

    // Copy Pin to device memory
    assert(cudaMemcpy(Pin_d, Pin_h, SizeAlloc, cudaMemcpyHostToDevice) == cudaSuccess);

    // Call kernel function
    dim3 Blockdim {static_cast<unsigned int>(16), 
                    static_cast<unsigned int>(16), 
                    static_cast<unsigned int>(1)};
    dim3 Griddim {static_cast<unsigned int>(ceil(width/16.0)), 
                   static_cast<unsigned int>(ceil(height/16.0)), 
                   static_cast<unsigned int>(1)};
    BlurImageKernel<<<Griddim, Blockdim>>>(Pin_d, Pout_d, width, height, BLURSIZE);

    // Copy Pout from device to host
    assert(cudaMemcpy(Pout_h, Pout_d, SizeAlloc, cudaMemcpyDeviceToHost) == cudaSuccess);
    // Free device's memory
    cudaFree(Pin_d);
    cudaFree(Pout_d);
}




void ch3__blur_device(u_char *h_input, u_char *h_output, const int blur_size, const int width, const int height)
{
	u_char *d_input, *d_output;
	const int length = width*height;

	cudaMalloc(&d_input, length*sizeof(u_char));
	cudaMalloc(&d_output, length*sizeof(u_char));

	cudaMemcpy(d_input, h_input, length*sizeof(u_char), cudaMemcpyHostToDevice);



    dim3 block_dim {static_cast<unsigned int>(16), 
                    static_cast<unsigned int>(16), 
                    static_cast<unsigned int>(1)};
                    
    dim3 grid_dim {static_cast<unsigned int>(ceil(width/16.0)), 
                   static_cast<unsigned int>(ceil(height/16.0)), 
                   static_cast<unsigned int>(1)};


    BlurImageKernel<<<grid_dim, block_dim>>>(d_input, d_output, width, height, blur_size);

	cudaMemcpy(h_output, d_output, length*sizeof(u_char), cudaMemcpyDeviceToHost);

	cudaFree(d_input);
	cudaFree(d_output);
}