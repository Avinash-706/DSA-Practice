#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


size_t longestSubStringWithDistinctCharacters(string str){
    int n = str.length();
    size_t len = 1;
    for(int i = 0 ; i < n ; i++){
        unordered_set<char> s;
        for(int j = i ; j < n ; j++){
            if(s.find(str[i]) != s.end()){
                len = max(s.size(), len);
                break;
            }
            else{
                s.insert(str[j]);
                len =  max(s.size(), len);
            }
        }
    }
    return len;
}


int main() {
    string str = "abcdabc";

    // string str;
    // cout << "Enter a string: ";
    // cin >> str;

    cout << longestSubStringWithDistinctCharacters(str);
    return 0;
}