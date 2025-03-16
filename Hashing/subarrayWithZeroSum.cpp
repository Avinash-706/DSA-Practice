#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool subarrayWithZeroSum(int n, int arr[]){
    unordered_set <int> h;
    int preSum = 0;
    for(int i = 0 ; i < n ; i++){
        preSum += arr[i];
        if(h.find(preSum) != h.end())    return true;
        if(preSum == 0)    return true;
        h.insert(preSum);
    }
    return false;

}


int main() {
    // int n = 5;
    // int arr[5] = {3, -4, -1, 5, 6};

    int n;
    cout << "Enter the size of the array (NOTE: Can include positive and negative integers or zero): ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << "The SubArray With Zero Sum : " << (subarrayWithZeroSum(n, arr) ? "PRESENT" : "NOT PRESENT");
    return 0;
}