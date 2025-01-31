#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//2, 3, -8, 7, -1, 2, 3
//11

//OPTIMIZED APPROACH
int maximumSubarraySum(int n, int arr[]){
    int maxSum = arr[0];
    int curr = arr[0];
    for(int i = 1 ; i < n ; i++){
        curr += arr[i];
        if(arr[i] > curr){
            curr = arr[i];
        } 
        maxSum=max(maxSum, curr);
        
    }
    return maxSum;
}


int main() {
    // int n=7;
    // int arr[7]={2, 3, -8, 7, -1, 2, 3};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout<<"SUM OF MAXIMUM SUB ARRAY: "<<maximumSubarraySum(n, arr);
    return 0;
}

// TIME COMPLEXITY: O(n), where 'n' is size of the array.  
// SPACE COMPLEXITY: O(1)
