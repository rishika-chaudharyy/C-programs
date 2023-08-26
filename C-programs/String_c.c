//Take a string inout from user using %c

#include <stdio.h>

int main() {
    char input[100]; // Assuming the input won't exceed 99 characters
    int i = 0;
    
    printf("Enter a string (press Enter when done):\n");

    // Read characters until Enter key is pressed
    while (i < sizeof(input) - 1) {
        scanf("%c", &input[i]);
        if (input[i] == '\n') {
            break;
        }
        i++;
    }

    input[i] = '\0'; // Null-terminate the input

    printf("You entered: %s\n", input);

    return 0;
}
