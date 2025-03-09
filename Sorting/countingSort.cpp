#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


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
    int maxValue = 0;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxValue = max(maxValue, arr[i]); 
    }

    countingSort(n, arr, maxValue + 1); 

    countingSort(n, arr, k);
    cout << "\nArray After Counting Sort : ";
    for(int i = 0 ; i < n ; i++)    cout << arr[i] << " ";
    return 0;
}

//TIME COMPLEXITY - O(n + k), where