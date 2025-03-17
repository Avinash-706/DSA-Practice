#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int longestSubArrayWithEqualNumber0and1(int n, int sum, int arr[]){
    unordered_map <int, int> h;
    for(int i = 0 ; i < n ; i++)    if(arr[i] == 0)    arr[i] = -1;
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
    int n = 7;
    int arr[7] = {1, 0, 1, 1, 1, 0, 0};
    int sum = 0;

    int n, sum = 0;
    cout << "Enter the size of the array (NOTE: Can include positive and negative integers or zero): ";
    cin >> n;
    int arr[n];
    cout << endl << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }


    cout << endl << "The Longest SubArray With Given Sum : " << longestSubArrayWithEqualNumber0and1(n, sum, arr);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the size of the array  
// SPACE COMPLEXITY  : O(n), an unordered_map -> stores prefix sums  
