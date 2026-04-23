// This program demonstrates string pointers (character pointers) and reassignment
#include <stdio.h>

int main() {
    // Pointer to String
	char *canChange = "Fight Club"; 
	/* canChange is a pointer to a string literal.
	   The string "Fight Club" is stored in read-only memory.
	   The pointer stores the address of the first character 'F'.  */
	puts(canChange);
	
	// Reassigning Pointer
	canChange = "Club";
	/* Now pointer points to a new string literal.
	   It does NOT modify the old string.
	   It just changes the address stored in canChange.  */
	puts(canChange);
	
	return 0;

}

