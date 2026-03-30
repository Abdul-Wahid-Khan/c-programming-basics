// This program shows how to return multiple values from a function and use pointers as output parameters
#include <stdio.h>

// a, b → input values & sum, product, average → pointers to store results
void doWork(int a, int b, int *sum, int *product, int *average);

int main() {
    int a = 3, b =5;
    int sum, product, average;
    doWork(a, b, &sum, &product, &average); // Function Call
    
    printf("sum = %d, product = %d, average = %d", sum, product, average);
    return 0;
}

void doWork(int a, int b, int *sum, int *product, int *average) {
    *sum = a + b;
    *product = a * b;
    *average = (a + b)/2;
}



// In C Function can return only one value normally, but using pointers → we can return multiple values.