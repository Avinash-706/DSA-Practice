#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//OPTIMIZED APPROACH : In the Best-Case -> O(n), as because the looping breaks after the first itteration itself.
void bubbleSort(int n, int arr[]){
    for(int i = 0 ; i < n - 1 ; i++){
        bool isSwap = false;
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false)    break;
    }   
}


int main() {
    // int n = 4;
    // int arr[4] = {2, 10, 8, 7};

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

    bubbleSort(n, arr);
    
    for(int i : arr)    cout << i << " ";
    return 0;
}

//TIME  COMPLEXITY  - O(n²), where 'n' is the size of the array
//SPACE COMPLEXITy  - O(1)