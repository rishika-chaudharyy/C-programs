//Write a program to check if a number is divisible by 2 or is a even number

#include<stdio.h>
int main() {
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("%d",a%2==0);
    return 0;
}