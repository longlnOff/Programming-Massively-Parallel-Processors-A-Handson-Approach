#include <iostream>
#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "header_stb.h"
#include "stb_image_write.h"

// Convert colored image to grayscale kernel
__global__
void Colored2GrayscaleKernel(unsigned char* Pin, unsigned char* Pout, int width, int height)
{
    size_t row_index {blockDim.y * blockIdx.y + threadIdx.y};
    size_t column_index {blockDim.x * blockIdx.x + threadIdx.x};

    // check whether thread grid fit with images
    if (row_index < height && column_index < width)
    {
        // Get grayscale offset
        size_t GrayOffset {row_index * width + column_index};

        // Get colored offset
        size_t ColoredOffset {GrayOffset * 3};

        // Get RGB values
        unsigned char RedValue = Pin[ColoredOffset];
        unsigned char GreenValue = Pin[ColoredOffset + 1];
        unsigned char BlueValue = Pin[ColoredOffset + 2];

        // Get gray value from RGB
        Pout[GrayOffset] = 0.21f*RedValue + 0.71f*GreenValue + 0.07f*BlueValue;
    }

}

void Colored2Grayscale(unsigned char* Pin_h, unsigned char* Pout_h, int width, int height)
{
    size_t SizeAlloc {static_cast<size_t>(width * height * 3 * sizeof(unsigned char))};
    unsigned char* Pin_d {};
    unsigned char* Pout_d {};

    // Allocate device's memory for Pin and Pout
    cudaMalloc((void **) &Pin_d, SizeAlloc);
    cudaMalloc((void **) &Pout_d, SizeAlloc / 3);

    // Copy Pin to device memory
    cudaMemcpy(Pin_d, Pin_h, SizeAlloc, cudaMemcpyHostToDevice);

    // Call kernel function
    dim3 Blockdim {static_cast<unsigned int>(16), 
                    static_cast<unsigned int>(16), 
                    static_cast<unsigned int>(1)};
                    
    dim3 Griddim {static_cast<unsigned int>(ceil(width/16.0)), 
                   static_cast<unsigned int>(ceil(height/16.0)), 
                   static_cast<unsigned int>(1)};

    Colored2GrayscaleKernel<<<Griddim, Blockdim>>>(Pin_d, Pout_d, width, height);

    std::cout << "Here" << std::endl;

    // Copy Pout from device to host
    cudaMemcpy(Pout_h, Pout_d, SizeAlloc / 3, cudaMemcpyDeviceToHost);
    std::cout << Pout_h[0] << std::endl;

    // Free device's memory
    cudaFree(Pin_d);
    cudaFree(Pout_d);

}


int main()
{
    int width {}, height {}, componentCount {};
    unsigned char* ImageData {stbi_load("1.png", &width, &height, &componentCount, 3)};
    std::cout << sizeof(unsigned char) << std::endl;
    std::cout << "Channel in file: " << componentCount << std::endl;

    if (!ImageData)
    {
        std::cout << "Open PNG file." << std::endl;
    }


    // Validate image size
    std::cout << width << " X " << height << std::endl;

    unsigned char* GrayImage {};

    Colored2Grayscale(ImageData, GrayImage, width, height);
    // Write image back to disk
    stbi_write_png("image_gray.png", width, height, 3, GrayImage, 3 * width);


    return 0;
}