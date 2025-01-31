#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// 3, 0, 1, 0, 4, 0 2
// 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

// OPTIMIZED APPROACH
int rainWater(int n, int arr[])
{
    int capacity = 0;
    int left_max[n], right_max[n];
    
    left_max[0]=arr[0];
    for (int i= 1; i < n; i++)  left_max[i] = max(left_max[i-1], arr[i]);
    
    right_max[n-1]=arr[n-1];
    for (int i = n - 2; i >= 0; i--)    right_max[i] = max(right_max[i + 1], arr[i]);

    for (int i = 1 ; i < n - 1 ; i++)   capacity = capacity + min(left_max[i], right_max[i]) - arr[i];
    return capacity;
}

int main()
{
    // int n=7;
    // int arr[7]={3, 0, 1, 0, 4, 0, 2};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }

    cout << "CAPACITY TO STORE WATER: " << rainWater(n, arr);
    return 0;
}

// TIME COMPLEXITY : O(n), where 'n' is the size of the array.
// SPACE COMPLEXITY : O(n), where 'n' is the size of the array.