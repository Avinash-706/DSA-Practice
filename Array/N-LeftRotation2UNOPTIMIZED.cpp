// INPUT -   1 2 3 4 5
// OUTPUT-   3 4 5 1 2

//UNOPTIMIZED APPROACH
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void leftRotation(int size, int rotation, int arr[], int temp[]){
    for(int i=0; i < size ; i++){
        if (i + rotation > size - 1) temp[i]=arr[i + rotation - size];
        else temp[i]=arr[i + rotation];
    }
}

int main() {
    // int size=5, rotation=2;
    // int arr[size]={1,2,3,4,5};

    int size, rotation;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for(int i=0; i < size; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "Enter the number of Left Rotation of this array: ";
    cin >> rotation;
    int temp[size];

    leftRotation(size, rotation, arr, temp);

    cout<<"Left Rotated Array : ";
    for(int i=0; i < size; i++){
        cout << temp[i] << " ";
    }
    return 0;
}

// TIME COMPLEXITY: O(size), where 'size' is the size of the array.  
// SPACE COMPLEXITY: O(size), where 'size' is the size of the array.
