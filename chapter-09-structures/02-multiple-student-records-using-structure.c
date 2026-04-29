// This is a structure program display multiple student records
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
    
    struct student s2; // s2 is a variable of type struct student
    s2.roll = 194;
    s2.cgpa =8.3;
    // s2.name = "Wick";
    strcpy(s2.name, "Wick"); // Because name is an array, not a pointer so we use strcpy()
    
    printf("student name = %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);
    
    struct student s3; // s3 is a variable of type struct student
    s3.roll = 195;
    s3.cgpa =9.6;
    // s1.name = "William";
    strcpy(s3.name, "William"); // Because name is an array, not a pointer so we use strcpy()
    
    printf("student name = %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);
    
    return 0;

}

