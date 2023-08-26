//Make a program to input student info and enter it to a file

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Create an array of struct Student to store student information
    struct Student students[numStudents];

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
    }

    // Open a file for writing
    FILE *file = fopen("student_info.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write student information to the file
    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "Student %d:\n", i + 1);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Age: %d\n", students[i].age);
        fprintf(file, "GPA: %.2f\n", students[i].gpa);
        fprintf(file, "\n");
    }

    // Close the file
    fclose(file);

    printf("Student information saved to 'student_info.txt'.\n");

    return 0;
}
