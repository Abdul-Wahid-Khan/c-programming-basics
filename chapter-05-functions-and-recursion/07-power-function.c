// Use library functions to calculate the square of a number given by user.
#include <stdio.h>
#include<math.h>

int main() {
    int n = 5;
    // 'pow' is a library function that calculates powers.
    printf("%f", pow(n, 2));
    /*
    %f is used to print floating-point numbers.
    Even though n is int, pow() returns a double.
    That is why %f is correct.
    */
    return 0;
}