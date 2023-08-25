//Write a program to find difference and compare two pointers

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr[2]; // Pointer to the 3rd element
    int *ptr2 = &arr[4]; // Pointer to the 5th element
    
    // Calculate the difference between two pointers
    int diff = ptr2 - ptr1;
    
    printf("Pointer 1 points to: %d\n", *ptr1);
    printf("Pointer 2 points to: %d\n", *ptr2);
    printf("Difference between pointers: %td\n", diff);
    
    // Compare the pointers
    if (ptr1 == ptr2) {
        printf("Pointers are equal.\n");
    } else if (ptr1 < ptr2) {
        printf("Pointer 1 is before Pointer 2.\n");
    } else {
        printf("Pointer 2 is before Pointer 1.\n");
    }
    
    return 0;
}
