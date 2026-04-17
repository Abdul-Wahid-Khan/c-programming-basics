// This program to enter price of 3 items and print their final coat with 18%GST
#include <stdio.h>

int main() {
    float price[3]; // Creates an array of 3 floating-point numbers
    printf("enter 3 price : ");
    
    // Reads 3 prices from the user and %f is used for float values
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    
    printf("total price 1 : %f", price[0] + (0.18 * price[0]));
    printf("total price 2 : %f", price[1] + (0.18 * price[1]));
    printf("total price 3 : %f", price[2] + (0.18 * price[2]));
    
    return 0;

}

