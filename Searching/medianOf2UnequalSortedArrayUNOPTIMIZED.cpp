#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN  - 10, 20, 30, 40, 50
//IN  - 5 , 15, 25, 35, 45
//OUT - 27.5

//UNOPTIMIZED APPROACH
double medianOf2UnequalSortedArrayUNOPTIMIZED(int n1, int n2, int arr1[], int arr2[]){
    int n = n1+n2;
    int final[n];

    for(int i=0 ; i < n ; i++){  
        if(i < n1)   final[i] = arr1[i];
        else if(i >= n1) final[i] = arr2[i - n1]; 
    }

    sort(final, final + n);
    if(n % 2 == 0)    return    ((double(final[n / 2]) + double(final[(n / 2) - 1])) / 2.0);
    else    return  double(final[n/2]);  
}


void input(int n, int arr[]){
    cout << "Enter the elements in the increasing order ( Note: sorted order): ";
    for(int i=0; i < n; i++){
        int input;
        cin >> input;
        arr[i] = input;
    }
}


int main() {
    // int n1 = 6, n2 = 5;
    // int arr1[6] = {1, 2, 3, 4, 5, 6};
    // int arr2[5] = {10, 20, 30, 40, 50 };

    int n1, n2;
    cout << "Enter the size of the array1: ";
    cin >> n1;
    int arr1[n1];
    input(n1, arr1);
    cout << "Enter the size of the array2: ";
    cin >> n2;
    int arr2[n2];
    input(n2, arr2);

    cout << "MEDIAN: " << fixed << setprecision(2) << medianOf2UnequalSortedArrayUNOPTIMIZED(n1, n2, arr1, arr2);
    return 0;
}

//TIME COMPLEXITY  - O((n1+n2)log(n1+n2)), where 'n' = 'n1' + 'n2', where 'n1' -> size of array1, 'n2' -> size of the array2
//SPACE COMPLEXITY - O(n1+n2), where 'n' = 'n1' + 'n2', where 'n1' -> size of array1, 'n2' -> size of the array2