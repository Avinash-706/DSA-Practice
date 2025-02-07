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

// #INCLUDED -> CORNER CASE INCLUDED -> 
// IN : 4, 2, -2
// OUT: TRUE, 4

// OPTIMIZED APPROACH

int equilibriumPoint(int n, int arr[]){

    int rs=0; //right side
    for(int i = 0 ; i < n ; i++){
        rs += arr[i];
    }

    int ls=0; //left side
    for(int i = 0 ; i < n ; i++){
        rs -= arr[i];
        if(rs == ls){
            return i;
        }
        ls += arr[i];
    }
    return -1;
   
}


int main() {
    int n=6;
    int arr[6]={3, 4, 8, -9, 20, 6};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

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
// SPACE COMPLEXITY: O(1)