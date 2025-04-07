#include <bits/stdc++.h>
using namespace std;


//OPTIMIED APPROACH
void fillLPS(string str, int lps[]) {
    int n = str.length();
    int len = 0;
    lps[0] = 0; // lps[0] is always 0
    int i = 1;

    while (i < n) {
        if (str[i] == str[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len == 0) {
                lps[i] = 0;
                i++;
            }
            else {
                len = lps[len - 1]; // Try previous LPS
            }
        }
    }
}

void KMP_StringMatching(string text, string pattern){
    int n = text.length(); 
    int m = pattern.length();
    int lps[m];

    fillLPS(pattern, lps);
    int i = 0, j = 0;
    
    while(i < n){
        if(pattern[j] == text[i]){
            i++;
            j++;
        }
        if(j == m){
            cout << i - j << "  ";
            j = lps[j - 1];
        }
        else if(i < n && pattern[j] != text[i]){
            if(j == 0)    i++;
            else    j = lps[j - 1];
        }
    }
}


int main() {
    // string str = "ababcababaad";
    // string pattern = "ababa";

    string text, pattern;
    cout << "Enter a text: ";
    cin >> text;
    cout << "Enter a pattern: ";
    cin >> pattern;

    KMP_StringMatching(text, pattern);

    return 0;
}

// TIME  COMPLEXITY  : O(n + m)    Both text and pattern are scanned linearly
// SPACE COMPLEXITY  : O(m)        LPS array
