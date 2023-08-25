//Write a program to calculate sum,product,average using call by reference

#include <stdio.h>

// Function to calculate sum, product, and average using call by reference
void calculateOperations(double num1, double num2, double *sum, double *product, double *average) {
    *sum = num1 + num2;
    *product = num1 * num2;
    *average = (*sum) / 2.0;
}

int main() {
    double num1, num2, sum, product, average;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Call the function to calculate sum, product, and average using call by reference
    calculateOperations(num1, num2, &sum, &product, &average);

    printf("Sum: %lf\n", sum);
    printf("Product: %lf\n", product);
    printf("Average: %lf\n", average);

    return 0;
}
