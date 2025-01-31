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

void rainWater(int n, int arr[]){
    int max=arr[0];
    int sec_max=arr[0];
    int capacity=0;
    for(int i=0; i<n; i++){
        if(arr[i] < arr[i+1])
            int capacity = capacity + (max - arr[i])
        }

    }

}


int main() {
    int n=7;
    int arr[7]={3, 0, 1, 0, 4, 0, 2};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    rainWater(n, arr);
    return 0;
}