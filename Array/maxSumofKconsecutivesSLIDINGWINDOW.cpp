#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN -  1, 8, 30, -5, 20, 7
// OUT - 45

// UNOPTIMIZED APPROACH
int maxSumofKconsecutivesElements(int n, int k, int arr[]){
    int maxSum=0;
    for(int i = 0 ; i <= n - k  ; i++){
        int checkSum = 0;
        for(int j = i ; j < k + i ; j++ ){
            checkSum += arr[j];
        }
        maxSum = max( maxSum, checkSum);
        // cout<< endl;
    }
    return maxSum;
}


int main() {
    // int n=5;
    // int k=2;
    // int arr[5]={5, -10, 6, 90, 3};

    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << " Enter the K consecutive Elements: ";
    cin >> k;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << maxSumofKconsecutivesElements(n, k, arr);
    return 0;
}


// TIME COMPLEXITY: O(n²), where 'n' is size of the array.  
// SPACE COMPLEXITY: O(1)
