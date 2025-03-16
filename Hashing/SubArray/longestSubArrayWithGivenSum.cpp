#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int longestSubArrayWithGivenSum(int n, int sum, int arr[]){
    unordered_map <int, int> h;
    int preSum = 0, maxLen = 0;
    for(int i = 0 ; i < n ; i++){
        preSum += arr[i];
        if(preSum == sum)    maxLen = i + 1;
        if(h.find(preSum)      == h.end())    h.insert({preSum, i});
        if(h.find(preSum -sum) != h.end())    maxLen = max(maxLen, i - h[preSum - sum]);
    }
    return maxLen;
}

int main() {
    // int n = 8;
    // int arr[8] = {3, 1, 0, 1, 8, 2, 3, 6};
    // int sum = 5;

    int n, sum;
    cout << "Enter the size of the array (NOTE: Can include positive and negative integers or zero): ";
    cin >> n;
    int arr[n];
    cout << endl << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << endl << "Enter the Sum of Any CONTINUOUS(subarray) NUMBERS you want : ";
    cin >> sum;

    cout << endl << "The Longest SubArray With Given Sum : " << longestSubArrayWithGivenSum(n, sum, arr);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the size of the array  
// SPACE COMPLEXITY  : O(n), an unordered_map -> stores prefix sums  
