#include <stdio.h>

int main() {
	char str[100];
	// At 'fgets()' you can also use 'gets()' but it is unsafe
	fgets(str, 100, stdin); // Takes input using 'fgets()' (can include spaces)
	puts(str); // Prints the string and Automatically adds a newline at the end
	
	return 0;

}

