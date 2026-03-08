#include <stdio.h>
#include<math.h>
// Operator Precedence (we can called it 'BODMAS Rule' of C languge).

int main() {
    /*
	Operator Precedence in C languge like the maths 'BODMAS Rule'.
	But the order (precedence order) we use there is :
	1. () → Brackets (highest)
	2. [ *, /, % ] → Multiply, Divide, Modulus
	3. [ +, - ] → Add, Subtract
	4. = → Assignment
	*/
	
	// Example a:
	int a = 4 + 8 * 10;
	printf("%d\n", a);
	
	// Example b:
	int b = 5 * 2 - 2 * 3;
	printf("%d\n", b);
	
	// Example c:
	int c = 5 * 2 / 2 * 3;
	printf("%d\n", c);
	
	// Example d:
	int d = 5 * (2 / 2) * 3;
	printf("%d\n", d);
	
	// Example e:
	int e = 5 + 2 / 2 * 3;
	printf("%d\n", e);
	
	return 0;

}

