#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
#include <math.h>
using namespace std;

//IN - 10, 20, 30, 40, 50, 60
//IN - 20
//OUT - 1

int binarySearch(int n, int arr[], int number){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == number) return mid;
        else if( arr[mid] > number ) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}


int main() {
    // int n = 6;
    // int arr[6] = {10, 20, 30, 40, 50, 60};
    // int number = 20;

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
    cout<<"\nEnter the Number to search from the Given Number: ";
    cin >> number;

    cout << "The Position of this Number is: " << binarySearch(n, arr, number);
    return 0;
}

// TIME COMPLEXITY: O(log n), where 'n' is the size of the array
// SPACE COMPLEXITY: O(1)