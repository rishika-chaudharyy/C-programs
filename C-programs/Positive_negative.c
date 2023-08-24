//Write a program to input number and check if positive or negative and nested if to check even or odd

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
        if(number%2==0){
            printf("The number is even");
        }else{
            printf("The number is odd");
        }
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
