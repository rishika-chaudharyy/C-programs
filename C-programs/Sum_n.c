//Write a program to print sum of n numbers

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
