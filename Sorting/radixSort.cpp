#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void countingSort( int n, int arr[], int exp) {
    int count[10] = {0}, output[n];

    for (int i = 0; i < n; i++)
        count[ (arr[i]/exp) % 10 ]++;

    for (int i = 1; i < 10; i++)
        count[i] = count[i - 1] + count[i];

    for (int i = n - 1; i >= 0; i--) {
        output[count[ (arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}


void radixSort(int n, int arr[]){
    int mx=arr[0];
    for(int i = 1 ; i < n ; i++){
        mx = max(mx, arr[i]);
    }

    for(int i = 1 ; mx / i > 0 ; i = i * 10){
        countingSort(n, arr, i);
    }
}


int main() {
    // int n = 6;
    // int arr[6] = {319, 212, 6, 8, 100, 50};

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

    radixSort(n, arr);

    cout << "Sorted Array: ";
    for(int i : arr)    cout << i << " ";
    return 0;
}

// TIME  COMPLEXITY  : O(n log₁₀(mx)), where 'n' is the number of elements and 'mx' is the maximum element in the array  
// SPACE COMPLEXITY : O(n), due to the additional output[] array used in counting sort  
