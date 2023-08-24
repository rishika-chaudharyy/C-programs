//Write a program to check pass or fail

#include <stdio.h>

int main() {
    float score;
    float passThreshold = 50.0;

    printf("Enter your exam score: ");
    scanf("%f", &score);

    if (score >= passThreshold) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry, you have failed.\n");
    }

    return 0;
}
