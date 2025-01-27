// IN-  1 2 3 4 5
// OUT- 2 3 4 5 1

#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void leftRotation(int n, int arr[]){
    int first=arr[0];
    for(int i=0; i < n ; i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
}

int main() {
    // int n=5;
    // int arr[n]={1,2,3,4,5};

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int input;
        cin>>input;
        arr[i]=input;
    }
    leftRotation(n, arr);

    cout<<"Left Rotated Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

