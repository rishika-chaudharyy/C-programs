//Write a program to get input a number and a character and print all the numbers and character till that input

#include <stdio.h>

int main() {
    int num;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume the newline character from the previous input

    printf("Numbers and characters from 0 to %d:\n", num);

    for (int i = 0; i <= num; i++) {
        printf("%d ", i);
    }

    printf("\nCharacters from 'a' to '%c':\n", ch);

    for (char c = 'a'; c <= ch; c++) {
        printf("%c ", c);
    }

    printf("\n");

    return 0;
}
