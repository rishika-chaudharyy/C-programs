//2 numbers a,b are written in a file . Write a program to replace them with their sum

#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int a, b;
    if (fscanf(file, "%d %d", &a, &b) != 2) {
        printf("Error reading numbers from file.\n");
        fclose(file);
        return 1;
    }

    // Calculate the sum
    int sum = a + b;

    // Move the file pointer back to the beginning
    rewind(file);

    // Replace the numbers with their sum in the file
    fprintf(file, "%d", sum);

    fclose(file);

    printf("Numbers replaced with their sum in the file.\n");

    return 0;
}
