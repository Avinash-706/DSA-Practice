#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//UNOPTIMIZED APPROACH
int countDistinctElement(int n, int arr[]){
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        bool flag = true;
        for(int j = 0 ; j < i ; j++){
            if(arr[i] == arr[j]){
                flag = false;
                break;
            }
        }
        if(flag == true)    count++;
    }
    return count;
}


int main() {
    // int n = 7;
    // int arr[7] = {15, 12, 13, 12, 13, 13, 18};

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

    cout << "The Count of Distinct Elements : " << countDistinctElement(n, arr);
    return 0;
}

//TIME  COMPLEXITY : O(n²), where 'n' is the size of the array
//SPACE COMPLEXITY : O(1)