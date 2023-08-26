//Write a function to count occurence of vowel and consonants in a string

#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(const char* str, int* vowelCount, int* consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
    }
}

int main() {
    const char* input = "Hello, world!";
    int vowelCount, consonantCount;

    countVowelsAndConsonants(input, &vowelCount, &consonantCount);

    printf("Vowel count: %d\n", vowelCount);
    printf("Consonant count: %d\n", consonantCount);

    return 0;
}
