//Write a program to print numbers from 1-10 and also reverse

#include <stdio.h>

int main() {
    printf("Numbers from 1 to 10:\n");
    
    // Printing numbers from 1 to 10 using a for loop
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    
    printf("\nNumbers from 10 to 1 in reverse:\n");
    
    // Printing numbers from 10 to 1 in reverse using a for loop
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}
