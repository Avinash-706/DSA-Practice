#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int main() {
    // int n = 4;
    // int arr[4] = {5, 7, 20, 10};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    
    cout << endl << "-- SORT IN INCREASING ORDER --" << endl;
    sort(arr, arr+n); //sort in increasing order
    for(int i : arr) cout << i << " ";

    cout << endl << "-- SORT IN DECREASING ORDER --" << endl;
    sort(arr, arr+n, greater<int>()); //sort in decreasing order
    for(int i : arr) cout << i << " ";

    return 0;
}