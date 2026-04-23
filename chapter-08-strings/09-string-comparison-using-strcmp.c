// This program demonstrates string comparison using strcmp()
#include <stdio.h>
#include <string.h> // Required for using string functions like strcmp()

int main() {
    // String Declaration
    char firstStr[] = "Apple";
    char secondStr[] = "Banana";
    printf("%d", strcmp(firstStr, secondStr)); // It compares character by character (ASCII values). like First characters: 'A' (ASCII 65) and 'B' (ASCII 66).
    return 0;

}

