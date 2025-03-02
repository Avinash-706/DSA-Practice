#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN   - 10, 80, 30, 90, 40, 50, 70
// OUT  - 10  30  40  50  70  80  90


int lomutoPartition(int n, int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j = l ; j <= h - 1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i + 1;  
}

void quickSort(int n, int arr[], int l, int h){
    if(l < h){
        int partition = lomutoPartition(n, arr, l, h);
        quickSort(n, arr, l, partition - 1);
        quickSort(n, arr, partition , h);
    }
}


int main() {
    // int n = 7;
    // int arr[7] = {10, 80, 30, 90, 40, 50, 70};

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

    quickSort(n, arr, 0, n-1);
    for(int i : arr)    cout << i << " ";
    return 0;

}

// TIME  COMPLEXITY  - BEST CASE & AVERAGE CASE : O(n log n) | WORST CASE : O(n²), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(1), since In-Place Sorting |  O(log n), recursion stack calls