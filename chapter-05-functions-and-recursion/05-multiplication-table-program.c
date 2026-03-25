/* 
This program takes a number from the user and prints its multiplication tables
from 1 to 10 using a user defined function.
*/
#include <stdio.h>

// Function Declaration
void printTable(int n); // (printTable) is name of funtion

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

// Function Call    
    printTable(n);

    return 0;
}

// Function Definition
void printTable(int n){
    for(int i=1; i<=10; i++){
        printf("%d\n", i*n);
    }
}

