#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// IN  - abcdabc
// OUT - 4 (cdab)

//UNOPTIMIZED APPROACH
size_t longestSubStringWithDistinctCharacters(string str){
    int n = str.length();
    size_t len = 0;
    for(int i = 0 ; i < n ; i++){
        unordered_set<char> s;
        for(int j = i ; j < n ; j++){
            if(s.find(str[j]) != s.end())   break;
            else{
                s.insert(str[j]);
                len =  max(s.size(), len);
            }
        }
    }
    return len;
}

int main() {
    // string str = "abcdabc";

    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "The Length of the Longest SubString with Distinct Characters : " << longestSubStringWithDistinctCharacters(str);
    return 0;
}

// TIME  COMPLEXITY : O(n²), where 'n' is the length of the string
// SPACE COMPLEXITY : O(n), where 'n' is the max size of unordered_set