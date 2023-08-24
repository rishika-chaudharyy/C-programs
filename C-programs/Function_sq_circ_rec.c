//Write a function to find the arae of square , circle , rectangle

float areasq(float side);
float areacirc(float radius);
float arearec(float length, float breadth);
#include<stdio.h>
 int main() {
float side;
float radius;
float length,breadth;
printf("Enter the parameters\n");
scanf("%f",&side);
scanf("%f",&radius);
scanf("%f",&length);
scanf("%f",&breadth);

float one=areasq(side);
printf("Area of square is %f\n",one);
float two=areacirc(radius);
printf("Area of circle is %f\n",two);
float three=arearec(length,breadth);
printf("Area of rectangle is %f\n",three);
    return 0;
 }
 float areasq(float side){
    return side*side;
 }
 float areacirc(float radius){
    return 3.14*radius*radius;
 }
 float arearec(float length, float breadth){
    return length*breadth ;         
 }