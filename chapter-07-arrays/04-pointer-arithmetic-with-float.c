// This program is very similar to your previous one, but now it uses a float pointer instead of an integer pointer. It demonstrates pointer arithmetic with float data type.
#include<stdio.h>

int main() {
    float price = 100.00;
    float *ptr = &price;
    printf("ptr = %u\n", ptr);
    ptr++; // sizeof(float) = 4 bytes
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}