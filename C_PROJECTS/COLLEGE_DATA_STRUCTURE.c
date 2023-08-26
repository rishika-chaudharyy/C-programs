//MAKE A SYSTEM THAT CAN STOR INFORMATION OF ALL THE STUDENTS,TEACHERS,STAFF OF YOUR COLLEGE IN THE FORM OF STRUCTURE

#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 100

// Define structures

struct Address {
    char street[100];
    char city[50];
    char state[50];
    char zip[20];
};

struct Person {
    char firstName[50];
    char lastName[50];
    struct Address address;
};

struct Student {
    struct Person person;
    int studentId;
    char program[50];
};

struct Teacher {
    struct Person person;
    int employeeId;
    char department[50];
};

struct Staff {
    struct Person person;
    int employeeId;
    char role[50];
};

int main() {
    struct Student students[MAX_ENTRIES];
    struct Teacher teachers[MAX_ENTRIES];
    struct Staff staff[MAX_ENTRIES];

    int numStudents, numTeachers, numStaff;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("Enter student %d information:\n", i + 1);
        printf("First Name: ");
        scanf("%s", students[i].person.firstName);
        printf("Last Name: ");
        scanf("%s", students[i].person.lastName);
        printf("Street: ");
        scanf("%s", students[i].person.address.street);
        printf("City: ");
        scanf("%s", students[i].person.address.city);
        printf("State: ");
        scanf("%s", students[i].person.address.state);
        printf("ZIP: ");
        scanf("%s", students[i].person.address.zip);
        printf("Student ID: ");
        scanf("%d", &students[i].studentId);
        printf("Program: ");
        scanf("%s", students[i].program);
    }

    printf("Enter the number of teachers: ");
    scanf("%d", &numTeachers);

    for (int i = 0; i < numTeachers; i++) {
        printf("Enter teacher %d information:\n", i + 1);
        printf("First Name: ");
        scanf("%s", teachers[i].person.firstName);
        printf("Last Name: ");
        scanf("%s", teachers[i].person.lastName);
        printf("Street: ");
        scanf("%s", teachers[i].person.address.street);
        printf("City: ");
        scanf("%s", teachers[i].person.address.city);
        printf("State: ");
        scanf("%s", teachers[i].person.address.state);
        printf("ZIP: ");
        scanf("%s", teachers[i].person.address.zip);
        printf("Employee ID: ");
        scanf("%d", &teachers[i].employeeId);
        printf("Department: ");
        scanf("%s", teachers[i].department);
    }

    printf("Enter the number of staff: ");
    scanf("%d", &numStaff);

    for (int i = 0; i < numStaff; i++) {
        printf("Enter staff %d information:\n", i + 1);
        printf("First Name: ");
        scanf("%s", staff[i].person.firstName);
        printf("Last Name: ");
        scanf("%s", staff[i].person.lastName);
        printf("Street: ");
        scanf("%s", staff[i].person.address.street);
        printf("City: ");
        scanf("%s", staff[i].person.address.city);
        printf("State: ");
        scanf("%s", staff[i].person.address.state);
        printf("ZIP: ");
        scanf("%s", staff[i].person.address.zip);
        printf("Employee ID: ");
        scanf("%d", &staff[i].employeeId);
        printf("Role: ");
        scanf("%s", staff[i].role);
    }

    // Printing entered information
    printf("\nEntered Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %s %s\n", i + 1, students[i].person.firstName, students[i].person.lastName);
    }
    for (int i = 0; i < numTeachers; i++) {
        printf("Teacher %d: %s %s\n", i + 1, teachers[i].person.firstName, teachers[i].person.lastName);
    }
    for (int i = 0; i < numStaff; i++) {
        printf("Staff %d: %s %s\n", i + 1, staff[i].person.firstName, staff[i].person.lastName);
    }

    return 0;
}
