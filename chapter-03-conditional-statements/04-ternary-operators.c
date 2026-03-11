/* Ternary Operator: The ternary operator is a short form of if-else used for decision making */
#include <stdio.h>

int main() {
	int age;
	printf("enter number : ");
	scanf("%d", &age);
	
	age >= 18 ? printf("Adult\n") : printf("Not Adult\n");
	
	return 0;
}

