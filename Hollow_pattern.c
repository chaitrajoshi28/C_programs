//hollow pattern
#include <stdio.h>

int main() {
    int rows, cols;

    // Get the dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Loop to print the hollow rectangle
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Print '*' for the borders, otherwise print space
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
