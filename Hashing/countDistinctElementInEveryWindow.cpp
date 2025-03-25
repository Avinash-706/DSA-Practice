#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void countDistinctElementInEveryWindow(int n, int arr[], int windowSize){
    for(int i = 0; i < (n - windowSize + 1) ; i++){
        unordered_set<int> s;
        for(int j = i ; j < i + windowSize; j++){
            s.insert(arr[j]);
        }
        cout << s.size() << "  ";
    }

}

int main() {
    // int n = 7;
    // int arr[7] = {10, 20, 20, 10, 30, 40, 10};
    // int windowSize = 4;


    int n, windowSize;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  
    cout << "\nEnter the elements of the array: ";
    for(int i = 0; i < n; i++)    cin >> arr[i];

    cout << "\nEnter the window size: ";
    cin >> windowSize;

    countDistinctElementInEveryWindow(n, arr, windowSize);
    return 0;
}

// TIME COMPLEXITY - O(n * k), where 'n' is the size of the array and 'k' is the window size.
//SPACE COMPLEXITY - O(k), where 'k' is the window size