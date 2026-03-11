/* switch : The 'switch' statement is used for multi-way decision making based on the value of a single expression. */ 
#include <stdio.h>

int main() {
	int Day;
	printf("Enter Day(1-7) : ");
	scanf("%d", &Day);
	
	switch(Day){
	    case 1 : printf("Sunday\n");
	    break;
	    
	    case 2 : printf("Monday\n");
	    break;
	    
	    case 3 : printf("Tuesday\n");
	    break;
	    
	    case 4 : printf("Wednesday\n");
	    break;
	    
	    case 5 : printf("Thursday\n");
	    break;
	    
	    case 6 : printf("Friday\n");
	    break;
	    
	    case 7 : printf("Saturday\n");
	    break;
	    // In C, the 'break' statement is mainly used to exit from a loop or a switch block immediately.
	    default : printf("Not a Valid Day");
	    // The 'default'case is executed when none of the case values match the switch expression.
	}
	
	return 0;
}

