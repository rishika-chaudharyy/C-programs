//Write a function to find square of a number using library

#include <stdio.h>
#include <math.h>

double findSquare(double num) {
    return pow(num, 2);
}

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    double square = findSquare(number);

    printf("Square of %.2lf is %.2lf\n", number, square);

    return 0;
}
