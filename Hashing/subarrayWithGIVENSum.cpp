#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool subarrayWithZeroSum(int n, int sum, int arr[]){
    unordered_set <int> h;
    int preSum = 0;
    for(int i = 0 ; i < n ; i++){
        preSum += arr[i];
        if(preSum == sum)    return true;
        if(h.find(preSum - sum) != h.end())    return true;
        h.insert(preSum);
    }
    return false;

}


int main() {
    // int n = 6;
    // int arr[6] = {5, 8, 6, 13, 3, -1};
    // int sum = 22;

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

    cout << endl << "The SubArray With Given Sum : " << (subarrayWithZeroSum(n, sum, arr) ? "PRESENT" : "NOT PRESENT");
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the size of the array  
// SPACE COMPLEXITY  : O(n), an unordered_set -> store prefix sums  
