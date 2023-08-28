//Pattern
#include <stdio.h>

void printOddStarsIncremental(int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n = 5;  // You can change this to any desired number
    printOddStarsIncremental(n);
    return 0;
}
