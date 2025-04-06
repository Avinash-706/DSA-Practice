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

//OPTIMIZED APPROACH
size_t longestSubStringWithDistinctCharacters(string str){
    int n = str.length();
    unordered_set<char> visited;
    size_t maxLen = 0;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        while(visited.find(str[right]) != visited.end()) {
            visited.erase(str[left]);
            left++;
        }
        visited.insert(str[right]);
        maxLen = max(maxLen, visited.size());
    }
    return maxLen;
}

int main() {
    // string str = "abcdabc";

    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "The Length of the Longest SubString with Distinct Characters : " << longestSubStringWithDistinctCharacters(str);
    return 0;
}

// TIME  COMPLEXITY : O(n), where 'n' is the length of the string
// SPACE COMPLEXITY : O(k), where 'k' is the maximum number of distinct characters in the string (in average | best case)
// SPACE COMPLEXITY : O(n), where 'n' is the length of the string (in worst case)

