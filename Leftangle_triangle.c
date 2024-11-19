//Left angle triangle
#include <stdio.h>

int main() {
    int rows;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the left-aligned right-angle triangle pattern
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print stars for the current row
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
