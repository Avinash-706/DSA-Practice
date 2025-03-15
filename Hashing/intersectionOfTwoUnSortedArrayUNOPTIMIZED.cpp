#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


void intersectionOfTwoUnSortedArray(int a[], int b[], int n1, int n2){
    for(int i = 0 ; i < n1; i++){
        for(int j = 0 ; j < n2 ; j++){
            if(a[i] == b[j])    cout << a[i] << " "; 
        }
    }
   
}


int main() {
    int a[6] = {10, 15, 20, 25, 30, 50};
    int b[4] = {30,  5, 15, 80};


    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements: ";
    // for(int i=0; i < n; i++){
    //     int input;
    //     cin >> input;
    //     arr[i] = input;
    // }

    intersectionOfTwoUnSortedArray(a, b, 6, 4);

    return 0;
}