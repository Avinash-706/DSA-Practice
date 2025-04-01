#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool anagrams(string s1, string s2){
    unordered_map<char, int> h1;
    unordered_map<char, int> h2;
    int n = s1.length();
    int m = s2.length();
    
    if(n != m)    return false;

    for(int i = 0 ; i < n ; i++){
        h1[s1[i]]++;
        h2[s2[i]]++;
    }
    
    return h1 == h2;
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

// TIME  COMPLEXITY  : O(n), where 'n' is the length of the strings  
// SPACE COMPLEXITY  : O(1), since at most 26 characters are stored in the unordered_map  
