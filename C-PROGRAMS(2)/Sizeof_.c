//Use of size of function

#include <stdio.h>

int main() {
    int intValue;
    char charValue;
    float floatValue;
    double doubleValue;

    printf("Size of int: %lu bytes\n", sizeof(intValue));
    printf("Size of char: %lu bytes\n", sizeof(charValue));
    printf("Size of float: %lu bytes\n", sizeof(floatValue));
    printf("Size of double: %lu bytes\n", sizeof(doubleValue));

    return 0;
}
