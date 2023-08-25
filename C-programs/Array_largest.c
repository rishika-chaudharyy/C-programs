//Write a program to print largest element in array

#include <stdio.h>

int findLargestElement(int arr[], int size) {
    int largest = arr[0]; // Assume the first element is the largest
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    
    return largest;
}

int main() {
    int arr[] = {12, 45, 67, 23, 89, 34, 76, 98, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int largestElement = findLargestElement(arr, size);
    
    printf("The largest element in the array is: %d\n", largestElement);
    
    return 0;
}
