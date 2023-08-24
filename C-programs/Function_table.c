//Write a function to print a table

#include <stdio.h>

void printMultiplicationTable(int num) {
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Multiplication table for %d:\n", number);
    printMultiplicationTable(number);

    return 0;
}
