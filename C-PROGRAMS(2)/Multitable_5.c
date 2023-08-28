//Write a program to create an array of 10 integers and stroe the table of 5

#include <stdio.h>

int main() {
    int multiplicationTable[10];

    // Store the multiplication table of 5 in the array
    for (int i = 0; i < 10; i++) {
        multiplicationTable[i] = 5 * (i + 1);
    }

    // Print the array containing the multiplication table
    printf("Multiplication Table of 5:\n");
    for (int i = 0; i < 10; i++) {
        printf("5 x %2d = %2d\n", i + 1, multiplicationTable[i]);
    }

    return 0;
}
