#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//UNOPTIMIZED APPROACH
void selectionSort(int n, int arr[]){
    int temp[n];
    for(int i = 0 ; i < n ; i++){
        int minIndex = 0;
        for(int j = 1 ; j < n ; j++)    if(arr[j] < arr[minIndex])    minIndex = j;
        temp[i] = arr[minIndex];
        arr[minIndex] = INT_MAX; 
    }

    for(int i = 0 ; i < n ; i++)    arr[i] = temp[i];
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
//SPACE COMPLEXITy  - O(n) , where 'n' is the size of the array