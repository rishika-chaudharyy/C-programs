//Allocate memory using calloc to store first 500 natural numbers

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numNumbers = 500;
    
    // Allocate memory for an array of 500 integers using calloc
    int *numbers = (int *)calloc(numNumbers, sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialize the array with the first 500 natural numbers
    for (int i = 0; i < numNumbers; i++) {
        numbers[i] = i + 1;
    }

    printf("First %d natural numbers stored in memory:\n", numNumbers);
    for (int i = 0; i < numNumbers; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(numbers);

    return 0;
}
