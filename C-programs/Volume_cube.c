//Write a program yo calculate the volume of the cube

#include<stdio.h>
int main() {
    int n,volume;
    printf("Enter the side of the cube :\n");
    scanf("%d",&n);
    volume=n*n*n;
    printf("Volume of cube is : %d m^3 ",volume);
    return 0;
}