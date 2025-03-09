#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN  - 1, 4, 4, 1, 0, 1, 1, 2
//OUT - 0 1 1 1 1 2 4 4

//UN-STABLE VERSION - COUNTING SORT
void countingSort(int n, int arr[], int k){
    int temp[k]={0};

    for(int i = 0 ; i < n ; i++){
        temp[arr[i]]++;
    }

    int j = 0;
    for(int i = 0 ; i < k ; i++){
        while(temp[i] > 0){
            arr[j++] = i;
            temp[i]--;
        }
    }
}



int main() {
    // int n = 8;
    // int arr[8] = {1, 4, 4, 1, 0, 1, 1, 2};
    // int k = 5;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; 
    int k = 0;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        k = max(k, arr[i]); 
    }

    countingSort(n, arr, k + 1); 

    cout << "\nArray After Counting Sort : ";
    for(int i = 0 ; i < n ; i++)    cout << arr[i] << " ";
    return 0;
}

// TIME  COMPLEXITY  : O(n + k), where 'n' is the number of elements and 'k' is the range of input values  
// SPACE COMPLEXITY : O(k), where 'k' is the range of input values
