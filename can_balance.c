//Given a non-empty array, return true if there is a place to split the array so that the sum of the numbers on one side is equal to the sum of the numbers on the other side.
//canBalance([1, 1, 1, 2, 1]) → true
//canBalance([2, 1, 1, 2, 1]) → false
//canBalance([10, 10]) → true

#include <stdio.h>

// Function to check if there exists a balance point in the array
int canBalance(int arr[], int n) {
    int totalSum = 0;  // Sum of all elements in the array
    int leftSum = 0;   // Sum of elements on the left side of the split

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Traverse the array and update leftSum for each element
    for (int i = 0; i < n; i++) {
        leftSum += arr[i];          // Add current element to leftSum
        int rightSum = totalSum - leftSum;  // Calculate rightSum by subtracting leftSum from totalSum
        
        // Check if leftSum is equal to rightSum
        if (leftSum == rightSum) {
            return 1;  // Return true (1) if a balance point is found
        }
    }

    return 0;  // Return false (0) if no balance point is found
}

int main() {
    int arr1[] = {1, 1, 1, 2, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", canBalance(arr1, n1));  // Expected output: 1 (true)

    int arr2[] = {2, 1, 1, 2, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%d\n", canBalance(arr2, n2));  // Expected output: 0 (false)

    int arr3[] = {10, 10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", canBalance(arr3, n3));  // Expected output: 1 (true)

    return 0;
}
