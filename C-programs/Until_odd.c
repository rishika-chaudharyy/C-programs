//Write a program to keep taking numbers input from the user until odd number is entered

#include<stdio.h>
 int main() {
    int n;
    do{
        printf("Enter the numbers\n");
        scanf("%d",&n);
        if(n%2!=0){
            printf("You have entered an odd number");
            break;
        }
    }
    while(1);
    
    return 0;
 }