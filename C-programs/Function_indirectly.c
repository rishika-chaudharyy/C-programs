//Write a function to indirectly call a function

void printone();
void printtwo();
#include<stdio.h>
 int main() {
printone();
    return 0;
 }
 void printone(){
    printf("Hello!\n");
    printtwo();
 }
 void printtwo(){
    printf("How are you?");
 }