#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void mergeTwoSortedArray(int n1, int n2, int arr1[], int arr2[]){
    int a=0, b=0;
    int temp[n1+n2];
    int i = 0;
    while(a < n1 && b < n2){
        if(arr1[a] < arr2[b])   temp[i++] = arr1[a++];
        else    temp[i++] = arr2[b++];   
    }
    while(a < n1)   temp[i++] = arr1[a++];
    while(b < n2)   temp[i++] = arr2[b++];

    for(int j = 0 ; j < n1+n2 ; j++){
        cout << temp[j] << " ";
    }
}


int main() {
    // int n1 = 3, n2 = 4;
    // int arr1[3] = {10, 15, 20};
    // int arr2[4] = {5, 6, 6, 15};

    int n1, n2;
    cout << "\nEnter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "\nEnter the elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "\nEnter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "\nEnter the elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }


    mergeTwoSortedArray(n1, n2, arr1, arr2);
    return 0;
}

// TIME COMPLEXITY  - O(n1 + n2), where 'n1' & 'n2' are the size of array1 & array2 respecitively.
//SPACE COMPLEXITY  - O(n1 + m2), where 'n1' & 'n2' are the size of array1 & array2 respecitively.