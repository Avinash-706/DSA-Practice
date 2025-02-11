#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN  - 100, 500 , 10, 20, 30, 40, 50
//IN  - 500
//OUT - 1 

int searchInSortedRotatedArray(int n, int arr[], int number){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high) / 2;
        if( arr[mid] == number)    return mid;

        if(arr[low] <= arr[mid]){
            if( number >= arr[low] && number < arr[mid] )    high = mid - 1;
            else    low = mid + 1;
        }
        else{
            if( number > arr[mid] && number <= arr[high] )    low = mid + 1;
            else    high = mid - 1;
        }
    }
    return -1;
}


int main() {
    // int n = 7;
    // int arr[7] = {100, 500 , 10, 20, 30, 40, 50};
    // int number = 500;

    int n, number;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the Sorted Rotated order : ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "\nEnter the Number to search from the Given Number: ";
    cin >> number;

    cout << "The Position of this Number is: " << searchInSortedRotatedArray(n, arr, number);
    return 0;
}

//TIME COMPLEXITY  - O(log n), where 'n' is the size of the array
//SPACE COMPLEXITY - O(1)
