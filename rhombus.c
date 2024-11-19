//Rambus//
#include <stdio.h>

int main() {
    int i, j, k, rows;
    printf("Enter Rhombus Star Pattern Rows =  ");
    scanf("%d", &rows);

    printf("Rhombus Star Pattern\n");
    for (i = 1; i <= rows; i++) { // Changed to iterate from 1 to rows for correct rhombus
        // Print leading spaces
        for (j = 1; j <= rows - i; j++) { // Adjust spaces based on current row
            printf(" ");
        }
        // Print stars
        for (k = 1; k <= rows; k++) {
            printf("*");
        }
        printf("\n");   
    }
    return 0;
}

