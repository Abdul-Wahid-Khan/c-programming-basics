// Loop Control Instructions (for loop)
#include<stdio.h>
// Loop is use to repeat some parts of the program
int main() {
    /* 
    'i' is a iteration or counter 
    Initialization: int i=1 → loop start
    Condition: i<=100 → run 5 times
    Update: i++ or i=i+1 → increments each iteration
    printf("Hello\n"); → prints Hello
    */

    for(int i=1; i<=5; i++) {
        printf("Hello\n", i);
    }

    /*
    Initialization: int i=0 → start from 0
    Condition: i<=100 → run until 100
    Update: i++ or i=i+1 → increase by 1 each time
    */
    for(int i=0; i<=100; i=i+1) {
        printf("%d\n", i);
    }

    return 0; 
}