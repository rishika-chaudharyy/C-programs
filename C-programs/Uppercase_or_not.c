//Write a program to check if the character is uppercase or not

#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (character >= 'A' && character <= 'Z') {
        printf("The character is uppercase.\n");
    } else {
        printf("The character is not uppercase.\n");
    }

    return 0;
}
