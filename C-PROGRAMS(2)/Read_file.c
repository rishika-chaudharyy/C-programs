//Write program to read from a file

#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *filePointer;

    // Open a file in read mode
    filePointer = fopen("example.txt", "r");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file!\n");
        return 1; // Return an error code
    }

    // Read and display the contents of the file
    char buffer[100]; // A buffer to store the read content
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(filePointer);

    return 0; // Return 0 to indicate successful execution
}
