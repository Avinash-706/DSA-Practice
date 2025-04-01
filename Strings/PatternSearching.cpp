#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//UNOPTIMIZED APPROACH
void PatternSearching(string text, string pattern){
    int n = text.length();
    int m = pattern.length();
    if(n < m){
        cout << -1;
        return;
    }
    
    for(int i = 0 ; i < text.length() ; i++){
        size_t pos = text.find(pattern, i);
        if (pos != string::npos)    cout << pattern << " found at position: " << pos << endl;
    }

}


int main() {
    string text = "AAAAA";
    string pattern = "AAA";

    string text, pattern;
    cout << "Enter the main text: ";
    getline(cin, text);
    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    PatternSearching(text, pattern);
    return 0;
}

// CASE	                                TIME COMPLEXITY
// Worst Case (naïve search)	            O((n - m + 1) * m),  where 'n' -> length of the text & 'm' -> length of the pattern
// Optimized Case (BMH/KMP used)	        O(n),       where 'n' is the length of the text

// SPACE COMPLEXITY	                        O(1)