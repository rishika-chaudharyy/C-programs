//Write a program for realloc function

#include <stdio.h>
#include <stdlib.h>

int main() {
    int initialSize = 5;

    // Allocate memory for an initial array of integers
    int *array = (int *)malloc(initialSize * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", initialSize);
    for (int i = 0; i < initialSize; i++) {
        scanf("%d", &array[i]);
    }

    printf("You entered the following integers:\n");
    for (int i = 0; i < initialSize; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int newSize;
    printf("Enter the new size for the array: ");
    scanf("%d", &newSize);

    // Resize the array using realloc
    int *newArray = (int *)realloc(array, newSize * sizeof(int));

    if (newArray == NULL) {
        printf("Memory reallocation failed.\n");
        free(array); // Don't forget to free the original memory
        return 1;
    }

    // Initialize the newly added elements (if any)
    for (int i = initialSize; i < newSize; i++) {
        newArray[i] = i * 10;
    }

    printf("Updated array content:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");

    // Free the memory after use
    free(newArray);

    return 0;
}
