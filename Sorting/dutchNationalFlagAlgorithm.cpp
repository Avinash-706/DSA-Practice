#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// DUTCH NATIONAL FLAG ALGORITHM
void dutchNationalFlagAlgorithm(int n , int arr[]){

    int l = 0, h = n - 1, mid = 0;
    while(mid <= h){
        if(arr[mid] == 0){
            swap(arr[mid], arr[l]);
            l++;
            mid++;
        }
        else if(arr[mid] == 1)    mid++;
        else{
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}


int main() {
    // int n = 6;
    // int arr[6] = {0, 1, 0, 2, 1, 2}; 

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements(Note: Only Enter 0, 1 and 2): ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    dutchNationalFlagAlgorithm(n, arr);
    for(int i : arr)    cout << i << " ";
    return 0;
}

// TIME  COMPLEXITY  - O(n), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(1)