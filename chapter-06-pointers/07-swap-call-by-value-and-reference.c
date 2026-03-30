#include <stdio.h>

void swap(int a, int b); // Call by value
void _swap(int *a, int *b); // Call by pointer (reference)

int main() {
    int x = 3, y = 5;
    
    // Call by Value (Fails to Swap)
    swap(x, y);
    printf("x = %d & y = %d\n", x, y);
    
    // Call by Reference (Successful Swap)
    _swap(&x, &y);
    printf("x = %d & y = %d\n", x, y);
    
    return 0;
    
}

/*
    -> a and b are copies of x and y
    -> Swap happens only inside the function
*/
void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}