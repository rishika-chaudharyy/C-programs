//Write a program to read and write in a file using fgetc and fputc

#include <stdio.h>

int main() {
    // Declare file pointers for input and output files
    FILE *inputFile, *outputFile;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");

    // Check if files opened successfully
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening the files!\n");
        return 1; // Return an error code
    }

    // Read from the input file and write to the output file character by character
    int character;
    while ((character = fgetc(inputFile)) != EOF) {
        fputc(character, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("File read from and written to successfully.\n");

    return 0; // Return 0 to indicate successful execution
}
