//Write a program to input character corresponding the dy of the week

#include <stdio.h>

int main() {
    char firstLetter;

    printf("Enter the first letter of a day of the week (M/T/W/T/F/S/S): ");
    scanf(" %c", &firstLetter);  // Notice the space before %c to consume any leading whitespace or newline.

    switch (firstLetter) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Enter the second letter of the day (A/U): ");
            char secondLetter;
            scanf(" %c", &secondLetter);
            switch (secondLetter) {
                case 'A':
                case 'a':
                    printf("Saturday\n");
                    break;
                case 'U':
                case 'u':
                    printf("Sunday\n");
                    break;
                default:
                    printf("Invalid input for second letter.\n");
            }
            break;
        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}
