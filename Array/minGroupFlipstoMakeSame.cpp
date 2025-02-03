#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// in - 1 1 0 0 0 1
// out - 2 -> 4
void minGroupFlips(int n, bool arr[]){
    for(int i = 1 ; i < n ; i++){
        if( arr[i] != arr[i-1]){
            if(arr[i] != arr[0]){
                cout << i << " -> ";
            }
            else cout << i-1 << endl;
        }
    }
    if(arr[n-1] != arr[0]){
        cout<< n-1 << endl;
    }
}


int main() {
    int n=6;
    bool arr[6]={1, 1, 1, 1, 1, 0};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    minGroupFlips(n, arr);
    // for(int i = 0 ; i < n ; i++){
    //     cout << arr[i] << "  ";
    // }
    return 0;
}

// TIME COMPLEXITY: O(n), where 'n' is size of the array.  
// SPACE COMPLEXITY: O(1)
