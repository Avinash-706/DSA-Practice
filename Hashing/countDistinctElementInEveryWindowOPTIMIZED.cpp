#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//OPTIMIZED APPROACH
void countDistinctElementInEveryWindow(int n, int arr[], int k){
    unordered_map<int, int> h;
    int count = 0;
    
    //process the first window
    for(int i = 0 ; i < n - k + 1 ; i++)    h[arr[i]]++;
    cout << h.size() << "  ";

    //sliding window approach in hash_map
    for(int i = k ; i < n ; i++){
        h[arr[i - k]] -= 1;     // remove the previous element 
        if(h[arr[i - k]] == 0)    h.erase(arr[i - k]);
        h[arr[i]] += 1;     // add the next element
        cout << h.size() << "  ";
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


// TIME  COMPLEXITY  : O(n), where 'n' is the size of the array
// SPACE COMPLEXITY : O(k), where 'k' is the window size