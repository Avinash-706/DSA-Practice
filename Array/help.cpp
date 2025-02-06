#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void compute(int n, int arr[]){
   
}


int main() {
    int n=7;
    int arr[7]={2, 8, 3, 9, 6, 5, 4};
    int inputs=3;

    int store[n];
    for(int i = 0 ; i < n ; i++){
        store[i]= store[i-1] + arr[i];
    }
    
    for(int i=0; i<n ; i++){
        cout<<store[i]<< "  ";
    }

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    compute(n, arr);
    return 0;
}