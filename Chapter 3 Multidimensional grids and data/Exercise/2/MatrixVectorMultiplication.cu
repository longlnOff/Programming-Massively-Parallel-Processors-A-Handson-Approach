#include "MatrixVectorMultiplication.h"


// P = M (Matrix) dot N (Vector)
__global__
void MatrixVectorMultiplicationKernel(int *M, int *N, int *P, const uint MatrixSize)
{
    uint row_index {blockDim.y * blockIdx.y + threadIdx.y};
    if (row_index < MatrixSize)
    {
        int value {0};
        uint P_index {row_index};
        for (uint index {0}; index < MatrixSize; ++index)
        {
            uint M_index {row_index * MatrixSize + index};
            uint N_index {index};
            value += M[M_index] * N[N_index];
        }
        P[P_index] = value;
    }

}

void MatrixVectorMultiplication(int *M_h, int *N_h, int *P_h, const size_t MatrixSize)
{
    size_t SizeAllocMatrix {MatrixSize * MatrixSize * sizeof(int)};
    size_t SizeAllocVector {MatrixSize * sizeof(int)};

    int *M_d {nullptr};
    int *N_d {nullptr};
    int *P_d {nullptr};

    // Allocate device's memory for Pin and Pout
    assert(cudaMalloc((void **) &M_d, SizeAllocMatrix) == cudaSuccess);
    assert(cudaMalloc((void **) &N_d, SizeAllocVector) == cudaSuccess);
    assert(cudaMalloc((void **) &P_d, SizeAllocVector) == cudaSuccess);

    // Copy Pin to device memory
    assert(cudaMemcpy(M_d, M_h, SizeAllocMatrix, cudaMemcpyHostToDevice) == cudaSuccess);
    assert(cudaMemcpy(N_d, N_h, SizeAllocVector, cudaMemcpyHostToDevice) == cudaSuccess);

    // // Call kernel function
    dim3 Blockdim {static_cast<uint>(16), 
                    static_cast<uint>(16), 
                    static_cast<uint>(1)};
    dim3 Griddim {static_cast<uint>(ceil(MatrixSize/16.0)), 
                   static_cast<uint>(ceil(MatrixSize/16.0)), 
                   static_cast<uint>(1)};

    MatrixVectorMultiplicationKernel<<<Griddim, Blockdim>>>(M_d, N_d, P_d, MatrixSize);

    // Copy Pout from device to host
    assert(cudaMemcpy(P_h, P_d, SizeAllocVector, cudaMemcpyDeviceToHost) == cudaSuccess);
    // Free device's memory
    cudaFree(M_d);
    cudaFree(N_d);
    cudaFree(P_d);
}