// Call by Value vs Call by Pointer(Reference)
#include <stdio.h>

void square(int n); // takes a copy of value
void _square(int* n); // takes address (pointer) 

int main() {
    int number = 4;
    square(number); // The value of number (4) is copied into n and any change inside the function does not affect original number.
    printf("number = %d\n", number); // output = 4 
    
    _square(&number); // Address of number is passed and function can modify the original variable.
    printf("number = %d\n", number); // number = 16
    
    return 0;
}

// Call by value
void square(int n) {
    n = n * n; // n = 4 * 4 = 16(output) 
    printf("square = %d\n", n);
}

// Call by pointer(Reference)
void _square(int* n) { // Address of number is passed and function can modify the original variable.
    *n = (*n) * (*n); // number = 4 * 4 = 16(output)
    printf("square = %d\n", *n); // square = 16
}
