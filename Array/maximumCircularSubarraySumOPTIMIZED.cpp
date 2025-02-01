#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// 5, -2, 3, 4
// 12

//OPTIMIZED
int normalMaxSum(int n, int arr[]){
    int res=arr[0], maxEnding=arr[0];
    for(int i=1; i < n ; i++){
        maxEnding=max(arr[i], maxEnding+arr[i]);
        res=max(maxEnding, res);
    }
    return res;
}

int overalMaxSum(int n, int arr[]){
    int max_normal = normalMaxSum(n, arr);

    if(max_normal < 0) return max_normal; //for case like input : {-5, -3}, 
    //the actual output is '-3' but the if we don't write this line the complier will return the output as '0'; 

    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = sum + normalMaxSum(n , arr);
    max_normal = max(max_normal, max_circular);
    return max_normal;
}

int main() {
    int n=4;
    int arr[4]={5, -2, 3, 4};
    
    
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    cout<<overalMaxSum(n, arr);
    return 0;
}

//TIME COMPLEXITY - O(n), where n is the size of the array.
//SPACE COMPLEXITY - O(1)