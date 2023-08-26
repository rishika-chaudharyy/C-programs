//Write a program to convert lowercase letters of string to uppercase and vice versa

#include <stdio.h>
#include <ctype.h>

void convertCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char input[] = "Hello, World!";
    
    printf("Original string: %s\n", input);

    convertCase(input);

    printf("Converted string: %s\n", input);

    return 0;
}
