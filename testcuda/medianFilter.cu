#include "medianFilter.h"
__global__ void kernelMedianFilter(uchar3* d_inputMat, uchar* d_kernelMat)
{
    return;
}
void cudaMedianCaller(const cv::Mat& inputMat, cv::Mat& kernelMat)
{
    // allocate device pointers
    uchar3 *d_inputMat;
    uchar  *d_kernelMat;
    cudaMalloc(&d_inputMat,  inputMat.total() * sizeof(uchar3));
    cudaMalloc(&d_kernelMat, kernelMat.total() * sizeof(uchar));

    // copy from host to device
    cudaMemcpy(d_inputMat, inputMat.ptr<uchar3>(0), inputMat.total() * sizeof(uchar3), cudaMemcpyHostToDevice);
    cudaMemcpy(d_kernelMat, kernelMat.ptr<uchar>(0), kernelMat.total() * sizeof(uchar), cudaMemcpyHostToDevice);

    // call CUDA kernel
    kernelMedianFilter <<<1, 1>>> (d_inputMat, d_kernelMat);

    // free
    cudaFree(d_inputMat);
    cudaFree(d_kernelMat);
}