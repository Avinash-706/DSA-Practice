#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN  - 2, 3, 4, 8, 9, 20, 40
//IN  - 32
//OUT - true

//OPTIMIZED APPROACH
bool compute(int n, int arr[], int tripletSum){
    for(int i = 0 ; i < n-2 ; i++){
        int low = i+1, high = n-1;
        while(low < high){
            int sum = arr[low] + arr[high];
            if      ( sum + arr[i] == tripletSum)    return true;
            else if ( sum + arr[i]  < tripletSum)    low ++;
            else    high--;
        }   
    }
    return false;
}


int main() {
    // int n = 6;
    // int arr[6] = {10, 30, 50, 70, 90, 110};
    // int tripletSum = 210;

    int n, tripletSum;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the increasing order ( Note: sorted order): ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "\nEnter the Sum of any 3 number search from the Given Number: ";
    cin >> tripletSum;

    cout << (compute(n, arr, tripletSum) ? "true" : "false");
    return 0;
}

//TIME COMPLEXITY  - O(n²), where 'n' is the size of the array
//SPACE COMPLEXITY - O(1)