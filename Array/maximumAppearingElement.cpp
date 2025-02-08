#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
#include <unordered_map>
using namespace std;

//IN -> left[]  : 1, 2, 5, 15
//IN -> right[] :  5, 8, 7, 18
//OP -> 5

void compute(int n, int left[], int right[]){
    unordered_map <int , int> count;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = left[i] ; j <= right[i] ; j++){
            count[j]++;
        }
    }
    
    auto maxElement = std::max_element(count.begin(), count.end(), [](auto &a, auto &b) { return a.second < b.second; });
    cout << maxElement -> first  <<" : "<<maxElement -> second;
}


int main() {
    int n=4;
    int left[4]  = {1, 2, 5, 15};
    int right[4] = {5, 8, 7, 18};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    compute(n, left, right);
    return 0;
}