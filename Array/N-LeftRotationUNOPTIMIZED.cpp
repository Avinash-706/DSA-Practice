// INPUT -   1 2 3 4 5
// OUTPUT-   3 4 5 1 2

//UNOPTIMIZED APPROACH
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void leftRotation(int size, int arr[]){
    int first=arr[0];
    for(int i=0; i < size ; i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=first;
}

int main() {
    // int size=5, rotation=2;
    // int arr[size]={1,2,3,4,5};

    int size, rotation;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        int input;
        cin>>input;
        arr[i]=input;
    }
    cout<<"Enter the number of Left Rotation of this array: ";
    cin>>rotation;

    for(int i=0; i<rotation ; i++) leftRotation(size, arr);

    cout<<"Left Rotated Array : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}