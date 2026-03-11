#include <stdio.h>

int main() {
	char Day;
	printf("Enter Day : ");
	scanf("%c", &Day);
	
	switch(Day){
	    // if 'switch' with 'char' compares single characters, we must use single quotes.
	    case 's' : printf("Sunday\n");
	    break;
	    
	    case 'm' : printf("Monday\n");
	    break;
	    
	    case 't' : printf("Tuesday\n");
	    break;
	    
	    case 'w' : printf("Wednesday\n");
	    break;
	    
	    case 'T' : printf("Thursday\n");
	    break;
	    
	    case 'f' : printf("Friday\n");
	    break;
	    
	    case 'S' : printf("Saturday\n");
	    break;
	    
	    default : printf("Not a Valid Day");
	    
	}
	
	return 0;
}

