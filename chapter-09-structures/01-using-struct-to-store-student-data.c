// This is a basic structure (struct) program to store and display student data.
#include <stdio.h>
#include <string.h>

// User Define
struct student {
    int roll;
    float cgpa;
    char name[100]; // name → string (char array)
};

int main() {
    struct student s1; // s1 is a variable of type struct student
    s1.roll = 193;
    s1.cgpa =8.9;
    // s1.name = "John";
    strcpy(s1.name, "John"); // Because name is an array, not a pointer so we use strcpy()
    
    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    
    return 0;

}

