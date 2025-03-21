#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//UNOPTIMIZED APPROACH
int longestConsecutiveSubsequence(int n, int arr[]){
    if (n == 0)    return 0;  
    sort(arr, arr + n);
    int maxLen = 1, len = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])   continue;     //for duplicate
        if (arr[i] == arr[i - 1] + 1)   len++;
        else    len = 1;  
        maxLen = max(maxLen, len);
    }
    return maxLen;
}


int main() {
    // int n = 6;
    // int arr[6] = {1, 9, 3, 4, 2, 20};

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

    cout << "The Longest Consecutive Subsequence  : " << longestConsecutiveSubsequence(n, arr);
    return 0;
}

// TIME COMPLEXITY  - O(n log n), where 'n' is the size of the array
//SPACE COMPLEXITY  - O(1)