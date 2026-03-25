/*
This program demonstrates call by value in c
where changes made inside a function do not affect the original variable in main().
*/
#include <stdio.h>

void calculatePrice(float value);

int main() {
    float value = 100.0;
    calculatePrice(value);
    printf(" value is : %f\n", value);

    return 0;
}

void calculatePrice(float value) {
    value = value + (0.18 * value); // This adds 18% GST.
    printf("final price is : %f\n", value);
}

