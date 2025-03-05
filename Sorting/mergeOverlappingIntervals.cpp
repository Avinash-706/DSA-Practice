#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void mergeOverlappingIntervals(int n, int arr[][2]){

    for(int i = 0; i < n - 1; i++) {
        bool isSwap = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j][0] > arr[j+1][0]) {  
                swap(arr[j], arr[j+1]);    
                isSwap = true;
            }
        }
        if (!isSwap)    break;  
    }

    for(int i = 0 ; i < n ; i++) {
        cout << "{" << arr[i][0] << "," << arr[i][1] << "} ";
    }

    int merged[n][2], index = 0;
    merged[index][0] = arr[0][0];
    merged[index][1] = arr[0][1];

    for(int i = 1; i < n; i++) {
        if(arr[i][0] <= merged[index][1]) {
            merged[index][1] = max(merged[index][1], arr[i][1]);
        } else {
            index++;
            merged[index][0] = arr[i][0];
            merged[index][1] = arr[i][1];
        }
    }

    cout << "\nMerged OverLapping Intervals: " << endl;
    for(int i = 0 ; i <= index ; i++) {
        cout << "{" << merged[i][0] << "," << merged[i][1] << "} ";
    }

}


int main() {
    int n = 5;
    int k = 2;
    int arr[n][2] = {{7,9} , {6,10} , {4,5} , {1,3} , {2,4}};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements: ";
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    mergeOverlappingIntervals(n, arr);
    return 0;
}