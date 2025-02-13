#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//INPUT MUST BE IN SORTED ORDER --
bool compute(int n, int arr[], int number){
    int low=0, high = n-1;
    while(low < high){
        int sum = arr[low] + arr[high];
        if      ( sum == number)    return true;
        else if ( sum < number )    low ++;
        else    high--; 
    }
    return false;
}


int main() {
    // int n = 8;
    // int arr[8] = {2, 4, 8, 9, 11, 12, 20, 30};
    // int number = 23;

    int n, number;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the increasing order ( Note: sorted order): ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "\nEnter a Sum of Any Two Number from the Given Numbers: ";
    cin >> number;

    cout << (compute(n, arr, number) ? "True" : "False"); 
    return 0;
}

//TIME COMPLEXITY  - O(n), where 'n' is the size of the array
//SPACE COMPLEXITY - O(1)