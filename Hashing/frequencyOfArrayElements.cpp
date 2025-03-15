#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void frequencyOfArrayElements(int n, int arr[]){
    unordered_map <int, int> check;
    for(int i = 0 ; i < n ; i++)    check[arr[i]]++;

    vector<pair<int, int>> freq(check.begin(), check.end());
    sort(freq.begin(), freq.end());

    cout << endl << "---  Frequency of Elements  --- " << endl;
    for(auto i : check)    cout << i.first << " -> "<< i.second << endl;
}


int main() {
    // int n = 6;
    // int arr[6] = {10, 20, 20, 10, 30, 10};

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

    frequencyOfArrayElements(n, arr);
    return 0;
}

// TIME  COMPLEXITY  : O(n log n), where 'n' is the size of the array  
// SPACE COMPLEXITY  : O(n), unordered_map and a vector of pairs are used  
