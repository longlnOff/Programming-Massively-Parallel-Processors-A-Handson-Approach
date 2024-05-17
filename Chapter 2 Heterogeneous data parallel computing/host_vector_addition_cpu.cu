#include <iostream>


void vecAdd(float* A_h, float* B_h, float* C_h, int N) {
    for (int i = 0; i < N; i++) {
        C_h[i] = A_h[i] + B_h[i];
    }
}

int main(void)
{
    int N = 1 << 20;
    size_t size = N * sizeof(float);

    float* A_h = (float*)malloc(size);
    float* B_h = (float*)malloc(size);
    float* C_h = (float*)malloc(size);

    for (int i = 0; i < N; i++) {
        A_h[i] = 1.0f;
        B_h[i] = 2.0f;
    }


    for (int i = 0; i < N; i++) 
    {
        A_h[i] = 1.0f;
        B_h[i] = 2.0f;
    }

    vecAdd(A_h, B_h, C_h, N);



    for (int i {0}; i < 10; ++i)
    {
        std::cout << "A: " << A_h[i];
        std::cout << " B: " << B_h[i];
        std::cout << " C: " << C_h[i] << std::endl;
    }



    free(A_h);
    free(B_h);
    free(C_h);

    return 0;
}