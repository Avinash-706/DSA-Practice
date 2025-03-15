#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// UNOPTIMIZED APPROACH
void intersectionOfTwoUnSortedArray(int a[], int b[], int n1, int n2){
    for(int i = 0 ; i < n1; i++)    for(int j = 0 ; j < n2 ; j++)   if(a[i] == b[j])    cout << a[i] << " ";
}


int main() {
    // int n1 = 6, n2 = 4;
    // int a[n1] = {10, 15, 20, 25, 30, 50};
    // int b[n2] = {30,  5, 15, 80};

    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int a[n1];  
    cout << "Enter the elements of the first array: ";
    for(int i = 0; i < n1; i++) cin >> a[i];

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int b[n2];  
    cout << "Enter the elements of the second array: ";
    for(int i = 0; i < n2; i++) cin >> b[i];

    intersectionOfTwoUnSortedArray(a, b, n1, n2);
    return 0;
}

// TIME  COMPLEXITY : O(n²), where 'n' is the size of the array
// SPACE COMPLEXITY : O(1)