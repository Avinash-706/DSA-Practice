#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < n1) {
        arr[k++] = left[i++];
    }

    while (j < n2) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int n, int arr[], int l, int r){
    if(r > l){
        int m = l + ( r - l ) / 2;
        mergeSort(n, arr, l, m);
        mergeSort(n, arr, m+1, r);
        merge(arr, l, m, r);
    }
}


int main() {
    // int n = 5;
    // int arr[5] = {10, 5, 30, 15, 7};

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

    mergeSort(n, arr, 0, n-1);
    for(int i : arr)     cout << i << " ";
    return 0;
}

// TIME  COMPLEXITY  - O(n log n), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(n log n), where 'O(n) -> (due to auxiliary arrays)' + 'O(log n) -> (call stack)', where 'n' is the size of the array
 
