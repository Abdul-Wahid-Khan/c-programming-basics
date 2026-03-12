#include<stdio.h>
// loop counter can be 'float' or even 'char'
int main() {

    for(float i=1.0; i<=5.0; i++) {
        printf("%f\n", i);
    }

    for(char i='a'; i<='z'; i=i+1) {
        printf("%c\n", i);
    }

    return 0; 
}