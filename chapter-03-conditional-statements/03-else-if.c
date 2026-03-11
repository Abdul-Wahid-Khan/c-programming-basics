//The else if statement is used to check multiple conditions sequentially.
#include <stdio.h>

int main() {
	int age;
	printf("enter number : ");
	scanf("%d", &age);
	
	if(age >= 18) {
	    printf("Adult\n");
	}
	else if(age > 13 && age < 18){
	    printf("Teenager\n");
	}
	else {
	    printf("Child\n");
	}
	
	return 0;
}

