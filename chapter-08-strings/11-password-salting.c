// This is a basic demonstration of “salting a password” using strings
#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main() {
	char password[100];
	scanf("%s", password); // Reads password (no spaces allowed)
	salting(password); // Sends the password to the function
}

void salting(char password[]) {
    char salt[] = "123"; // This is the extra data added to password
    char newPass[200];
    strcpy(newPass, password); // Copies password into newPass
    strcat(newPass, salt); // Appends "123" at the end
    puts(newPass);
}
