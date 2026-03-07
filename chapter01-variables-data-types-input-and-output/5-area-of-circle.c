#include <stdio.h>
// Area of Circle
int main() {
    int side;
    float radius;
    printf("enter radius");
    scanf("%f", &radius);
    // "%f" is used for float (decimal) numbers
    printf("area is : %f", 3.14 * radius * radius);

    return 0;
}

