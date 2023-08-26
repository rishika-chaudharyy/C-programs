//Find the salted form of passwrod entered by user is sali is 123 and added at the end

#include <stdio.h>
#include <string.h>

int main() {
    char password[100];
    char salt[] = "123"; // Salt value

    printf("Enter your password: ");
    scanf("%s", password);

    // Concatenate the salt value to the password
    strcat(password, salt);

    printf("Salted password: %s\n", password);

    return 0;
}
