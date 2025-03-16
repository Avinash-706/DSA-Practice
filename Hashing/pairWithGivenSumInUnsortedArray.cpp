#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool pairWithGivenSumInUnsortedArray(int n, int sum, int arr[]){
    unordered_set<int> h;
    for(int i = 0 ; i < n ; i++){
        if(h.find(sum - arr[i]) != h.end())    return true;
        else    h.insert(arr[i]);
    }
    return false;
}s


int main() {
    // int n = 5;
    // int arr[5] = {8, 3, 4, 2, 5};
    // int sum = 6;

    int n, sum;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
    cout << endl << "Enter the Sum of Any Two Pairs you want : ";
    cin >> sum;
    
    cout << "The Pair of Number for the Given Sum " << sum << " : " << (pairWithGivenSumInUnsortedArray(n, sum, arr) ? "PRESENT" : "NOT PRESENT");
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the size of the array  
// SPACE COMPLEXITY  : O(n), unordered_set -> used to store elements  