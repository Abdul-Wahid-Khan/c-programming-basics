// This program demonstrates string concatenation using strcat() in C—joining two strings into one.
#include <stdio.h>
#include <string.h> // Required for using string functions like strcat()

int main() {
    // String Declaration
    char firstStr[100] = "Hello ";
    char secondStr[] = "World";
    strcat(firstStr, secondStr); // Concatenation
    puts(firstStr);
    return 0;

}

