// Function to calculate area of a Square, a Circle & a Rectangle.
#include <stdio.h>
#include <math.h>

// Function Declarations
float areaSquare(float side);
float areaCircle(float radius);
float areaRectangle(float length, float width);

// Function Call
int main() {
    float side = 4;
    float radius = 3;
    float length = 5, width = 2;

    printf("Area of Square = %.2f\n", areaSquare(side));
    printf("Area of Circle = %.2f\n", areaCircle(radius));
    printf("Area of Rectangle = %.2f\n", areaRectangle(length, width));

    return 0;
}

// Function Definitions

float areaSquare(float side) {
    return side * side;
}

float areaCircle(float radius) {
    return 3.14 * radius * radius;
}

float areaRectangle(float length, float width) {
    return length * width;
}