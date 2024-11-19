//Program to return a sorted merged array of given two sorted arrays.

#include <stdio.h>

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0; // Index for arr1
    int j = 0; // Index for arr2
    int k = 0; // Index for merged array

    // Merge the two arrays
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i]; // Take element from arr1
            i++;
        } else {
            merged[k] = arr2[j]; // Take element from arr2
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7,9};
    int arr2[] = {2, 4, 6, 8,10};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[size1 + size2]; // Create an array to hold the merged result

    // Merge the two sorted arrays
    mergeSortedArrays(arr1, size1, arr2, size2, merged);

    // Print the merged array
    printf("Merged sorted array:\n");
    printArray(merged, size1 + size2);

    return 0;
}
