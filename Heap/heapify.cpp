#include <iostream>
#include <algorithm>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;           // Initialize largest as root
    int l = 2 * i + 1;         // Left child index
    int r = 2 * i + 2;         // Right child index

    // If left child exists and is greater than root
    if (l < n && arr[l] > arr[largest])  
        largest = l;

    // If right child exists and is greater than largest so far
    if (r < n && arr[r] > arr[largest])  
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);  // Recursively heapify the affected subtree
    }
}

int main() {
    int arr[9] = {12, 7, 9, 23, 5, 19, 23, 47, 97};
    int n = 9;
    int i = 0;  // Index to heapify from

    heapify(arr, n, i);

    cout << "Array after heapify: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

//TIME COMPLEXITY - O(n)
//SPACE COMPELEXITY - O(1);