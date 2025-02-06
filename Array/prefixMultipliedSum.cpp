#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//INPUTS - 2, 3, 5, 4, 6, 1
//INPUTS - 0 to 2
//INPUTS - 2 to 3
//OUPUTS - 23
//OUPUTS - 13


//OPTIMIZED APPROACH
void preCalulate(int n, int arr[], int inputs){
    int count = 0;
    int store[n];
    for(int i = 0; i < n; i++){
        store[i] = 0;
        for(int j = i ; j < n ; j++){
            store[i] = store[i] + arr[j] * (j  - i + 1);
        }
    }

    for(int i = 0 ; i < inputs ; i++){
        int start, end;
        cout<<"Enter the starting and ending position : ";
        cin >> start >> end;

        int sum = store[start];
        int count = n - start;
        for(int j = n-1; j > end; j--){
            sum = sum - (arr[j] * ( count ));
            count--;
        }
        
        cout << "Sum of elements from position " << start  << " to " << end  << " : " << sum << endl;
    }
}


int main() {
    int n=6;
    int arr[6]={2, 3, 5, 4, 6, 1};
    int inputs=3;

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int value;
    //     cin >> value;
    //     arr[i] = value;
    // }

    // cout << "\n Enter the Total Number of Input of Ranges: ";
    // int inputs;
    // cin >> inputs;

    preCalulate(n, arr, inputs);
    return 0;
}

PRE-COMPUTATION TIME COMPLEXITY - O(n)
ACTUAL COMPLEXITY TO RESPOND TO THE QUERIES AFTER COMPUTATION - BEST CASE: O(1), WORST CASE:
OVERALL TIME COMPLEXITY - O(n + inputs)
SPACE COMPLEXITY - O(n)

