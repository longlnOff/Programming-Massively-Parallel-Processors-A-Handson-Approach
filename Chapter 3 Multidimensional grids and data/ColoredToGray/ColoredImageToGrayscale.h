#include <iostream>
#include <assert.h>

void Colored2Grayscale(unsigned char* Pin_h, unsigned char* Pout_h, int width, int height);
inline void color_to_grayscale_unit (u_char *input, u_char *output, const int width, const int height, int row, int col);
void ch3__color_to_grayscale_device(u_char *h_input, u_char *h_output, const int width, const int height);
void ch3__color_to_grayscale_host(u_char *input, u_char *output, const int width, const int height);