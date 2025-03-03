#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int partition(int arr[], int l, int h) {
    int pivot = arr[h];  
    int i = l - 1;
    for (int j = l; j <= h - 1; j++) {  
        if (arr[j] < pivot) { 
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}


int kthSmallestLomutoPartition(int n, int arr[], int k) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int p = partition(arr, lo, hi);
        if (p == k - 1)    return arr[p]; 
        else if (p > k - 1)    hi = p - 1;
        else    lo = p + 1;
    }
    return -1;
}


int main() {
    // int n = 5;
    // int arr[5] = {30, 20, 5, 10 , 8};
    // int k = 3;

    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "\nEnter the Kth Smallest element required : ";
    cin >> k;


    cout << endl << k << "th Smallest Element: " << kthSmallestLomutoPartition(n, arr, k);
    return 0;
}

// TIME COMPLEXITY  - Best Case & Average Case: O(n) | Worst Case : O(n²), where 'n' is the size of the array
//SPACE COMPLEXITY  - O(1) - Iterative & In-Place    | Recusion Call Stack  -  Best Case : O(log n) | Worst Case : O(n)
//REASON            - First sorts both partitions, leading to O(n log n) on average. However, only recurses on one partition
//                    (either left or right), reducing the total work.