#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


// IN - 3, 4, 8, -9, 20, 6
// OUT- TRUE, 20

// NO CORNER CASE INCLUDED -> 
// IN : 4, 2, -2
// OUT: TRUE
// UPOPTIMIZED APPROACH

int equilibriumPoint(int n, int arr[]){

    int left[n], right[n];

    left[0] = arr[0];
    for(int i = 1 ; i < n ; i++){
        left[i] = left[i-1] + arr[i];
    }

    right[n-1] = arr[n-1];
    for(int i = n-2 ; i >= 0 ; i--){
        right[i] = right[i+1] + arr[i];
    }

    for(int i = 0 ; i < n-2 ; i++){
        if(left[i] == right[i+2]){
           return i+1;
        }
    }
    return -1;
    
}


int main() {
    // int n=3;
    // int arr[3]={4, 2, -2};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    int point = equilibriumPoint(n, arr);
    if(point == -1){
        cout << "No Equilibrium Point ";
    }
    else{
        cout << "The Equilibrium Point is : " << point << " , the value is : " << arr[point];
    }
    return 0;
}

// TIME COMPLEXITY: O(n), where 'n' is the size of the array
// SPACE COMPLEXITY: O(n), where 'n' is the size of the array