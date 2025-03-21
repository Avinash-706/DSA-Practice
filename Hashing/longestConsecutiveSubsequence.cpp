#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int compute(int n, int arr[]){
    sort(arr, arr+n);
    int maxLen = 0;
    int len = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1] + 1 )    len++;
        else{
            len  = 0;
            maxLen = max(maxLen , len);
        }
    }
    return maxLen;
    
}


int main() {
    int n = 6;
    int arr[6] = {1, 9, 3, 4, 2, 20};

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

    cout << compute(n, arr);
    return 0;
}