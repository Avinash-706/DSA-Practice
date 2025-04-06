#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

// proper prefix  -> abcd    -> 1. " "  2. "a"   3. "ab"  4. "abc"
// suffix ---------> abcd    -> 1. " "  2. "d"   3. "cd"  4. "bcd"  5. "abcd" 

//UNOPTIMIZED APPROACH
int longProperPrefixSuffix(string str, int n){
    int maxLen = 0;
    for (int len = 1; len < n; len++) {

        string prefix = str.substr(0, len);
        string suffix = str.substr(n - len, len);

        cout << len << "-> " << prefix << ":" << suffix;
        if (prefix == suffix) {
            cout << "  [PASS]" << endl;
            maxLen = len;
        }
        else    cout << "  [X]" << endl;

    }
    cout << endl;
    return maxLen;
}


void KMP_LongestProperPrefixSuffixArray(string str, int lps[], int n){
    for(int i = 0 ; i < n ; i++){
        cout << "Loop :" << i << endl ;
        lps[i] = longProperPrefixSuffix(str, i+1);
    }
}


int main() {
    // string str = "ababc";

    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int n = str.length();
    int lps[n];

    KMP_LongestProperPrefixSuffixArray(str, lps, n);
    for(int i = 0 ; i < n ; i++){
        cout << lps[i] << "  ";
    }
    return 0;
}

// TIME  COMPLEXITY - O(n³), where 'n' is the length of the string & substr() call takes O(len) time
// SPACE COMPLEXITY - O(n), size of the lps array