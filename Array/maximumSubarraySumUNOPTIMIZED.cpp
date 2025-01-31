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

int maximumSubarraySum(int n, int arr[]){
    int maxSum=0;
    for(int i = 0 ; i < n ; i++){
        int sum=0;
        for(int j = i ; j < n ; j++){
            sum = sum + arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}


int main() {
    int n=7;
    int arr[7]={2, 3, -8, 7, -1, 2, 3};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    cout<<"SUM OF MAXIMUM SUB ARRAY: "<<maximumSubarraySum(n, arr);
    return 0;
}

