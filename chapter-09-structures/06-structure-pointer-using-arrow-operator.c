// Structure Pointer Using Arrow Operator
#include <stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {153, 8.7, "John"};
    
    struct student *ptr = &s1;
    
    // Arrow Operator Usage
    printf("student name = %s\n", ptr->name);
    printf("student roll no = %d\n", ptr->roll);
    printf("student cgpa = %f\n", ptr->cgpa);
    
    return 0;

}