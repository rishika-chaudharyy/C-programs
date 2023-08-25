//Write a program to print maximum of two numbers using pointers

#include <stdio.h>

// Function to find the maximum of two numbers using pointers
int findMaximum(int *num1, int *num2) {
    if (*num1 > *num2) {
        return *num1;
    } else {
        return *num2;
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to find the maximum using pointers
    int max = findMaximum(&num1, &num2);

    printf("The maximum of %d and %d is: %d\n", num1, num2, max);

    return 0;
}
