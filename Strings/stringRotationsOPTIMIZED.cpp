#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//OPTIMIZED APPROACH
bool stringRotations(string &s1, string &s2){
    if(s1.length() != s2.length())    return false;
    return (s1 + s1).find(s2) != string::npos;
}

int main() {
    // string s1 = "abcde";
    // string s2 = "deabc";

    string s1, s2;
    cout << "Enter the original string: ";
    cin >> s1;
    cout << "Enter the rotated string to check: ";
    cin >> s2;

    cout << (stringRotations(s1, s2) ? "TRUE"  : "FALSE");
    return 0;
}

// TIME  COMPLEXITY  : O(n), for 'FIND' operation
// SPACE COMPLEXITY  : O(1)  
