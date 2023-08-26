//Write a program to write all odd numbers from 1-n in a file

#include <stdio.h>

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);

    FILE *file = fopen("odd_numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (int i = 1; i <= n; i += 2) {
        fprintf(file, "%d\n", i);
    }

    fclose(file);

    printf("Odd numbers from 1 to %d saved to 'odd_numbers.txt'.\n", n);

    return 0;
}
