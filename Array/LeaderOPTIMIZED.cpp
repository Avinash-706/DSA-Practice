#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//OPTIMIZED APPROACH
void leader(int n, int arr[]){
    int current = arr[n-1];
    cout << current << "  ";
    for(int i = n-2; i >= 0; i--){
        if(arr[i] > current){
            current = arr[i];
            cout << current << "  ";
        }
    }
}

int main() {
    // int n=7;
    // int arr[7]={7,10,4,3,6,5,2};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    leader(n, arr);
    return 0;
}

// TIME COMPLEXITY: O(n)
// SPACE COMPLEXITY: O(1)