//Write a program to print float numbers form 1.0-5.0

#include <stdio.h>

int main() {
    printf("Float numbers from 1.0 to 5.0:\n");
    
    // Printing float numbers from 1.0 to 5.0 with a step of 0.5 using a for loop
    for (float num = 1.0; num <= 5.0; num += 0.5) {
        printf("%f ", num);
    }
    
    printf("\n");
    
    return 0;
}
