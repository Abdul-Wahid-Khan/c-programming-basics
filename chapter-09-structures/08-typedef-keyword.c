// This is a typedef + structure program (Uses typedef to creates an alias (short name or nickname))
#include <stdio.h>
#include <string.h>

typedef struct ComputerEngineeringStudent { // Full name: struct ComputerEngineeringStudent
    int roll;
    float cgpa;
    char name[100];
} CES; // Short name: CES

int main() {
	CES s1;
	s1.roll = 102;
	s1.cgpa = 7.9;
	strcpy(s1.name, "Wick");
	
	printf("Student Name = %s\n", s1.name);
	printf("Student Roll no = %d\n", s1.roll);
	printf("Student cgpa = %f\n", s1.cgpa);
	
	return 0;

}

