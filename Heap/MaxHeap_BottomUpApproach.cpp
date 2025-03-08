#include <iostream>  // Header for input and output operations
#include <algorithm> // Header for utility functions like swap()
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

// Function to maintain the max heap property for the subtree rooted at index 'i'
// Parameters:
// arr[]: The array representing the heap
// n: The size of the heap
// i: The index of the root of the subtree to heapify
void heapify(int arr[], int n, int i) {
    int largest = i;           // Initialize largest as root (current index 'i')
    int l = 2 * i + 1;         // Calculate left child index: left = 2*i + 1
    int r = 2 * i + 2;         // Calculate right child index: right = 2*i + 2

    // If left child exists (l < n) and is greater than the current largest element,
    // update 'largest' to the index of the left child
    if (l < n && arr[l] > arr[largest]) 
        largest = l;

    // If right child exists (r < n) and is greater than the current largest element,
    // update 'largest' to the index of the right child
    if (r < n && arr[r] > arr[largest]) 
        largest = r;

    // If 'largest' is not the root (i), swap the root with the largest child
    if (largest != i) {
        swap(arr[i], arr[largest]); // Swap the values to maintain the heap property

        // Recursively heapify the affected subtree to ensure the entire tree satisfies the max heap property
        heapify(arr, n, largest);
    }
}

int main() {
    // Initialize an array with 9 integers
    int arr[9] = {12, 7, 9, 23, 5, 19, 27, 47, 97}; 
    int n = 9;  // Size of the array

    // Build a max heap from the array. 
    // Start from the last non-leaf node and move up to the root node.
    // The last non-leaf node is at index (n/2 - 1).
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(arr, n, i);  // Call heapify on each non-leaf node

    // Print the array after converting it into a max heap
    cout << "Array after heapify: ";
    for (int num : arr) 
        cout << num << " ";  // Output each element of the heapified array
    cout << endl;  // End the line after printing all elements

    return 0;  // Return 0 to indicate successful program execution
}
