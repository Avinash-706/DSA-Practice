#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void compute(int n, int arr[], int range[]){
    int l = 0, mid = 0 , h = n - 1;
    while(mid >= h){
        if(arr[l] <= range[0]){
            swap(arr[l], arr[mid]);
            mid++;
            l++;
        }
        else if(arr[mid] > range[0] && arr[mid] < range[1])    mid++;
        else{
            swap(arr[mid], arr[h]);
            h--;
        }
   }
   
}


int main() {
    int n = 7;
    int arr[7] = {10, 5, 6, 3, 20, 9, 40};
    int range[2] = {5, 10};

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

    compute(n, arr, range);
    for(int i : arr)    cout << i << " ";
    return 0;
}