#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN -  1, 8, 30, -5, 20, 7
// IN -  3
// OUT - 45

// SLIDING WINDOW  -  OPTIMIZED APPROACH
int maxSumofKconsecutivesElements(int n, int k, int arr[]){
    int maxSum=0;
    for(int i=0; i < k ; i++){
        maxSum += arr[i];
    }
    int checkSum = maxSum;
    for(int i = k ; i < n  ; i++){
        checkSum = checkSum + arr[i] - arr[i - k];
        maxSum = max( maxSum, checkSum);
    }
    return maxSum;
}


int main() {
    // int n=5;
    // int k=2;
    // int arr[5]={5 , -10, 6, 90, 3};

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


// TIME COMPLEXITY: O(n), where 'n' is size of the array.  
// SPACE COMPLEXITY: O(1)
