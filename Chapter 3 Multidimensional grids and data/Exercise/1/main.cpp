#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include "MatrixMultiplication.h"


int main()
{
    int *M = {new int[9] {1, 2, 3, 4, 5, 6, 7, 8, 9}};
    int *N = {new int[9] {1, 3, 5, 6, 7, 8, 5, 4, 2}};

    //  Create pointer to pointer to int
    int *P = new int[9] {};

    //  Call the matrix multiplication function
    MatrixMultiplicationRow(M, N, P, 3);
    std::cout << "------------------------------------\n"
                << "Matrix Multiplication using Row\n"
                << "------------------------------------\n";
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
        for (int j = 0; j < 3; j++)
            std::cout << N[i * 3 + j] << " ";
        std::cout << std::endl;
    }

    // print P
    std::cout << "P = \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << P[i * 3 + j] << " ";
        std::cout << std::endl;
    }

    //  Create pointer to pointer to int
    int *Q = new int[9] {};

    //  Call the matrix multiplication function
    MatrixMultiplicationColumn(M, N, Q, 3);
    std::cout << "------------------------------------\n"
                << "Matrix Multiplication using Column\n"
                << "------------------------------------\n";

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
        for (int j = 0; j < 3; j++)
            std::cout << N[i * 3 + j] << " ";
        std::cout << std::endl;
    }

    // print P
    std::cout << "Q = \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            std::cout << Q[i * 3 + j] << " ";
        std::cout << std::endl;
    }

    free(M);
    free(N);


    return 0;
}