#include<stdio.h>

int main() {
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0; // x = 0

    printf("x = %d\n", x); // output = 0
    printf("*ptr = %d\n", *ptr); // output = 0

    *ptr += 5;
    printf("x = %d\n", x); // output = 5
    printf("*ptr = %d\n", *ptr); // output = 5

    (*ptr)++;
    printf("x = %d\n", x); // output = 6
    printf("*ptr = %d\n", *ptr); // output = 6


    return 0;
}