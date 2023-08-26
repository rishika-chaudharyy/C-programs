//Create a string firstname and lastname to store details of user and print all characters using loop

#include <stdio.h>
#include <string.h>

int main() {
    char firstName[] = "John";
    char lastName[] = "Doe";

    // Print characters of first name
    printf("First Name:\n");
    for (int i = 0; i < strlen(firstName); i++) {
        printf("%c\n", firstName[i]);
    }

    // Print characters of last name
    printf("\nLast Name:\n");
    for (int i = 0; i < strlen(lastName); i++) {
        printf("%c\n", lastName[i]);
    }

    return 0;
}
