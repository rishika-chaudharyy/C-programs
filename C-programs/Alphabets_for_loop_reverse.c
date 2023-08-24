//Write a program to print alphabets and also reverse

#include <stdio.h>

int main() {
    printf("Alphabets from 'a' to 'z':\n");
    
    // Printing alphabets from 'a' to 'z' using a for loop
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c ", c);
    }
    
    printf("\nAlphabets from 'z' to 'a' in reverse:\n");
    
    // Printing alphabets from 'z' to 'a' in reverse using a for loop
    for (char c = 'z'; c >= 'a'; c--) {
        printf("%c ", c);
    }
    
    printf("\n");
    
    return 0;
}
