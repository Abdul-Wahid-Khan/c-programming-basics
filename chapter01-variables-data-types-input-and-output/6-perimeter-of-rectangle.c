#include <stdio.h>
 // perimeter of rectangle take side a,b from user
int main() {
    int a , b , perimeter;
    printf("enter side a");
    scanf("%d", & a);

    printf("enter side b");
    scanf("%d", & b);

    printf("perimeter is : %d", 2 * (a + b));

    return 0;
}

