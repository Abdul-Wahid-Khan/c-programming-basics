// Pointer to  Pointer
#include <stdio.h>

int main() {
    int i =5;
    int *ptr = &i; // 'ptr' is a pointer to an integer and it stores the address of i.
    int **pptr = &ptr; // 'pptr' is a pointer to a pointer and it stores the address of ptr.
    
    printf("%d\n", **pptr); 
    /*
    pptr → gives address of ptr
    *pptr → gives value of ptr (which is address of i)
    **pptr → gives value at that address → value of i
    */
    return 0;

}