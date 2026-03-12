// Increment and Decrement Operators in C
#include<stdio.h>
// These operators are used to increase or decrease a variable by 1.
int main() {
    // 1. Post-Increment (i++):- Use value first, then increase
    int i = 5;
    printf("%d\n", i++);  // Output: 5
    printf("%d\n", i);    // Output: 6
    
    // 2. Pre-Increment (++j):- increase first, then use value
    int j = 5;
    printf("%d\n", ++j);  // Output: 6
    
    // 3. Post-Decrement (k--):- Use value first, then decrease
    int k = 5;
    printf("%d\n", k--);  // Output: 5
    printf("%d\n", k);    // Output: 4
    
    // 4. Pre-Decrement (--h):- decrease first
    int h = 5;
    printf("%d\n", --h);  // Output: 4

    return 0; 
}