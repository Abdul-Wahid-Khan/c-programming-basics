#include <stdio.h>
#include<math.h>
/* 
It is a example of 'Explicit Conversion' (a type of 'Type Conversion' in C which means changing one data type into another).
But in Explicit Conversion the data type Done manually by the programmer.
*/

int main() {
	float a = 5.7;
	int b;
	/*
	A variable (a) has value 5.7 (float)
	We convert it to int
	In this 'Explicit Conversion' the Decimal part is removed and
	Result becomes 5
	*/
	
	b = (int)a; 
	// float → int (manually)
	printf("%d", b);
	return 0;

}

