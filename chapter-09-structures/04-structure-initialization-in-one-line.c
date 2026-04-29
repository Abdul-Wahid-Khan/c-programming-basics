// This is a clean and professional way to initializing the structure in one line
#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1 = {153, 8.7, "John"}; // This assigns values in order
    
    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    
    return 0;

}

