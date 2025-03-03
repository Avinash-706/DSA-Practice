#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//UNOPTIMIZED APPROACH
int minDifferenceInArray(int n, int arr[]){
    int minDiff = INT_MAX;
    for(int i = 0 ; i < n ; i++)    for(int j = i + 1; j < n ; j++)    minDiff = min(minDiff, abs(arr[j] - arr[i]));
    return minDiff;
}


int main() {
    // int n = 4;
    // int arr[4] = {2, 10, 8, 7};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    
    cout<< "Minimum Difference Within the Array is: "<< minDifferenceInArray(n, arr);
    return 0;
}

// TIME COMPLEXITY   - O(n²), where 'n' is the size of the array
//SPACE COMPLEXITY  - O(1)