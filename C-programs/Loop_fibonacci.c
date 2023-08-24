//Write a rpogram to print fibonacci using loop

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int fib1 = 0, fib2 = 1, fib;

    for (int i = 2; i <= n; i++) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    return fib;
}

int main() {
    int term;

    printf("Enter the term: ");
    scanf("%d", &term);

    if (term <= 0) {
        printf("Term should be a positive integer.\n");
    } else {
        int fibonacciNumber = fibonacci(term);
        printf("The Fibonacci number at term %d is %d\n", term, fibonacciNumber);
    }

    return 0;
}
