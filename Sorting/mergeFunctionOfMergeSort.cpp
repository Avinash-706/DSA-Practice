#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void mergeFunctionOfMergeSort(int n, int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;     
    int n2 = high - mid;    

    vector<int> left(n1), right(n2);  

    for (int i = 0; i < n1; i++) left[i] = arr[low + i];
    for (int i = 0; i < n2; i++) right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) arr[k++] = left[i++];
        else arr[k++] = right[j++];
    }

    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];
}


int main() {
    int n = 5;
    int arr[5] = {10, 15, 20, 11, 30};
    int low = 0;
    int mid = 2;
    int high = 4;

    mergeFunctionOfMergeSort(n, arr, low, mid, high);

    for(int i : arr)    cout << i << " ";
    return 0;
}

// TIME  COMPLEXITY  - O(n), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(n), where 'n' is the size of the array