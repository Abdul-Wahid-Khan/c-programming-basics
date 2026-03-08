// Relation Operators are : [(==), (>,>=), (<,<=), (!=)]
#include <stdio.h>

/*
Relational operators are used to compare two values.
They always give result: In C language if the statement is True it will return '1' or 
if statement is false it will return '0'.
*/

int main() {
    
    // Example a: (==) double equal to
    printf("%d\n", 5 == 5);  // 1 (True)
    printf("%d\n", 5 == 6);  // 0 (False)
    
    // Example b : (>,>=) greater than, greater than equal to
    printf("%d\n", 4 > 3);  // 1 (True)
    printf("%d\n", 3 > 4);  // 0 (False)
    printf("%d\n", 5 >= 5);  // 1 (True)
    printf("%d\n", 5 >= 4);  // 1 (True)
    
    // Example c : (<,<=) less than, less than equal to
    printf("%d\n", 3 < 4);  // 1 (True)
    printf("%d\n", 4 < 3);  // 0 (False)
    printf("%d\n", 4 <= 4);  // 1 (True)
    printf("%d\n", 5 <= 4);  // 0 (True)
    
    // Example d : (!=) not(exclamation) equal to 
    printf("%d\n", 5 != 6);  // 1 (True)
    printf("%d\n", 5 != 5);  // 0 (False)

    return 0;
}


