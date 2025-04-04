#include <bits/stdc++.h>
using namespace std;

#define d 256 

void RabinKarp(string txt, string pat, int q) {
    int m = pat.length();
    int n = txt.length();
    int p = 0;  // pattern - hash valye
    int t = 0;  // Hash value - current text window
    int h = 1;

    // h -> "pow(d, m-1)%q"
    for (int i = 0; i < m - 1; i++)
        h = (h * d) % q;

    // hash value of pattern & first window of text
    for (int i = 0; i < m; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    for (int i = 0; i <= n - m; i++) {
        // If  hash values matches -> then -> check for characters one by one
        if (p == t) {
            int j;
            for (j = 0; j < m; j++) {
                if (txt[i + j] != pat[j])
                    break;
            }

            if (j == m)
                cout << "Pattern found at index " << i << endl;
        }

        // Calculate hash value for next window of text ( SLIDING WINDOW APPROACH ):
        if (i < n - m) {
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;

            // We might get negative value of t, convert it to positive
            if (t < 0)
                t = (t + q);
        }
    }
}

int main() {
    string txt = "THIS IS A SIMPLE EXAMPLE";
    string pat = "SIMPLE";

    int q = 101; // A prime number
    RabinKarp(txt, pat, q);

    return 0;
}

// TIME  COMPLEXITY  : 
// Best Case         : O(n + m), when hash collisions are rare or zero
// Average Case      : O(n + m), due to efficient rolling hash
// Worst Case        : O((n - m + 1) * m), if many hash collisions occur

// SPACE COMPLEXITY : O(1), constant auxiliary space
