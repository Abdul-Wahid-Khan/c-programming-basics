// Pointer Dereferencing Example in C (or Accessing Variable Value using Pointer).
#include<stdio.h>

int main() {
    int age = 22;
    int *ptr = &age;
    /*
    -> A pointer variable ptr is declared.
    -> * means it is a pointer to an integer.
    -> &age means address of the variable age.
    -> So ptr stores the memory address of age.
    */
    int _age = *ptr;
    /*
    -> *ptr is called dereferencing the pointer.
    -> It means go to the address stored in ptr and get the value.
    -> Since ptr stores the address of age, *ptr gives 22.
    -> That value is stored in _age.
    */

    printf("%d", _age);
    return 0;
}
// using cmd

