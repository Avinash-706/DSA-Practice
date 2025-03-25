#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void countDistinctElementInEveryWindow(int n, int arr[], int windowSize){
    int windowCount = n - windowSize + 1;
    for(int i = 0; i < n ; i++){
        int k = windowCount;
        unordered_set<int> s;
        while(k > 0){
            s.insert()
            k--;
            i++;
        }
    }

}


int main() {
    int n = 7;
    int arr[7] = {10, 20, 20, 10, 30, 40, 10};
    int windowSize = 4;


    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements: ";
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    countDistinctElementInEveryWindow(n, arr, windowSize);
    return 0;
}