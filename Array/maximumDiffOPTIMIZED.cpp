#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN - {2, 3, 10, 6 ,4, 8, 1}
//OUT - 8

//OPTIMIZED APPROACH

int maxDifference(int n, int arr[]){
    int maxDiff = arr[1] - arr[0];
    int minVal = arr[0];
    for(int i = 1; i < n ; i++){
        maxDiff = max(maxDiff, arr[i] - minVal);
        minVal = min(minVal, arr[i]);
    }
    return maxDiff;
}


int main() {
    // int n=6;
    // int arr[6]={7, 9, 5, 6, 3, 2};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << "MAX DIFFERENCE: " << maxDifference(n, arr);
    return 0;
}

//TIME COMPLEXITY - O(n), where n is the size of the array.
//SPACE COMPLEXITY - O(1)