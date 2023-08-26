//Declare file pointer and open and close a file
#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *filePointer;

    // Open a file in write mode
    filePointer = fopen("example.txt", "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file!\n");
        return 1; // Return an error code
    }

    // Write to the file
    fprintf(filePointer, "Hello, this is a sample text.");

    // Close the file
    fclose(filePointer);

    printf("File written and closed successfully.\n");

    return 0; // Return 0 to indicate successful execution
}
