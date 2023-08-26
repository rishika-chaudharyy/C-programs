//Write a program to write in a file

#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *filePointer;

    // Open a file in write mode
    filePointer = fopen("output.txt", "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file!\n");
        return 1; // Return an error code
    }

    // Write content to the file
    fprintf(filePointer, "This is some content written to the file.\n");
    fprintf(filePointer, "Another line of content.\n");

    // Close the file
    fclose(filePointer);

    printf("Content written to the file successfully.\n");

    return 0; // Return 0 to indicate successful execution
}
