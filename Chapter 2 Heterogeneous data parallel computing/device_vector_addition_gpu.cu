#include <iostream>
#include <iomanip>

__global__
void vecAddKernel(float* A, float* B, float* C, size_t N)
{
    size_t i = threadIdx.x + blockDim.x * blockIdx.x;
    if (i < N)
        C[i] = A[i] + B[i];
    
}

void vecAdd(float* A, float* B, float* C, int N) {
    size_t size = N * sizeof(float);
    float* A_d, * B_d, * C_d;

    // Part 1: Allocate device memory for A, B and C
    // Copy A and B to device memory
    cudaMalloc((void**)(&A_d), size);
    cudaMalloc((void**)(&B_d), size);
    cudaMalloc((void**)(&C_d), size);
    cudaMemcpy(A_d, A, size, cudaMemcpyHostToDevice);
    cudaMemcpy(B_d, B, size, cudaMemcpyHostToDevice);


    // Part 2: Call kernel - to launch a grid of threads
    // to perform the actual vector addition
    vecAddKernel<<<ceil(N/256.0), 256>>>(A_d, B_d, C_d, N);


    // Part 3: Copy C from the device memory 
    cudaMemcpy(C, C_d, size, cudaMemcpyDeviceToHost);
    // Free device vectors
    cudaFree(A_d);
    cudaFree(B_d);
    cudaFree(C_d);
}

int main(void)
{
    size_t N = 1000;
    std:: cout << "Number of elements in array: ";
    std::cout << N
              << std::setw(8)
              << std::endl;
    size_t size = N * sizeof(float);

    float* A_h {(float*)malloc(size)};
    float* B_h {(float*)malloc(size)};
    float* C_h {(float*)malloc(size)};

    vecAdd(A_h, B_h, C_h, N);

    for (size_t i {0}; i < 10; ++i)
        std::cout << A_h[i] << std::endl;


    return 0;
}