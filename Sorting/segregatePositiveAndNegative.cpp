#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//Here We Will Use Hoare Partition Algorithm for Partitioning Or Segregation
//NO SORTING IS GUARANTEED HERE

void segregatePositiveAndNegative(int n, int arr[]){
    int i = -1, j = n + 1;
    while(true){
        do    i++;
        while(arr[i] < 0);
        do    j--;
        while(arr[j] >= 0);
        if(i >= j)    return;
        swap(arr[i], arr[j]);
    }
}


int main() {
    // int n = 4;
    // int arr[4] = {15, -3, -2, 18};

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements (Note : Include Positive and Negative Numbers): ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }

    segregatePositiveAndNegative(n, arr);
    cout << "Array After segregation of Positive and Negative Integer : ";
    for(int i : arr)    cout << i << " ";
    return 0;
}

// TIME  COMPLEXITY : O(n), where 'n' is the size of the array.
// SPACE COMPLEXITY : O(1)