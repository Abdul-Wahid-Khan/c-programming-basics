//Two functions one to print "Hello" and second to print "Goodbye".
#include <stdio.h>

// Function Declaration
void printHello();
void printGoodbye();

// Function Call
int main() {
    printHello();
    printGoodbye();

    return 0;
}

// Function Definition
void printHello(){
    printf("Hello\n");
}

void printGoodbye(){
    printf("Goodbye\n");
}

