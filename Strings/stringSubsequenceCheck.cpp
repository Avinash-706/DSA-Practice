#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool compute(string s1, string s2){
    int j = 0;
    for(int i = 0 ; i < s1.length() && j < s2.length() ; i++){
        if(s1[i] == s2[j])    j++;
    }
    return    j == s2.length();
}


int main() {
    string str1 = "abcde";
    string str2 = "ae";

    // cout << "Enter a string1: ";
    // cin >> str1;
    // cout << "Enter a string2: ";
    // cin >> str2;

    cout << " str2  is a SubSequence of str1  : " << (compute(str1, str2) ? "Yes" : "No");
    return 0;
}