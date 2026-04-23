// This is a simple and correct program that uses the built-in function strlen() to find the length of a string
#include <stdio.h>
#include <string.h> // Required for using strlen()

int main() {
    char name[] = "Book";
    
    // Using strlen() :- Counts number of characters before \0 and Does NOT count the null character
    int length = strlen(name);
    printf("length is : %d", length);
    return 0;

}

