#include <stdio.h>

int main() {
	char str[100];
	char ch;
	int i = 0;
	
	while (ch != '\n') {
	    scanf("%c", &ch); // Reads one character at a time
	    str[i] = ch;
	    i++; 
	}
	
	str[i] = '\0'; // Marks end of string
	puts(str); // Prints the complete string

}

