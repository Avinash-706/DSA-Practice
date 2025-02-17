#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


double medianOf2UnequalSortedArrayUNOPTIMIZED(int n1, int n2, int arr1[], int arr2[]){
    int n = n1+n2;
    int final[n];
    for(int i=0 ; i < n ; i++){
        if(i < n1)   final[i] = arr1[i];
        else if(i >= n1) final[i] = arr2[i - n1]; 
    }
    sort(final, final + n);
    if(n % 2 == 0)    return    (final[n / 2] + final[(n / 2) + 1])/2;
    else    return  final[n/2];  


}

// void input(int n, int arr[]){
//     cout << "Enter the elements in the increasing order ( Note: sorted order): ";
//     for(int i=0; i < n; i++){
//         int input;
//         cin >> input;
//         arr[i] = input;
//     }
// }

int main() {
    int n1 = 6, n2 = 6;
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {9, 20, 30, 40, 50 , 60};

    // int n1, n2;
    // cout << "Enter the size of the array1: ";
    // cin >> n1;
    // int arr1[n1];
    // input(n1, arr1);
    // cout << "Enter the size of the array2: ";
    // cin >> n2;
    // int arr2[n2];
    // input(n2, arr2);




    cout << float(medianOf2UnequalSortedArrayUNOPTIMIZED(n1, n2, arr1, arr2));
    return 0;
}