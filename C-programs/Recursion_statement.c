//Write a recursive program to print a statement

#include<stdio.h>
void print(int n);
 int main() {
    print(10);
    return 0;
 }
 void print(int n){
    if(n<0){
        return;
    }
    printf("hello world\n");
    print(n-1);
 }