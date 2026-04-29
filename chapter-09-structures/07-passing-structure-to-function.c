// Passing Structure to Function
#include <stdio.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

// Function Declaration
void printInfo(struct student s1);

int main() {
    struct student s1 = {153, 8.7, "John"}; // Structure Initialization
    
    // Function Call
    printInfo(s1); // The whole structure is copied and passed to the function
    
    return 0;

}

void printInfo(struct student s1) { // Receives a copy of the structure
    printf("student informaton : \n");
    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
}