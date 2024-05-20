#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "MatrixVectorMultiplication.h"


int main()
{
    int *M = {new int[9] {1, 2, 3, 4, 5, 6, 7, 8, 9}};
    int *N = {new int[3] {1,3,5}};

    //  Create pointer to pointer to int
    int *P = new int[3] {};

    //  Call the matrix multiplication function
    MatrixVectorMultiplication(M, N, P, 3);

    // print M
    std::cout << "M = \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << M[i * 3 + j] << " ";
        std::cout << std::endl;
    }

    // print N
    std::cout << "N = \n";
    for (int i = 0; i < 3; i++)
    {
            std::cout << N[i] << " ";
        std::cout << std::endl;
    }

    // print P
    std::cout << "P = \n";
    for (int i = 0; i < 3; i++)
    {
            std::cout << P[i] << " ";
        std::cout << std::endl;
    }



    return 0;
}