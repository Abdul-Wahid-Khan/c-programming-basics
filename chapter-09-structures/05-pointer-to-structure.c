// Pointer to Structures
#include <stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {153, 8.7, "John"}; // Creates and initializes s1
    
    struct student *ptr = &s1; // ptr stores the address of s1 and It is a pointer to a struct student
    
    printf("student name = %s\n", (*ptr).name);
    printf("student roll no = %d\n", (*ptr).roll);
    printf("student cgpa = %f\n", (*ptr).cgpa);
    
    return 0;

}