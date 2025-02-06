#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//INPUTS - 2, 8, 3, 9, 6, 5, 4
//INPUTS - 0 to 2
//INPUTS - 1 to 3
//OUPUTS - 13
//OUPUTS - 20


//OPTIMIZED APPROACH
void print(int n, int arr[], int start, int end, int store[]){
    int sum = (start == 0) ? store[end] : store[end] - store[start - 1];
    cout << "Sum of elements from position " << start + 1 << " to " << end + 1 << " : " << sum << endl;
}


void input(int n, int inputs, int arr[], int store[]){

    for(int i = 0 ; i < inputs ; i++){
        int start, end;
        cout<<"Enter the starting and ending position : ";
        cin >> start >> end ;
        print(n, arr, start, end, store);
    }

    // print(n, arr, 0, 2, store);
    // print(n, arr, 1, 3, store);
}


void preCalulate(int n, int arr[], int inputs){
    int count = 0;
    int store[n];
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i ; j < n ; j++){
            store[i] = store[i] + arr[j] * (count);
        }
    }
  
    input(n, inputs, arr, store);
}


int main() {
    int n=6;
    int arr[6]={2, 3, 5, 4, 6, 1};
    int inputs=3;

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int value;
    //     cin >> value;
    //     arr[i] = value;
    // }

    // cout << "\n Enter the Total Number of Input of Ranges: ";
    // int inputs;
    // cin >> inputs;

    preCalulate(n, arr, inputs);
    return 0;
}

//ACTUAL COMPLEXITY - O(1)
//PRE-COMPUTATION TIME COMPLEXITY - O(n)
//OVERALL TIME COMPLEXITY - O(n + inputs)
//SPACE COMPLEXITY - O(n)

