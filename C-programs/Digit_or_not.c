//Write a program yo check if given character is digit or not

#include<stdio.h>
#include<ctype.h>
int main() {
    char a;
    printf("Enter character:");
    scanf("%c",&a);
    if(isdigit(a)){
        printf("It is a digit");
    }else{
        printf("It is not a digit");
    }
    return 0;
}