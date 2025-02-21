#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int sumPages(int arr[], int a, int b){
    int sum=0;
    for(int i = a ; i <= b ; i++){
        sum += arr[i];
    }
    return sum;

}


int allocateMinimumPages(int n, int arr[], int k){
    if(k==1)    return sumPages(arr, 0, n-1);
    if(n==1)    return arr[0];

}


int main() {
    // int n = 8;
    // int arr[8] = {10, 5, 30, 1, 2, 5, 10, 10};
    // int k = 3;
    int n=1;
    int arr[1]={10};
    int k=2;


    // int n, k;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements of the array: ";
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }
    // cout << "\nEnter the number of student: ";
    // cin >> k;

    cout<<allocateMinimumPages(n, arr, k);
    return 0;
}