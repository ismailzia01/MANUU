#include <stdio.h>

int main() {
    int rows;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for spaces before numbers
        for (int space = 1; space <= rows - i; space++) {
            printf("  "); // Print two spaces for formatting
        }
        // Inner loop for printing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", i); // Print the row number
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}
