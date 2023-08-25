//Write a program to print alphabets using pointers

#include <stdio.h>

int main() {
    char alphabet;
    char *ptr;

    ptr = &alphabet; // Point the pointer to the memory location of 'alphabet'

    // Printing uppercase alphabets
    printf("Uppercase Alphabets:\n");
    for (alphabet = 'A'; alphabet <= 'Z'; alphabet++) {
        printf("%c ", *ptr);
    }

    printf("\n\n");

    // Printing lowercase alphabets
    printf("Lowercase Alphabets:\n");
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
        printf("%c ", *ptr);
    }

    printf("\n");

    return 0;
}
