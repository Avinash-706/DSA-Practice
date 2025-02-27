#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void naivePartition(int n, int arr[], int p){
    int temp[n], index = 0;
    for(int i = 0; i < n ; i++)    if(arr[i] <= arr[p] && i != p)   temp[index++] = arr[i];
    temp[index++]=arr[p];
    for(int i = 0 ; i < n ; i++)    if(arr[i] > arr[p])    temp[index++] = arr[i];
    for(int i = 0 ; i < n ; i++)    arr[i] = temp[i];
}


int main() {
//     int n = 6;
//     int arr[6] = {3, 8, 6, 12, 10, 7};
//     int p = 5;

    int n, p;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << "\nEnter the index of the Element from where to partition: ";
    cin >> p;

    naivePartition(n, arr, p);
    for(int i : arr)    cout << i << " ";
    return 0;

}

// TIME  COMPLEXITY  - O(n), where 'n' is the size of the array
// SPACE COMPLEXITY  - O(n), where 'n' is the size of the array