//Create a structure to store complex numbers>use arrow operator

#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

int main() {
    struct Complex num1 = {3.0, 4.0};  // Initialize a complex number
    struct Complex *ptr = &num1;       // Create a pointer to the complex number

    // Accessing structure members using the arrow operator
    printf("Complex Number: %.1lf + %.1lfi\n", ptr->real, ptr->imag);

    // Changing structure members using the arrow operator
    ptr->real = 5.0;
    ptr->imag = -2.0;

    printf("Updated Complex Number: %.1lf + %.1lfi\n", ptr->real, ptr->imag);

    return 0;
}
