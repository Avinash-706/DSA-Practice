#include <iostream>
#include <string>
using namespace std;

#define CHAR 256  

//UNOPTIMIZED APPROACH
bool areAnagram(string &pat, string &txt, int i) {
    int count[CHAR] = {0};

    for (int j = 0; j < pat.length(); j++) {
        count[pat[j]]++;
        count[txt[i + j]]--;
    }

    for (int j = 0; j < CHAR; j++)    if (count[j] != 0)    return false;

    return true;
}


bool isPresent(string &txt, string &pat) {
    int n = txt.length();
    int m = pat.length();

    for (int i = 0; i <= n - m; i++)    if (areAnagram(pat, txt, i))    return true;

    return false;
}


int main() {
    string txt = "geeksforgeeks";
    string pat = "frog";

    // string txt, pat;
    // cout << "Enter the text: ";
    // cin >> txt;
    // cout << "Enter the pattern: ";
    // cin >> pat;

    if (isPresent(txt, pat))
        cout << "Anagram Found!" << endl;
    else
        cout << "No Anagram Found." << endl;

    return 0;
}

// TIME  COMPLEXITY : O((n - m + 1) * m), where 'n' & 'm' is the length of text and pattern respectively
// SPACE COMPLEXITY : O(1)