//Write a program to check natural number or n

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("The number is not a natural number.\n");
    } else {
        printf("The number is a natural number.\n");
    }

    return 0;
}
