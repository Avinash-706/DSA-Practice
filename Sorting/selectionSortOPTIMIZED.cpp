#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//OPTIMIZED APPROACH - IN-PLACE ALGORITHM
void selectionSort(int n, int arr[]){
    for(int i = 0 ; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1 ; j < n ; j++)    if(arr[j] < arr[minIndex])    minIndex = j;
        swap(arr[i], arr[minIndex]);
    }
}


int main() {
    // int n = 6;
    // int arr[6] = {10, 5, 8, 20, 2, 18};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    selectionSort(n, arr);

    for(int i : arr)    cout << i << " ";
    return 0;
}

//TIME  COMPLEXITY  - O(n²), where 'n' is the size of the array
//SPACE COMPLEXITy  - O(1)