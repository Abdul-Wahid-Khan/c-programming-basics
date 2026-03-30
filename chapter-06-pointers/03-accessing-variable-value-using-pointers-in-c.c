#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;
    
    // value
    printf("%d\n", age); // Prints the value stored in age.
    printf("%d\n", *ptr); // *ptr means dereferencing the pointer. It accesses the value stored at the address contained in ptr. Since ptr points to age, it prints 22.
    printf("%d\n", *(&age)); // &age → gives the address of age and *(&age) → gives the value stored at that address, it also prints 22.
    
    return 0;

}