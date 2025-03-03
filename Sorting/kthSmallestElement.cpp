#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//UNOPTIMIZED APPROACH
void kthSmallestElement(int n, int arr[]){
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
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


    kthSmallestElement(n, arr);
    cout << "Sorted Array : ";
    for(int i : arr)    cout << i << " ";
    cout << endl << k << "th Smallest Element: " << arr[k-1];
    return 0;
}

// TIME COMPLEXITY  - O(n²), where 'n' is the size of the array
//SPACE COMPLEXITY  - O(1)