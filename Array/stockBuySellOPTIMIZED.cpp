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
    for (int i = 0; i < n; i++){
        if(arr[i] > arr[i-1]){
            profit += arr[i]-arr[i-1];
        }
    }
    return profit;
}

int main(){
    int n = 7;
    int arr[7] = {100, 180, 260, 310, 40, 535, 695};

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