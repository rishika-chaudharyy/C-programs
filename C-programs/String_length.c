//Write a program to input string and get its length

#include <stdio.h>

int main() {
    char input[100]; // Assuming the input won't exceed 99 characters
    int length = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin); // Input the string

    // Calculate the length of the string
    while (input[length] != '\0' && input[length] != '\n') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}


