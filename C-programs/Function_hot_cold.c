//Write a function to print hot or cold according to the temperature

#include <stdio.h>

void hotOrCold(int temperature) {
    if (temperature >= 30) {
        printf("It's hot!\n");
    } else {
        printf("It's cold!\n");
    }
}

int main() {
    int temp;

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    hotOrCold(temp);

    return 0;
}
