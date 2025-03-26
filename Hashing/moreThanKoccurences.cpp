#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//MORE THAN n/k OCURRENCES SHOULD BE THERE
void moreThanKoccurences(int n, int arr[], int k){
    unordered_map<int, int> h;
    for(int i = 0 ; i < n ; i++)    h[arr[i]]++;
    for(auto i : h)    if(i.second > n/k)    cout << i.first << "  ";
}


int main() {
    // int n = 8;
    // int arr[8] = {30, 10, 20, 20, 10, 20, 30, 30};
    // int k = 4;

    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)    cin >> arr[i];
    cout << "Enter the value of k: ";
    cin >> k;

    moreThanKoccurences(n, arr, k);
    return 0;
}