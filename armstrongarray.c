//Program to print Armstrong numbers from the array.

#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;    // Store the original number to compare later
    int sum = 0;
    int digits = 0;

    // Calculate the number of digits in num
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of each digit raised to the power of 'digits'
    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    // Check if the sum equals the original number
    return sum == originalNum;
}

// Function to print Armstrong numbers from an array
void printArmstrongNumbers(int arr[], int size) {
    printf("Armstrong numbers in the array are: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (isArmstrong(arr[i])) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    // Example array with a mix of Armstrong and non-Armstrong numbers
    int arr[] = {153, 370, 371, 9474, 23, 407, 89,90};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the function to print Armstrong numbers in the array
    printArmstrongNumbers(arr, size);

    return 0; // End of the program
}
