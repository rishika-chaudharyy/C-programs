//Write a program to keep taking numbers input from the user until multiple of 7 is entered

#include<stdio.h>
 int main() {
    int n;
    do{
        printf("Enter the numbers\n");
        scanf("%d",&n);
        if(n%7==0){
            printf("You have entered multiple of 7");
            break;
        }
    }
    while(1);
    
    return 0;
 }