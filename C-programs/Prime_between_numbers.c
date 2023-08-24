//Print prime numbers between two numbers

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Number is divisible by i, so not prime
        }
    }
    
    return 1;  // Number is prime
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
