#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//UNOPTIMIZED APPROACH
int majorityElements(int n, int arr[]){
    for(int i = 0 ; i < n ; i++){
        int count=1;
        for(int j = i + 1 ; j < n ; j++)    if(arr[i] == arr[j])    count++;
        if(count > n/2) return i;
    }
    return -1;
}


int main() {
    int n=8;
    int arr[8]={8, 7, 6, 8, 6, 6, 6, 6};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    cout<<"Majority Element : "<<arr[majorityElements(n, arr)];
    return 0;
}

//TIME COMPLEXITY - O(n²), where n is the size of the array.
//SPACE COMPLEXITY - O(1)