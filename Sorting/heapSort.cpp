#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//HEAP-SORT vai BOTTOM-UP MAX-HEAP CONSTRUCTION 
void maxHeapify(int arr[], int n, int i) {        // Restores max-heap property for subtree rooted at index i
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest]) 
        largest = l;

    if (r < n && arr[r] > arr[largest]) 
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}


void buildMaxHeap(int arr[], int n) {             // Max Heap Construction
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}


void heapSort(int arr[], int n) {                 // Sort The Array in Ascending Order
    buildMaxHeap(arr, n);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main() {
    // int n = 5;
    // int arr[5] = {10, 15, 50, 4, 20}; 

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    heapSort(arr, n);

    cout << "Sorted array: ";
    for (int num : arr) 
        cout << num << " ";
    cout << endl;

    return 0;
}

// TIME  COMPLEXITY  : O(n log n)
// SPACE COMPLEXITY : O(1)