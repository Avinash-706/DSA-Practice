#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// 3, 0, 1, 0, 4, 0 2
// 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

//UNOPTIMIZED APPROACH
int rainWater(int n, int arr[]){
    int capacity = 0;

    for(int i = 1 ; i < n - 1 ; i++){

        int left_max = arr[i];
        for(int j = 0 ; j < i ; j++){
            left_max = max(left_max, arr[j]);
        }

        int right_max = arr[i];
        for(int j = i + 1 ; j < n ; j++){
            right_max = max(right_max, arr[j]);
        }

        capacity = capacity + min(left_max, right_max) - arr[i];
    }
    return capacity;

}


int main() {
    // int n=7;
    // int arr[7]={3, 0, 1, 0, 4, 0, 2};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << "CAPACITY TO STORE WATER: " << rainWater(n, arr);
    return 0;
}

// TIME COMPLEXITY : O(n²)
// SPACE COMPLEXITY : O(1)