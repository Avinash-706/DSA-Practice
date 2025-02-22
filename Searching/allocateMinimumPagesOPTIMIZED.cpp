#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//CONDITIONS:
// 1. Contiguous allocation of elements is only position.
// 2. Atleast each student must get one element.
// 3. Minimize the maximum pages allocated.

//OPTIMIZED APPROACH
bool isFeasible(int arr[], int n, int k, int mid){

    int sum = 0, req=1;

    for(int i = 0 ; i < n ; i++){
        if(sum + arr[i] > mid){
            sum = arr[i];
            req++;
        }
        else    sum += arr[i];
    }
    return (req <= k);
}


int allocateMinimumPages(int arr[], int n, int k){

    int mx = 0, sum = 0;
    for(int i=0; i<n ; i++){
        mx   = max(arr[i], mx);
        sum += arr[0];
    }

    int low = mx, high = sum, res = 0;
    while(low <= high){
        int mid = (high + low)/2;
        if(isFeasible(arr, n, k, mid)){
            res = mid;
            high = mid - 1;
        }
        else    low = mid + 1;
    }
    return res;
}


int main() {
    // int n = 8;
    // int arr[8] = {10, 5, 30, 1, 2, 5, 10, 10};
    // int k = 3;


    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "\nEnter the number of student: ";
    cin >> k;

    cout<<allocateMinimumPages(arr, n, k);
    return 0;
}

// TIME COMPLEXITY - O(n log(sum - mx))), where 'n' is the size of the array, 'sum' is the sum of all the elements, 
//                                      , 'max' is the maximum element of the array.
//SPACE COMPLEXITY - O(1)