// A function based program that counts how many odd numbers are present in an array.
#include <stdio.h>

// Function Declaration
int countOdd(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Array of 6 elements
    printf("%d", countOdd(arr, 6)); // Calls function and prints returned value
    
    return 0;
}

int countOdd(int arr[], int n) {
    int count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] %2 !=0) { // Check for Odd Number
            count++; // Increases count when odd number is found
        }
    }
    
    return count;
}
