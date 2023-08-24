//Write a program to input age and check if adult or not

#include<Stdio.h>
int main() {

    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("You are an adult");
    } else {
        printf("You are not an adult");
    }

    return 0;

}