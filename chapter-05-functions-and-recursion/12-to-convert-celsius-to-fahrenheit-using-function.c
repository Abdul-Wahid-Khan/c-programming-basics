// This program converts temperature from Celsius to Fahrenheit using a user-defined function and the formula F = C × 9/5 + 32.
#include<stdio.h>

float convertTemp(float celsius);

int main() {
    float far = convertTemp(0);
    printf("far : %f", far);
    return 0;
}

float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0) + 32;
    return far;
}