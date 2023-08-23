//Write a program to calculate perimeter of rectangle

#include<stdio.h>
int main(){
    int length,breadth,perimeter;
    printf("Enter length and breadth :\n");
    scanf("%d",&length);
    scanf("%d",&breadth);
    perimeter= 2*(length+breadth);
    printf("Perimeter of reactangle is %d ",perimeter);
    return 0;
}