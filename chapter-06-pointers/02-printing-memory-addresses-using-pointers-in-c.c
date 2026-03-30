#include<stdio.h>
int main() {
    int age = 22;
    int *ptr = &age;

    // address
    // printf("%p\n", &age);
    printf("%u\n", &age); // &age gives the memory address of the variable age and %u prints it as an unsigned integer.
    printf("%u\n", ptr); // ptr already stores the address of age. So this prints the same address as &age.
    printf("%u\n", &ptr); // &ptr gives the address where the pointer itself is stored.
    
    return 0;

}