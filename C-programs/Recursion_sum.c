//Write a recursive program to find sum

#include<stdio.h>
int sum(int a);
 int main() {
   int c= sum(10);
   printf("The sum is %d",c);
    return 0;
 }
 int sum(int a){
    if(a==1){
        return 1;
    }
    int nm1= sum(a-1);
    int nm=nm1+a;
    return nm;
 }
    