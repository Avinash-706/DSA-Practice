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


int HoarePartition(int n, int arr[], int l, int h){
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while(true){
        do{
            i++;
        }
        while( arr[i] < pivot );
        do{
            j--;
        }
        while( arr[j] > pivot );
        if( i >= j )    return j;
        swap( arr[i], arr[j] );    
    }
}


void quickSort(int n, int arr[], int l, int h){
    if(l < h){
        int partition = HoarePartition(n, arr, l, h);
        quickSort(n, arr, l, partition);
        quickSort(n, arr, partition + 1 , h);
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

// TIME  COMPLEXITY  - BEST CASE(Balanced Pivot) & AVERAGE CASE (Random Pivot) : O(n log n) | WORST CASE (Unbalanced Pivot) : O(n²), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(1), since In-Place Sorting |  recursion stack calls -> Best Case : O(log n) | Worst Case : O(n), where 'n' is the size of the array
