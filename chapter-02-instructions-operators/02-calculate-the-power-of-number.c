// Calculate the power of number
#include<stdio.h>
#include<math.h>
// '#include<math.h>' is used to access mathematical functions in C language

int main() {
    int b, c;
    b = c = 5;
    int power = pow(b, c);
    // "pow" is a funtion used to calculate the power of number (like:- b^c)

    printf("%d", power);
    return 0;
}