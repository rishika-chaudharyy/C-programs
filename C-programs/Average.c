//Write a program to print average of three numbers

#include<stdio.h>
int main() {
    int a , b , c;
    printf("Enter the values of a,b,c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int average=(a+b+c)/3;
    printf("The average is: %d",average);
    return 0;
}