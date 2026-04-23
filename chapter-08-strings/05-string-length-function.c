// This program finding the length of a string using a function
#include <stdio.h>

int countLength(char arr[]);

int main() {
	char name[100];
	fgets(name, 100, stdin);
	printf("Length is : %d", countLength(name));
	
	return 0;
}

int countLength(char arr[]) {
    int count = 0;
    for (int i=0; arr[i] != '\0'; i++) { // Counts characters until null character \0
        count++; // it also include \0 
    }
    
    return count-1; // You are subtracting 1 to ignore \0
}

