//Write a recursive program to find fibonacci number

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int term;
    printf("Enter the term: ");
    scanf("%d", &term);

    int fibonacciNumber = fibonacci(term);
    printf("The Fibonacci number at term %d is %d\n", term, fibonacciNumber);

    return 0;
}
