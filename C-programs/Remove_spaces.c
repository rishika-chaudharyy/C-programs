//Write a program to remove blank spaces in string

#include <stdio.h>
#include <string.h>

void removeSpaces(char* str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main() {
    char input[] = "  Hello,  world!   ";
    
    printf("Original string: \"%s\"\n", input);

    removeSpaces(input);

    printf("String with spaces removed: \"%s\"\n", input);

    return 0;
}
