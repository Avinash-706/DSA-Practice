#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//Using Binary Search

//IN  - 14
//OUT - 3

int squareRootFloor(int n){
    int low = 0, high = n, ans = -1;
    while(low <= high){

        int mid = (low + high)/2;
        int square = mid * mid;
        if(square == n)    return mid;
        else if(square > n)    high = mid - 1;
        else{
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}


int main() {
    // int n = 32;

    int n;
    cout << "Enter the number : ";
    cin >> n;


    cout << squareRootFloor(n);
    return 0;
}