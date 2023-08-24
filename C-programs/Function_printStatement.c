//Write a function to print  a statement 10 times

void printStatement(int count);
#include<stdio.h>
 int main() {
    printStatement(10);
    return 0;
 }
void printStatement(int count){
    for(int i=1;i<=count;i++)
    printf("Hello World!\n");
}