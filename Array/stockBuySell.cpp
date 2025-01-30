#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//OPTIMIZED APPROACH
int stockBuySell(int n, int arr[])
{
    int profit = 0;
    int left = 0;
    for (int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            profit += arr[i]-arr[i-1];
            if(i == n - 1)  cout << left + 1 << " -> " << i + 1  << endl;
        }
        else {
            if(left != i-1)   cout << left + 1 << " -> " << i  << endl;
            left=i;
        }
    }
    return profit;
}

int main(){
    int n = 6;
    int arr[6] = {7, 1, 5, 3, 6, 4};

    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    cout<<stockBuySell(n, arr);
    return 0;
}

//TIME COMPLEXITY - O(n), where 'n' is the size of the array
//SPACE COMPLEXITY - O(1)