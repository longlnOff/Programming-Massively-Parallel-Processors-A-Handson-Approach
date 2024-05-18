#include <iostream>


int main(void)
{
    cudaDeviceProp devProp {};
    int devCount {};
    cudaGetDeviceCount(&devCount);

    for (int i {0}; i < devCount; ++i)
    {
        cudaGetDeviceProperties(&devProp, i);
        std::cout << "Device " << i << ": " << devProp.name << std::endl;
        std::cout << "  Compute capability: " << devProp.major << "." << devProp.minor << std::endl;
        std::cout << "  Total global memory: " << devProp.totalGlobalMem << std::endl;
        std::cout << "  Total constant memory: " << devProp.totalConstMem << std::endl;
        std::cout << "  Shared memory per block: " << devProp.sharedMemPerBlock << std::endl;
        std::cout << "  Registers per block: " << devProp.regsPerBlock << std::endl;
        std::cout << "  Warp size: " << devProp.warpSize << std::endl;
        std::cout << "  Max threads per block: " << devProp.maxThreadsPerBlock << std::endl;
        std::cout << "  Max threads dimensions: " << devProp.maxThreadsDim[0] << " x " << devProp.maxThreadsDim[1] << " x " << devProp.maxThreadsDim[2] << std::endl;
        std::cout << "  Max grid size: " << devProp.maxGridSize[0] << " x " << devProp.maxGridSize[1] << " x " << devProp.maxGridSize[2] << std::endl;
        std::cout << "  Clock rate: " << devProp.clockRate << std::endl;
        std::cout << "  Memory clock rate: " << devProp.memoryClockRate << std::endl;
        std::cout << "  Memory bus width: " << devProp.memoryBusWidth << std::endl;
        std::cout << "  Peak memory bandwidth: " << 2.0 * devProp.memoryClockRate * (devProp.memoryBusWidth / 8) / 1.0e6 << " GB/s" << std::endl;
        std::cout << "  L2 cache size: " << devProp.l2CacheSize << std::endl;
        std::cout << "  Multi-processor count: " << devProp.multiProcessorCount << std::endl;

        return 0;
    }
}