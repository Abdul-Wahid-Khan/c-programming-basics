// This program uses recursion to print "Hello World" 10 times by decreasing the count until it reaches zero.
#include<stdio.h>

// Takes one integer parameter (count) and Returns nothing (void)
void printHW(int count);

int main() {
// Function Call in main()    
    printHW(10);
    return 0;    
}

// Function Definition or Recursion Function
void printHW(int count){
    if(count == 0){ // When count becomes 0 the Function stops and No more recursive calls it is base case
        return;
    }
    printf("Hello World\n");
    printHW(count-1); // Here function calls itself again and again.
}