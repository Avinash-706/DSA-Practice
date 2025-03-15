#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// OPTIMIZED APPROACH
int countDistinctElementOPTIMIZED(int n, int arr[]){
    // // WAY 1
    // unordered_set <int> s;
    // for(int i = 0 ; i < n ; i++){
    //     s.insert(arr[i]);
    // }

    // //WAY2
    unordered_set <int> s(arr, arr+n);

    return s.size();
}


int main() {
    // int n = 5;
    // int arr[5] = {2, 10, 2, 8, 8};

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

    cout << "The Count of Distinct Elements : " << countDistinctElementOPTIMIZED(n, arr);
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the size of the array  
// SPACE COMPLEXITY  : O(n), since an unordered_set is used to store distinct elements  