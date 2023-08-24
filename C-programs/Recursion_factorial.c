//Write a recursive function to find factorial

#include<stdio.h>
int fact(int a);
 int main() {
   int c= fact(4);
   printf("The fact is %d",c);
    return 0;
 }
 int fact(int a){
    if(a==1){
        return 1;
    }
    int nm1= fact(a-1);
    int nm=nm1*a;
    return nm;
 }
    