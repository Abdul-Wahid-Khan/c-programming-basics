/*
This program demonstrates how to create a function that returns
the sum of two numbers and how to call it from the main function.
*/
#include <stdio.h>

// Function Declaration
int sum(int a , int b);

int main() {
    int a, b;
    printf("enter first number : ");
    scanf("%d", &a);
    printf("enter second number : ");
    scanf("%d", &b);

// Function Call
    int s = sum(a , b);
    printf("sum is : %d\n", s);
    
    return 0;
}

