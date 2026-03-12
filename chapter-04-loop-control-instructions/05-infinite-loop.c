// Infinite loop
#include<stdio.h>

int main() {
    /*
    An infinite loop is a loop that never terminates because its condition is always true.
    but may cause high CPU usage and program hang if not properly controlled.
    */
    
    for(int i=1; ; i++){
        printf("Hello\n");
    }

    return 0; 
}