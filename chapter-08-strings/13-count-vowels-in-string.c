// This is a program of a function that counts vowels in a string
#include <stdio.h>

int countVowels(char str[]);

int main() {
    char str[] = "HelloWorld";
    printf("vowels are : %d", countVowels(str));
}

int countVowels(char str[]) { 
    int count = 0;
    
    for (int i=0; str[i] != '\0'; i++) { // Runs until end of string (\0)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') { // If character is a vowel → increase count
            count++;
        }
    }
    return count;
}
