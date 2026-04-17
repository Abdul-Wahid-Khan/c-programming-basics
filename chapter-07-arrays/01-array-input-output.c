#include <stdio.h>

int main() {
    int marks[3]; // Declaring an array -> An integer array named marks is created and it can store 3 values
    
    // Taking input
    printf("enter phy : ");
    scanf("%d", &marks[0]);
    
    printf("enter chem : ");
    scanf("%d", &marks[1]);
    
    printf("enter math : ");
    scanf("%d", &marks[2]);
    
    // Displaying output
    printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);
    
    return 0;

}

