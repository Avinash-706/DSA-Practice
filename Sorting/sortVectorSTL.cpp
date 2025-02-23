#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <vector>
#include <limits>
using namespace std;


int main() {
    // vector <int> arr = {5, 7, 20, 10};

    int input;
    vector<int> arr;
    cout << "Enter the Elements in the Vector (-1 to stop): " << endl;
    while(cin >> input && input != -1)    arr.push_back(input);
    
    cout << endl << "-- SORT IN INCREASING ORDER --" << endl;
    sort(arr.begin(), arr.end()); //sort in increasing order
    for(int i : arr) cout << i << " ";

    cout << endl << "-- SORT IN DECREASING ORDER --" << endl;
    sort(arr.begin(), arr.end(), greater<int>()); //sort in decreasing order
    for(int i : arr) cout << i << " ";

    return 0;
}