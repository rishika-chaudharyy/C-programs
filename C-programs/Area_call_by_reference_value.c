//Write a program to find the area of square by call by value and call by reference

#include <stdio.h>

// Function to calculate the area of a square using call by value
double areaByValue(double side) {
    return side * side;
}

// Function to calculate the area of a square using call by reference
void areaByReference(double side, double *result) {
    *result = side * side;
}

int main() {
    double side, area;

    printf("Enter the side length of the square: ");
    scanf("%lf", &side);

    // Using call by value
    area = areaByValue(side);
    printf("Area of the square using call by value: %lf\n", area);

    // Using call by reference
    areaByReference(side, &area);
    printf("Area of the square using call by reference: %lf\n", area);

    return 0;
}
