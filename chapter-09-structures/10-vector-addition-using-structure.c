// This is a program of a structure to store vector and function to return sum of two vector.
#include <stdio.h>

struct vector {
    // Represents a 2D vector
    int x;
    int y;
};

void calcSum(struct vector v1, struct vector v2, struct vector sum);

int main() {
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};
    
    // Function Call
    calcSum(v1, v2, sum);
    return 0;
}

void calcSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    
    printf("sum of x is : %d\n", sum.x);
    printf("sum of y is : %d\n", sum.y);
}