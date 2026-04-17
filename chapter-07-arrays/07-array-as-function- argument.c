// This showing how to pass an array to a function and print its elements.
#include <stdio.h>

// Function Declaration
void printNumbers(int arr[], int n); // A function named printNumbers exists and It takes: an array 'arr[]' and an integer 'n' (size of array)

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // Function Call
    printNumbers(arr, 5);
    return 0;
}

// Function Definition
void printNumbers(int arr[], int n) {
    for (int i=0; i<n; i++) {
        printf("%d\t", arr[i]);
    } 
}

