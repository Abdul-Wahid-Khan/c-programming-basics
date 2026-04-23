// This is a example of copying strings using strcpy() in C. It shows how one string can be copied into another.
#include <stdio.h>
#include <string.h> // Required for using string functions like strcpy()

int main() {
    // String Declaration
    char oldStr[] = "oldStr";
    char newStr[] = "newStr";
    strcpy(newStr, oldStr); // oldStr is copied into newStr
    puts(newStr);
    return 0;

}

