#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//CONDITIONS:
// 1. Contiguous allocation of elements is only position.
// 2. Atleast each student must get one element.
// 3. Minimize the maximum pages allocated.

//OPTIMIZED APPROACH
int sumPages(int arr[], int a, int b){
    int sum=0;
    for(int i = a ; i <= b ; i++){
        sum += arr[i];
    }
    return sum;

}


int allocateMinimumPages(int arr[], int n, int k){
    if(k==1)    return sumPages(arr, 0, n-1);
    if(n==1)    return arr[0];
    int res= INT_MAX;
    for(int i = 0 ; i < n ; i++){
        res = min(res, max(allocateMinimumPages(arr, i, k-1), sumPages(arr, i, n-1 )));
    }
    return res;

}


int main() {
    // int n = 8;
    // int arr[8] = {10, 5, 30, 1, 2, 5, 10, 10};
    // int k = 3;


    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "\nEnter the number of student: ";
    cin >> k;

    cout<<allocateMinimumPages(arr, n, k);
    return 0;
}

// TIME COMPLEXITY - O(n^(k+1)), where 'n' is the size of the array, 'k' is the number of students
//SPACE COMPLEXITY - O(k)  -> The recursion stack depth is k.