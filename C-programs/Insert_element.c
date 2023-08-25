//Write a program to insert element at the end of an array

#include <stdio.h>

void insertAtEnd(int arr[], int *size, int element) {
    arr[*size] = element; // Insert the element at the end
    (*size)++; // Increment the size of the array
}

int main() {
    int arr[100]; // Assuming an array of maximum size 100
    int size = 0; // Current size of the array
    int element;
    
    // Input the array elements
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to insert at the end
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);
    
    // Call the function to insert the element at the end
    insertAtEnd(arr, &size, element);
    
    // Display the updated array
    printf("Updated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
