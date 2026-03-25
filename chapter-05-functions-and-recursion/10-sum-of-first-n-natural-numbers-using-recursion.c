// This program uses recursion to calculate the sum of first N natural numbers by reducing the problem to sum(n-1) until it reaches 1.
#include<stdio.h>

int sum(int n);

int main() {
    printf("sum is : %d", sum(10));
    return 0;
}

int sum(int n){
    if(n == 1) { // Base Case
        return 1;
    }
    int sumNm1 = sum(n-1); // Recursive Call
    int sumN = sumNm1 + n;
    return sumN;
}
