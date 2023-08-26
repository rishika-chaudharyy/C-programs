//Allocate memory to store first five odd numbers

#include <stdio.h>
#include <stdlib.h>

int main() {
    int oddNumbers[] = {1, 3, 5, 7, 9};
    int *numbers = (int *)malloc(5 * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Copy odd numbers to the allocated memory
    for (int i = 0; i < 5; i++) {
        numbers[i] = oddNumbers[i];
    }

    printf("Odd numbers stored in memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Reallocate memory for storing even numbers
    int evenNumbers[] = {2, 4, 6, 8, 10, 12};
    int *newNumbers = (int *)realloc(numbers, 6 * sizeof(int));

    if (newNumbers == NULL) {
        printf("Memory reallocation failed.\n");
        free(numbers);
        return 1;
    }

    // Copy even numbers to the reallocated memory
    for (int i = 0; i < 6; i++) {
        newNumbers[i] = evenNumbers[i];
    }

    printf("Even numbers stored in memory after reallocation:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", newNumbers[i]);
    }
    printf("\n");

    // Free the memory after use
    free(newNumbers);

    return 0;
}
