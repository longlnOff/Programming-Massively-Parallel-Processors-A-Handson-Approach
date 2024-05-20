#include "MatrixMultiplication.h"

__global__
void MatrixMultiplicationColumnKernel(int *M, int *N, int *P, const uint MatrixSize)
{
    uint column_index {blockDim.x * blockIdx.x + threadIdx.x};
    if (column_index < MatrixSize)
    {
        for (uint row_index {0}; row_index < MatrixSize; ++row_index)
        {
            int value {0};
            uint P_index {row_index * MatrixSize + column_index};
            // P[s,s] = M[s,s]*N[s,s]
            for (uint index {0}; index < MatrixSize; ++index)
            {
                uint M_index {row_index * MatrixSize + index};
                uint N_index {index * MatrixSize + column_index};
                value += M[M_index] * N[N_index];
            }
            P[P_index] = value;
        }
    }

}

void MatrixMultiplicationColumn(int *M_h, int *N_h, int *P_h, const size_t MatrixSize)
{
    size_t SizeAlloc {MatrixSize * MatrixSize * sizeof(int)};
    int *M_d {nullptr};
    int *N_d {nullptr};
    int *P_d {nullptr};

    // Allocate device's memory for Pin and Pout
    assert(cudaMalloc((void **) &M_d, SizeAlloc) == cudaSuccess);
    assert(cudaMalloc((void **) &N_d, SizeAlloc) == cudaSuccess);
    assert(cudaMalloc((void **) &P_d, SizeAlloc) == cudaSuccess);

    // Copy Pin to device memory
    assert(cudaMemcpy(M_d, M_h, SizeAlloc, cudaMemcpyHostToDevice) == cudaSuccess);
    assert(cudaMemcpy(N_d, N_h, SizeAlloc, cudaMemcpyHostToDevice) == cudaSuccess);

    // // Call kernel function
    dim3 Blockdim {static_cast<uint>(16), 
                    static_cast<uint>(16), 
                    static_cast<uint>(1)};
    dim3 Griddim {static_cast<uint>(ceil(MatrixSize/16.0)), 
                   static_cast<uint>(ceil(MatrixSize/16.0)), 
                   static_cast<uint>(1)};

    MatrixMultiplicationColumnKernel<<<Griddim, Blockdim>>>(M_d, N_d, P_d, MatrixSize);

    // Copy Pout from device to host
    assert(cudaMemcpy(P_h, P_d, SizeAlloc, cudaMemcpyDeviceToHost) == cudaSuccess);
    // Free device's memory
    cudaFree(M_d);
    cudaFree(N_d);
    cudaFree(P_d);
}