//Write a program to print 1-10 except 6

#include<stdio.h>
 int main() {
    for(int i=1;i<=10;i++){
        if(i==6){
            break;
        }
        printf("%d",i);
    }
    return 0;
 }