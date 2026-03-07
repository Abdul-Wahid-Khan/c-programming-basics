#include <stdio.h>
// In this code we are doing sum of two value a, b
int main() { 
    int a, b;
    printf("enter a");
    scanf("%d", &a);
    /*
    "printf" is used to display output on the screen
    "scanf" is used to take input from user
    "%d" is a format specifier used to print or read an 'int' type value
    "&" is used to get the address of a variable in memory 
    */
    printf("enter b"); 
    scanf("%d", &b);
    
    int sum = a + b;
    printf("sum is : %d" , sum);
    return 0;

}

