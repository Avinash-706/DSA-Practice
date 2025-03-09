#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN  - 30, 40, 10, 80, 5, 12, 70
// IN  - 4
// OUT - 5, 10, 12, 30, 40, 70, 80 

void bucketSort(int n, int arr[], int k){
    int mx = arr[0];
    for(int i = 1; i < n ; i++)    mx = max(mx, arr[i]);   
    mx++; 

    vector<int> bucket[k];
    
    //store in each bucket
    for(int i = 0 ; i < n ; i++){
        int pos = (k*arr[i]) / mx;    // Compute bucket index for arr[i]
        bucket[pos].push_back(arr[i]);
    }
    
    //sort each bucket
    for(int i = 0 ; i < k ; i++)    sort(bucket[i].begin(), bucket[i].end());

    int index = 0;
    for(int i = 0 ; i < k ; i++)    for(int j = 0 ; j < bucket[i].size() ; j++)    arr[index++] = bucket[i][j];
}


int main() {
    // int n = 7;
    // int arr[7] = {30, 40, 10, 80, 5, 12, 70};
    // int k = 4;

    int n, k;
    cout << "\nEnter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    cout << "\nEnter the number of buckets (NOTE: k must be <= n): ";
    cin >> k;

    bucketSort(n, arr, k);
    cout << "\nSorted Array using Bucket Sort :  ";
    for(int i : arr)    cout << i << "  ";
    return 0;
}

// TIME  COMPLEXITY  : O(n + k)  (Best Case, Uniform Distribution), where 'n' is the size of the array, 'k' is the number of bucket
//                     O(n^2)    (Worst Case, All Elements in One Bucket), where 'n' is the size of the array, 'k' is the number of bucket  
// SPACE COMPLEXITY  : O(n + k),  due to extra buckets storing elements, where 'n' is the size of the array, 'k' is the number of bucket
