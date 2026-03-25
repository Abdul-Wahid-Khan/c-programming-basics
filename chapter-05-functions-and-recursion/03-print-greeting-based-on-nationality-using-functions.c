//A functions that print 'Namaste' if user is Indian & 'Bonjour' if user is French. 
#include <stdio.h>

// Function Declaration
void namaste();
void bonjour();

// Function Call
int main() {
    printf("enter f for french & i for indian: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'i'){
        namaste();
    } else{
        bonjour();
    }

    return 0;
}

// Function Definition
void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}

