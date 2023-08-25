//Write a program to find how many times an element occurs in an array

#include <stdio.h>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int arr[] = {2, 5, 7, 3, 7, 8, 7, 2, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    
    printf("Enter the element to count occurrences: ");
    scanf("%d", &target);
    
    int occurrences = countOccurrences(arr, size, target);
    
    printf("The element %d occurs %d times in the array.\n", target, occurrences);
    
    return 0;
}
