#include <stdio.h>

// Function Declaration
void printString(char arr[]);

int main() {
    // String Initialization
    char firstName[] = "Fight";
    char lastName[] = "Club";
    
    // Function Call
    printString(firstName);
    printString(lastName);
    
    return 0;
}

// Function Definition
void printString(char arr[]) {
    for (int i=0; arr[i] != '\0'; i++) { // Loop runs until null character \0 is found
        printf("%c", arr[i]);
    }
    printf("\n"); // New Line
}
