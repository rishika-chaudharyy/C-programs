//Write a program to calculate area od a circle

#include<stdio.h>
int main() {
    float radius;
    float area;
    printf("Enter the radius of the circle : \n");
    scanf("%f",&radius);
    area= 3.14*radius*radius;
    printf("Area of the circle is %f",area);
    return 0;
}