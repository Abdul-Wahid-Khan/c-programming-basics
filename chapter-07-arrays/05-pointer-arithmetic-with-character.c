// This program demonstrates pointer arithmetic with the char data type. It’s similar to your previous examples, but here the key difference is how much the pointer moves
#include<stdio.h>

int main() {
    char star = '8';
    char *ptr = &star;
    printf("ptr = %u\n", ptr);
    ptr++; // ptr = ptr + 1 
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    return 0;
}