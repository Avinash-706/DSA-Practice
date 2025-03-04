#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// PROBLEM STATEMENT:
// Minimize the difference between the maximum and minimum number of chocolates received by any two children

// IN  - 3, 4, 1, 9, 56, 7, 9, 12
// IN  - 5
// OUT - 6


int chocolateDistributionProblem(int n, int arr[], int m){
    if (m > n) {
        cout << "Number of children is greater than the number of chocolate packets." << endl;
        return -1;
    }

    sort(arr, arr+n);
    
    int minDiff = INT_MAX;
    for(int i = 0 ; i <= n - m ; i++){
        minDiff = min(minDiff, arr[i + m - 1] - arr[i]);
    }
    return minDiff;
}

int main() {
    // int n = 7;
    // int arr[7] = {7, 3, 2, 4, 9, 12, 56}; //packets of chocolate
    // int m = 3; //children among which we need to distribute the chocolate
 
    int n, m;
    cout << "Enter the number of the chocolate packets: ";
    cin >> n;
    int arr[n];
    cout << "Enter the number of chocolates in each packets: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout <<"\nEnter the number of childrens: ";
    cin >> m;

    cout << "\nThe Minimum Difference Between Maximum Chocolate Packet and Minimum Chocolate Packet : " << chocolateDistributionProblem(n, arr, m) << endl;
    return 0;
}