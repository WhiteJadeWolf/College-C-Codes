#include <stdio.h>
#include <stdlib.h>

// Function to partition the array using the first element as pivot
int partition(int arr[], int left, int right) {
    int pivot = arr[left]; // Choosing the first element as pivot
    int i = left + 1, j = right;

    while (i <= j) {
        while (i <= right && arr[i] <= pivot) // Find element greater than pivot
            i++;
        while (arr[j] > pivot) // Find element smaller than pivot
            j--;
        
        if (i < j) { // Swap arr[i] and arr[j] if they are in the wrong order
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap pivot element with arr[j] to place it in the correct position
    int temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;

    return j; // Return pivot index
}

// QuickSelect function to find the k-th smallest element
int quickSelect(int arr[], int left, int right, int k) {
    if (left <= right) {
        // Partition the array
        int pivotIndex = partition(arr, left, right);

        // If pivotIndex is the k-1th index, return the element
        if (pivotIndex == k - 1)
            return arr[pivotIndex];

        // If k-th smallest is on the left side
        if (pivotIndex > k - 1)
            return quickSelect(arr, left, pivotIndex - 1, k);

        // If k-th smallest is on the right side
        return quickSelect(arr, pivotIndex + 1, right, k);
    }

    return -1; // Return -1 if k is out of bounds
}

// Driver code
int main() {
    int arr[] = {10, 3, 6, 2, 1, 2, 8, 3, 14, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    printf("The %dth smallest element is %d\n", k, quickSelect(arr, 0, n - 1, k));

    return 0;
}
