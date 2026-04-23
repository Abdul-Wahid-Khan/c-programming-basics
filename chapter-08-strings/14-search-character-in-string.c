// This is a character search program in a string
#include <stdio.h>

void checkCharacter(char str[], char ch);

int main() {
    char str[] = "FightClub";
    char ch = 't';
    checkCharacter(str, ch);
}

void checkCharacter(char str[], char ch) {
    for (int i=0; str[i] != '\0'; i++) {
        if (str[i] == ch) { // Compares each character with 't'
            printf("Character is Present");
            return;
        }
    }
    printf("Character is Not Present"); // Executes only if loop finishes without finding character
}