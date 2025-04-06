#include <bits/stdc++.h>
using namespace std;

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

int main() {
    // string str = "ababc";

    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    int lps[n];

    fillLPS(str, lps);

    for (int i = 0; i < n; i++) {
        cout << lps[i] << "  ";
    }
    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the length of the string
// SPACE COMPLEXITY  : O(n), size of lps array
