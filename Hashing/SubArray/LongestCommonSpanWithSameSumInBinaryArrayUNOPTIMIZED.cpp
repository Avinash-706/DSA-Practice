#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int maxCommon(int n, int a[], int b[]){
    int len = 0;
    for(int i = 0 ; i < n ; i++){
        int sum1 = 0, sum2 = 0;
        for(int j = i; j < n ; j++){
            sum1 += a[j];
            sum2 += b[j];
            if(sum1 == sum2)    len = max(len, j-i+1);
        }
    }
    return len;
}


int main() {
    // int n = 6;
    // int a[6] = {0, 1, 0, 0, 0, 0};
    // int b[6] = {1, 0, 1, 0, 0, 1};

    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    int a[n], b[n];

    cout << endl << "Enter elements of first array (0s and 1s only): ";
    for(int i = 0; i < n; i++) {  
        cin >> a[i];
    }
    cout << endl << "Enter elements of second array (0s and 1s only): ";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << "Maximum Common Span of Subarray between two array is : " << maxCommon(n, a, b);
    return 0;
}