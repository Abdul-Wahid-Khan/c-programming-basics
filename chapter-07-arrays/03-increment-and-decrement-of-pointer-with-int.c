// This program is a basic demonstration of pointers and pointer arithmetic in C
#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    printf("ptr = %u\n", ptr); // Prints the memory address stored in ptr
    ptr++; // Moves the pointer to the next integer location in memory and it does NOT increase by 1 byte it increases by size of int (usually 4 bytes) [ptr = ptr + sizeof(int)]
    printf("ptr = %u\n", ptr);
    ptr--; // Moves the pointer back to original position
    printf("ptr = %u\n", ptr);

    return 0;
}