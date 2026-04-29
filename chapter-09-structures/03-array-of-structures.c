// This program is a structure array.
#include <stdio.h>
#include <string.h>

// User Define
struct student {
    int roll;
    float cgpa;
    char name[100]; // name → string (char array)
};

int main() {
    struct student CSE[100]; // You can store 100 students and Each element is a full student record
    // First student
    CSE[0].roll = 1193;
    CSE[0].cgpa =8.9;
    strcpy(CSE[0].name, "John");
    
    printf("student name = %s\n", CSE[0].name);
    printf("student roll no = %d\n", CSE[0].roll);
    printf("student cgpa = %f\n", CSE[0].cgpa);
    
    return 0;

}

