// This program using arrays and pointers for input and output.
#include <stdio.h>

int main() {
    int aadhar[5]; // Creates an array of 5 integers and Index range: 0 to 4
    
    // Input
    int *ptr = &aadhar[0];
    for (int i=0; i<5; i++) {
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]); // At '&aadhar[i]' you also can take '(ptr+i)'
    }
    
    // Output
    for (int i=0; i<5; i++) {
        printf("%d index = %d\n", i, aadhar[i]); // At 'aadhar[i]' you also can take '*(ptr+i)'
    }
    
    return 0;

}

