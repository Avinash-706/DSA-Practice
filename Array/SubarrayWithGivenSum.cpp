#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN -  1, 4, 0, 0, 3, 10, 5
// IN -  7
// OUT - YES

// SLIDING WINDOW  -  OPTIMIZED APPROACH
bool maxSumofKconsecutivesElements(int n, int maxSum, int arr[]) {
    int checkSum = 0;  
    int left = 0;

    for (int i = 0; i < n; i++) {

        checkSum += arr[i];  
        while (checkSum > maxSum && left <= i) {
            checkSum -= arr[left];
            left++;
        }
        if (checkSum == maxSum) return true;
        
    }

    return false; 
}


int main() {
    // int n=7;
    // int sum=15;
    // int arr[7]={10 , 4 , 0 ,0 ,3, 10, 5};

    int n, sum;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << " Enter the Sub-array Sum to check: ";
    cin >> sum;
    int arr[n];
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << maxSumofKconsecutivesElements(n, sum, arr);
    return 0;
}


// TIME COMPLEXITY: O(n), where 'n' is size of the array.  
// SPACE COMPLEXITY: O(1)
