//Write a program to print odd numbers from 5-50

#include <stdio.h>

int main() {
    printf("Odd numbers from 5 to 50:\n");

    for (int i = 5; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
