//Write a program to store three marks of two students

#include <stdio.h>

int main() {
    // Define a 2D array to store marks
    int marks[2][3]; // 2 students and 3 subjects

    // Input marks for each student
    for (int i = 0; i < 2; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Display the entered marks
    printf("\nEntered Marks:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
