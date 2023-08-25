//Write a program to transverse an array

#include<stdio.h> 
 int main() {
    int arr[10];
    int *ptr=&arr[0];
    for(int i=0;i<10;i++){
        printf("%d index:",i);
        scanf("%d",ptr+i);
    }
    for(int i=0;i<10;i++){
        printf("%d index=%d",i,*(ptr+i));
    }
    return 0;
 }