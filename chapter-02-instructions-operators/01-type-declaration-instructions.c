#include <stdio.h>

int main() {
	/*
	declare variable before using it.
	it is a type of 'type declaration instruction'
	*/
	int oldnumber = 237;
	int number = 300;
	// there we declare variable before using it 
	int newnumber = oldnumber + number;
	printf("new number is : %d", newnumber);
	
	 /* 
    this is invalid example of 'type declaration instruction' now we are using
    */
    int oldage = 26;
    int newage = oldage + years;
    int years = 5;
    // In this example we use years before declare that's why it is invalid
    printf("newage is : %d", newage);
	return 0;
}

/* 
In this two example of "Type Declaration Instruction" we understand that we need to declare
variable before using it.
*/