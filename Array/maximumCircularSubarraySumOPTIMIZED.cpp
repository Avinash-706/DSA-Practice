#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// 5, -2, 3, 4
// 12

//UNOPTIMIZED
int maximumCircularSubarraySum(int n, int arr[]){
    int result=arr[0];
    for(int i = 0 ; i < n ; i++){
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j = 1 ; j < n ; j++){
            int index = (i + j) % n;
            curr_sum += arr[index];
            curr_max = max(curr_max, curr_sum);
        }
        result = max(curr_max, result);
    }
    return result;
}

int main() {
    int n=4;
    int arr[4]={5, -2, 3, 4};
    
    
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    cout<<maximumCircularSubarraySum(n, arr);
    return 0;
}

//TIME COMPLEXITY - O(n²), where n is the size of the array.
//SPACE COMPLEXITY - O(1)