//Write a program to print different output and input

#include<stdio.h>
int main() {
    int age;
    float price;
    char ch;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Your age is: %d\n",age);
    printf("Enter the price:\n");
    scanf("%f",&price);
    printf("The price is : %f\n",price);
    printf("Enter a character:\n");
    scanf("%c",&ch);
    printf("Character entered is : %c\n",ch);
    return 0;
}