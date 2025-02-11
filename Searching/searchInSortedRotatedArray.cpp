#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int searchInSortedRotatedArray(int n, int arr[], int number){
    int low = 0, high = n-1;
    while(low <= high){
        if(arr[0] == number)    return 0;
        int mid = (low + high) / 2;
        if( arr[mid] == number)    return mid;

        if(arr[low] <= arr[mid]){
            if(number < arr[mid] && number >= arr[low]){

            }
        }
    }
}


int main() {
    int n = 7;
    int arr[7] = {100, 500 , 10, 20, 30, 40, 50};
    int number = 500;

    // int n, number;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements in the increasing order ( Note: sorted order): ";
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }
    // cout << "\nEnter the Number to search from the Given Number: ";
    // cin >> number;

    searchInSortedRotatedArray(n, arr);
    return 0;
}