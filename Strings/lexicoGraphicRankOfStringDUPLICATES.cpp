#include <bits/stdc++.h>
using namespace std;

//STRING CAN HAVE DUPLICATES CHARACTERS
int factorial(int n) {
    int res = 1;
    for(int i = 2; i <= n; i++)
        res *= i;
    return res;
}

int compute(string str) {
    int rank = 1;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        int countRight = 0;
        map<char, int> freq;

        for (int j = i + 1; j < n; j++) {
            if (str[j] < str[i]) countRight++;
            freq[str[j]]++;
        }

        freq[str[i]]++;

        int deno = 1;
        for (auto f : freq)
            deno *= factorial(f.second);

        rank += (countRight * factorial(n - i - 1)) / deno;
    }

    return rank;
}

int main() {
    string str = "baac";
    cout << "Lexicographic Rank of \"" << str << "\" is: " << compute(str) << endl;
    return 0;
}
