// Program to return the minority element from the given array. An element that occurred for the minimum number of times is a majority element

#include<stdio.h>

// Function to find the minority element in the array
void getMinorityElement(int arr[], int n) {
    int minCount = n + 1;  // Variable to store the mincount of occurrences (initialized high)
    int index = -1;        // Variable to store the index of the element with the lowest count

    // Outer loop to select each element in the array
    for (int i = 0; i < n; i++) {
        int count = 0; // Reset count for each element in the array

        // Inner loop to count occurrences of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) // If current element matches arr[i]
                count++;          // Increase the count
        }

        // Update minCount and index if the current element's count is less
        if (count < minCount) {
            minCount = count;  // Set minCount to current count
            index = i;         // Update index to the current element's index
        }
    }

    // Print the minority element
    printf("Minority Element = %d (occurs %d time%s)\n", arr[index], minCount, minCount == 1 ? "" : "s");
}

// Main function
int main() {
    // Example array
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Function call to find and print the minority element
    getMinorityElement(arr, n);

    return 0;
}
