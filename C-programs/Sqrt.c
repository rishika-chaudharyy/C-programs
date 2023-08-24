//write a program to find square root of a number

#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;
    
    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
        squareRoot = sqrt(number);
        printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
    }

    return 0;
}
