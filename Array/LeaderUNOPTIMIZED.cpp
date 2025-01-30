#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

void leader(int n, int arr[]){
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = i+1; j < n; j++){
            if(arr[i] <= arr[j]){
                flag = true;
                break;
            }
        }
        if(flag == false) cout << arr[i] << " ";
    }
}

int main() {
    // int n=7;
    // int arr[7]={7,10,4,3,6,5,2};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    leader(n, arr);
    return 0;
}