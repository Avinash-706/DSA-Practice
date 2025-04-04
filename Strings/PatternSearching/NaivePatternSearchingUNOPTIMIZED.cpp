#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//UNOPTIMIZED APPROACH
void PatternSearching(string &text, string &pattern){
   // Your string operations here
   int n = text.length();
   int m = pattern.length();
   if(n < m){
        cout << -1;
        return;
   }
   
   for(int i = 0 ; i <= n - m ; i++){   
        int j;
        for(j = 0 ; j < m ; j++)    if(pattern[j] != text[i+j])     break;

        if(m == j){
            cout << i << "   ";
        }
   }
}


int main() {
    // string text = "AAAAA";
    // string pattern = "AAA";

    string text, pattern;
    cout << "Enter the main text: ";
    getline(cin, text);
    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    PatternSearching(text, pattern);
    return 0;
}

// TIME  COMPLEXITY  : O((n-m+1) * m), where 'n' is the length of the text and 'm' is the length of the pattern
// SPACE COMPLEXITY  : O(1)