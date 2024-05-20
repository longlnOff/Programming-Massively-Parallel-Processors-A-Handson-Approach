#include <iostream>
#include <assert.h>

void BlurImage(u_char* Pin_h, u_char* Pout_h, const int width, const int height, const int BLURSIZE);
void ch3__blur_device(u_char *h_input, u_char *h_output, const int blur_size, const int width, const int height);