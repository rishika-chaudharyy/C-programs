//Write a program to print highest frequency character in string


#include <stdio.h>

#define CHAR_COUNT 256 // Assuming ASCII character set

char findHighestFrequency(const char* str) {
    int frequency[CHAR_COUNT] = {0};

    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(int)str[i]]++;
    }

    // Find the character with the highest frequency
    char highestChar;
    int maxFrequency = 0;
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            highestChar = (char)i;
        }
    }

    return highestChar;
}

int main() {
    const char* input = "hello, world!";
    
    char highestFrequencyChar = findHighestFrequency(input);

    printf("The character with the highest frequency is: %c\n", highestFrequencyChar);

    return 0;
}
