//Write a program to allocate memory of size n input by the user

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Enter the size of memory to allocate: ");
    scanf("%d", &n);
    
    // Allocate memory of size n
    int *data = (int *)malloc(n * sizeof(int));
    
    if (data == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    // Initialize the allocated memory
    for (int i = 0; i < n; i++) {
        data[i] = i * 10;
    }
    
    printf("Allocated memory content:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    // Free the allocated memory
    free(data);

    return 0;
}
