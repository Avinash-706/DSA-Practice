#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN   - 10, 80, 30, 90, 40, 50, 70
// IN   - 5
// OUT  - 10  30  40  50  80  70  90


int HoarePartition(int n, int arr[], int l, int h){
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while(true){
        do{
            i++;
        }
        while( arr[i] < pivot );
        do{
            j--;
        }
        while( arr[j] > pivot );
        if( i >= j )    return j;
        swap( arr[i], arr[j] );    
    }
}


int main() {
    // int n = 8;
    // int arr[8] = {5, 3, 8, 4, 2, 7, 1 , 10};

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

    cout << "Pivot Element is: " << arr[HoarePartition(n, arr, 0, n-1)] << endl;
    for(int i : arr)    cout << i << " ";
    return 0;

}

// TIME  COMPLEXITY  - O(n), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(1)