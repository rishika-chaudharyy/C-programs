//Create a 2D array to store tables of two and three

#include <stdio.h>

int main() {
    int tables[2][10]; // 2 rows for tables of 2 and 3, 10 columns for values
    
    // Generate the table of 2
    for (int i = 0; i < 10; i++) {
        tables[0][i] = 2 * (i + 1);
    }
    
    // Generate the table of 3
    for (int i = 0; i < 10; i++) {
        tables[1][i] = 3 * (i + 1);
    }
    
    // Display the tables
    printf("Multiplication Table of 2:\n");
    for (int i = 0; i < 10; i++) {
        printf("2 x %2d = %2d\n", i + 1, tables[0][i]);
    }
    
    printf("\nMultiplication Table of 3:\n");
    for (int i = 0; i < 10; i++) {
        printf("3 x %2d = %2d\n", i + 1, tables[1][i]);
    }
    
    return 0;
}
