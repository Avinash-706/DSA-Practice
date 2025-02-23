#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void insertionSort(int n, int arr[]){
    for(int i = 1 ; i < n ; i++){
        int key = arr[i]; 
        int j;
        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    } 
}


int main() {
    int n = 6;
    int arr[6] = {20, 5, 40, 60, 10, 30};

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

    insertionSort(n, arr);
    for(int i : arr)    cout << i << " ";
    return 0;
}