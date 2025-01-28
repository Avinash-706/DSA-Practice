// INPUT -   1 2 3 4 5
// OUTPUT-   3 4 5 1 2

//OPTIMIZED APPROACH -- REVERSAL ALGORITHM
#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

void leftRotation(int size, int rotation, int arr[]){
    
    reverse(arr, arr + rotation );
    reverse(arr + rotation, arr + size);
    reverse(arr, arr + size);

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

    leftRotation(size, rotation, arr);

    cout<<"Left Rotated Array : ";
    for(int i=0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// TIME COMPLEXITY: O(n), where 'n' is the size of the array.  
// SPACE COMPLEXITY: O(1)
