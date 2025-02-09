#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int binarySearch(int n, int arr[], int number, int low, int high) {

    if (low > high)    return -1;
    int mid = (low + high) / 2;
    
    if (arr[mid] == number)    return mid;
    else if (arr[mid] > number)    return binarySearch(n, arr, number, low, mid - 1);
    else    return binarySearch(n, arr, number, mid + 1, high);

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

    cout << "The Position of this Number is: " << binarySearch(n, arr, number,0, n-1);
    return 0;
}