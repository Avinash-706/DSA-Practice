#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void frequency(int n, int arr[]){
    sort(arr, arr + n);
    int count = 1;
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i+1]) count++;
        else {
            cout << arr[i] << " | count : " << count << endl;
            count = 1;
        }
    }
}

int main() {
    // int n = 6;
    // int arr[6] = {10, 10 , 10 , 25 , 30 , 30};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    frequency(n, arr);
    return 0;
}

//TIME COMPLEXITY: O(n log n) (if sorting is needed) or O(n) (if already sorted), where n is the size of the array.
//SPACE COMPLEXITY: O(1).