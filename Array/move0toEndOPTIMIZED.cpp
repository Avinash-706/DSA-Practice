#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//OPTIMIZED APPROACH
int moveZero(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    moveZero(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << "  ";
    }
    return 0;
}

// TIME COMPLEXITY: O(n), where 'n' is size of the array.  
// SPACE COMPLEXITY: O(1)
