#include <stdio.h>

void printAddress(int n); // takes a copy
void _printAddress(int *m); // takes an address

int main() {
    // Call by Value
    int n = 4;
    printAddress(n);
    printf("address of n is : %p\n", &n); // Addresses will come different
    
    // Call by Pointer (Reference)
    int m = 7;
    _printAddress(&m);
    printf("address of m is : %p\n", &m); // Addresses will come same
    return 0;

}

// A copy of n is passed to the function and this copy has a different memory address
void printAddress(int n) {
    printf("address of n is : %p\n", &n);
}

// m (pointer) stores the same address as original variable and no copy is made
void _printAddress(int *m) {
    printf("address of m is : %p\n", m);
}

