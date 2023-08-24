//Write a program to find the sum of digits of a number

#include <stdio.h>

int sumOfDigits(int number) {
    if (number == 0) {
        return 0;
    } else {
        return (number % 10) + sumOfDigits(number / 10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int digitSum = sumOfDigits(num);
    printf("Sum of digits of %d is %d\n", num, digitSum);

    return 0;
}
