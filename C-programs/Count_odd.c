//Write a program to count to count odd numbers in an array

#include <stdio.h>

int countOddNumbers(int arr[], int size) {
    int oddCount = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            oddCount++;
        }
    }
    
    return oddCount;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int oddCount = countOddNumbers(arr, size);
    
    printf("Number of odd numbers in the array: %d\n", oddCount);
    
    return 0;
}
