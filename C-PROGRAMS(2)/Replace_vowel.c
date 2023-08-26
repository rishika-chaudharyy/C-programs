//Replace the data in the file with the vowels present in the file

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    FILE *file = fopen("data.txt", "r+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read content from the file
    char content[1000];
    if (fgets(content, sizeof(content), file) == NULL) {
        printf("Error reading content from file.\n");
        fclose(file);
        return 1;
    }

    // Close the file
    fclose(file);

    // Extract vowels from content
    char vowels[1000];
    int vowelIndex = 0;

    for (int i = 0; content[i] != '\0'; i++) {
        if (isVowel(content[i])) {
            vowels[vowelIndex++] = content[i];
        }
    }
    vowels[vowelIndex] = '\0';

    // Open the file again for writing
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write extracted vowels back to the file
    fprintf(file, "%s", vowels);

    fclose(file);

    printf("Vowels extracted and replaced in the file.\n");

    return 0;
}
