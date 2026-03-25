// This program calculates the factorial of a number using recursion by multiplying n with factorial of (n-1) until n becomes 0.
#include<stdio.h>

int fact(int n);

int main() {
    printf("factorial is : %d", fact(5));
    return 0;
}

int fact(int n){
    if(n == 0) { // Base Case
        return 1;
    }
    int factNm1 = fact(n-1); // Recursive Call
    int factN = factNm1 * n;
    return factN;
}