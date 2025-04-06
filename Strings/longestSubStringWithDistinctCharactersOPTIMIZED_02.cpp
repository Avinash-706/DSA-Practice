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
int longestSubStringWithDistinctCharacters(string str) {
    int n = str.length(), res = 0;
    vector<int> prev(256, -1);
    int i = 0;

    for (int j = 0; j < n; j++) {
        i = max(i, prev[str[j]] + 1);
        int maxEnd = j - i + 1;
        res = max(res, maxEnd);
        prev[str[j]] = j;
    }

    return res;
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
// SPACE COMPLEXITY : O(1)