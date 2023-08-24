//Write a program to check break and continue

#include <stdio.h>

int main() {
    // Demonstration of 'break' statement
    printf("Demonstrating 'break' statement:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Encountered 3, breaking the loop.\n");
            break;
        }
        printf("Current value of i: %d\n", i);
    }
    
    // Demonstration of 'continue' statement
    printf("\nDemonstrating 'continue' statement:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf("Encountered 3, skipping this iteration.\n");
            continue;
        }
        printf("Current value of i: %d\n", i);
    }

    return 0;
}
