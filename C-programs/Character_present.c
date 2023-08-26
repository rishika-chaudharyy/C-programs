//Write a program to check if a given character is present in a string or not

#include <stdio.h>
#include <stdbool.h>

bool isCharacterPresent(const char* str, char target) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    const char* input = "Hello, world!";
    char target = 'o';

    if (isCharacterPresent(input, target)) {
        printf("The character '%c' is present in the string.\n", target);
    } else {
        printf("The character '%c' is not present in the string.\n", target);
    }

    return 0;
}
