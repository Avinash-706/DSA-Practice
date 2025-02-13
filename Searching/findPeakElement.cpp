#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN  - 10, 20, 15, 5, 23, 90, 67
//OUT - 20 OR 90

int peakElement(int n, int arr[]){
    
    int low=0, high = n-1;
    
    while( low <= high){
        int mid = (high + low) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n-1 || arr[mid + 1] <= arr[mid]))    return mid;
        if (mid > 0 && arr[mid - 1] >= arr[mid])    high = mid - 1;
        else    low = mid + 1;
    }

    return -1;
}


int main() {
    int n = 5;
    int arr[5] = {5, 10, 20, 10, 7};

    // int n, number;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements in the increasing order ( Note: sorted order): ";
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    cout <<"The of the Peak Element is " << arr[peakElement(n, arr)];
    return 0;
}

//TIME COMPLEXITY  - O(log n), where 'n' is the size of the array
//SPACE COMPLEXITY - O(1)