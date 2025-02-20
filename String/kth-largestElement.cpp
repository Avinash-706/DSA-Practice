#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//IN  - 431526
//OUT - 5

int klargestElement(string s, int k){
    int n = s.length();
    int arr[n];
    for(int i = 0; i < n ;  i++)    arr[i] = s[i] - '0';
    sort(arr, arr + s.length() );
    return arr[n - k];

}


int main() {
    // string s = "431526";
    // int k = 2;

    string s;
    int k;
    cout << "Enter the string containing single digit numbers: ";
    cin >> s;
    cout << "\nEnter the required largest element: ";
    cin >> k;

    cout << klargestElement(s, k);
    return 0;
}

//TIME COMPlexity - O(n log n), where 'n' is the