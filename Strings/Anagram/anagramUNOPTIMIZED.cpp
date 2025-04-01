#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool anagrams(string s1, string s2){
    int n = s1.length();
    int m = s2.length();
    if(n != m)    return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}


int main() {
    // string s1 = "listen";
    // string s2 = "silent";

    string s1, s2;
    cout << "Enter a string1: ";
    cin >> s1;
    cout << "Enter a string2: ";
    cin >> s2;

    cout << s1 << " and " << s2 << " are Anagrams : " <<  (anagrams(s1, s2) ? "Yes" : "No");
    return 0;
}

// TIME  COMPLEXITY  : O(n log n), where 'n' is the length of the strings  
// SPACE COMPLEXITY  : O(1), 
