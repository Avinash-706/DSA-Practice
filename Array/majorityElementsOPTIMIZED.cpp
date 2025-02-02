#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN - 8, 7, 6, 8, 6, 6, 6, 6
// OUT - 6

//OPTIMIZED APPROACH
int majorityElements(int n, int arr[]){
    int res=0;
    int count=1;

    for(int i = 1 ; i < n ; i++){

        if (arr[res]==arr[i])   count++;
        else    count--;
        if (count == 0){
            count=1;
            res=i;
        }
    }

    count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[res] == arr[i]){
            count++;
        }
        if(count > n/2) return res;
    }
    return -1;
}


int main() {
    // int n=8;
    // int arr[8]={8, 7, 6, 8, 6, 6, 6, 6};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout<<"Majority Element : "<<arr[majorityElements(n, arr)];
    return 0;
}

//TIME COMPLEXITY - O(n²), where n is the size of the array.
//SPACE COMPLEXITY - O(1)