#include <stdio.h>
#include<math.h>
/* 
It is a example of 'Implicit Conversion' (a type of 'Type Conversion' in C which means changing one data type into another).
But in Implicit Conversion the data type Done by compiler automatically.
*/

int main() {
	int a = 6;
	float b;
	
	 b = a;
	 // int → float (automatic)
	printf("%f", b);
	return 0;

}

