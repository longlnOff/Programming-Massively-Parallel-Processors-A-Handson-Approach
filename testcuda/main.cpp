#include "opencv2/opencv.hpp"
#include "medianFilter.h"

int main()
{
    // input data
    cv::Mat inputMat(cv::Size(128, 128), CV_8UC3, cv::Scalar(100));
    cv::Mat kernelMat(cv::Size(16, 16), CV_8UC1, cv::Scalar(1));

    // call CUDA
    cudaMedianCaller(inputMat, kernelMat);
    return 0;
}