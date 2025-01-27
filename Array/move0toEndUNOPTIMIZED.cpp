#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//UNOPTIMIZED APPROACH
int moveZero(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            for(int j=i+1; j<n ; j++){
                if(arr[j] != 0){
                    swap(arr[i], arr[j]);
                    j++;
                } 
            }
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

