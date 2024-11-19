// Program to return a sorted merged array of given two unsorted arrays.


#include <stdio.h>
// Function to merge two sorted halves into a single sorted array
void merge(int arr[], int left, int mid, int right) {
    int size1 = mid - left + 1;  // Size of left subarray
    int size2 = right - mid;     // Size of right subarray

    // Create temporary arrays
    int leftArr[size1], rightArr[size2];

    // Copy data to temporary arrays
    for (int i = 0; i < size1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < size2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = left;  // Initial indexes for left, right and merged array
    while (i < size1 && j < size2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    // Copy remaining elements of leftArr[] if any
    while (i < size1) {
        arr[k++] = leftArr[i++];
    }

    // Copy remaining elements of rightArr[] if any
    while (j < size2) {
        arr[k++] = rightArr[j++];
    }
}

// Function to perform Merge Sort on the array
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
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
    // Define two unsorted arrays
    int arr1[] = {12, 7, 9, 23, 5};
    int arr2[] = {14, 3, 6, 1, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize = size1 + size2;

    // Create an array to hold the merged result
    int merged[mergedSize];

    // Copy elements of arr1 into merged
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    
    // Copy elements of arr2 into merged
    for (int j = 0; j < size2; j++) {
        merged[size1 + j] = arr2[j];
    }

    // Sort the merged array using Merge Sort
    mergeSort(merged, 0, mergedSize - 1);

    // Print the sorted merged array
    printf("Sorted merged array:\n");
    printArray(merged, mergedSize);

    return 0;
}
