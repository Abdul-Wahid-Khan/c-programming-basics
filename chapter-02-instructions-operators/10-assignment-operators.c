// Assignment Operator are : [(=), (+=), (-=), (*=), (/=), (%=)]
#include <stdio.h>
#include<math.h>

int main() {
    /* Example a : (=) Assignment Operator
    it is used to assign a value to a variable */
    int a = 10; // assignment;
    printf("%d\n", a);
    
    /* Example b : (+=) Addition Assignment Operator 
    it adds a value to a variable and stores the result back in the same variable.*/
    int b = 5;
    b += 3;   // b = b + 3
    printf("%d\n", b);
    
    /* Example c : (-=) Subtraction Assignment Operator 
    it subtracts a value from a variable and stores the result back in the same variable.*/
    int c = 2;
    c -= 4;   // c = c - 4
    printf("%d\n", c);
    
    /* Example d : (*=) Multiplication Assignment Operator 
    it multiplies the variable by a value and stores the result back in the same variable.
    */ 
    int d = 4;
    d *= 3;   // d = d * 3
    printf("%d\n", d);
    
    /* Example e : (/=) Division Assignment Operator 
    it divides the variable by a value and stores the result back in the same variable.*/
    int e = 20;
    e /= 5;   // e = e / 5
    printf("%d\n", e);
    
    /* Example f : (%=) Modulus Assignment Operator 
    it finds the remainder after division and stores it back in the same variable.*/
    int f = 8;
    f %= 3;   // f = f % 3
    printf("%d\n", f);
    
    return 0;
	

}

