// Conditional Statements : It allow a program to make decisions based on conditions.
#include<stdio.h>

int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    /* 
    'if-else' is a conditional control statement that executes one block of code 
    when the condition is true and another block when the condition is false.
    (In C, a block is a group of one or more statements enclosed within curly braces { }.)
    */
    
    if(age > 18) {
        printf("Adult\n");
    }
    else{
        printf("Not Adult\n");
    }
    
    return 0;
}
