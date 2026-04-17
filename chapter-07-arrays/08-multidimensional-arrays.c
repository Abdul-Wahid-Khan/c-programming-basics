// 2D Arrays
#include <stdio.h>

int main() {
	int marks[2][3];
	marks[0][0] = 90;
	marks[0][1] = 86;
	marks[0][2] = 78;
	
	marks[0][0] = 97;
	marks[0][1] = 75;
	marks[0][2] = 85;
	
	printf("%d", marks[0][2]);
	
	return 0;

}

