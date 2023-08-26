//Write a program to allocate memory too store 5 prices

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numPrices = 5;
    float *prices;

    // Allocate memory for an array of 5 float values
    prices = (float *)malloc(numPrices * sizeof(float));

    if (prices == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d prices:\n", numPrices);
    for (int i = 0; i < numPrices; i++) {
        scanf("%f", &prices[i]);
    }

    printf("You entered the following prices:\n");
    for (int i = 0; i < numPrices; i++) {
        printf("%.2f\n", prices[i]);
    }

    // Free the allocated memory
    free(prices);

    return 0;
}
