#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


// OPTIMIZED APPROACH
void unionOfTwoUnSortedArray(int a[], int b[], int n1, int n2){
    unordered_set<int> s(b, b+n2);

    for(int i = 0 ; i < n1 ; i++)   s.insert(a[i]);
    
    cout << "Union between Two UnSorted Array : ";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
}


int main() {
    // int n1 = 3, n2 = 2;
    // int a[n1] = {10, 12,  15};
    // int b[n2] = {12, 18};

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

    unionOfTwoUnSortedArray(a, b, n1, n2);
    return 0;
}


// TIME  COMPLEXITY  : O(n1 + n2), where 'n1' and 'n2' are the sizes of the two arrays  
// SPACE COMPLEXITY  : O(n1 + n2), unordered_set -> stores all unique elements of both arrays  