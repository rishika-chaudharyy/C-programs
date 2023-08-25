//Write a program to print fibonacci using array

#include <stdio.h>

void printFibonacci(int n) {
    int fibArray[n];
    
    fibArray[0] = 0; // First Fibonacci number
    fibArray[1] = 1; // Second Fibonacci number
    
    for (int i = 2; i < n; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
    
    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibArray[i]);
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        printFibonacci(n);
    }
    
    return 0;
}
