// Logical Operators are : [(&&), (||), (!)]
#include <stdio.h>

//Logical operators are used to combine multiple conditions in C language.
int main() {
    
    /* Example a: (&&) Logical AND 
    if both conditions are true the output will be True(1)
    if one condition is false the output will be False(0) */
    printf("%d\n", 5>3 && 3>2);  // 1 (True)
    printf("%d\n", 4>3 && 1>2);  // 0 (False)
    
    /* Example b : (||) Logical OR 
    if thre is two, three, or many conditions from them one condition is true the output
    will be True(1)
    if all are false output will be False(0)  */
    printf("%d\n", 4>3 || 1>2 || 3>5);  // 1 (True)
    printf(" %d\n", 3==4 || 4<3);  // 0 (False)
    
    /* Example c : (!) Logical NOT 
    Logical NOT ! operator reverses the result of a condition
    if condition is TRUE output becomes FALSE and if condition is FALSE output becomes TRUE
    */
    printf("%d\n", !((5>2) && (3>4)) );  // 1 (True)
    printf("%d\n", !(4 > 1));  // 0 (False)

    return 0;
}


