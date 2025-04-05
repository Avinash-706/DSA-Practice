#include <iostream>
#include <string>
using namespace std;

const int CHAR = 256;

bool areSame(int CT[], int CP[]) {
    for (int i = 0; i < CHAR; i++) {
        if (CT[i] != CP[i])
            return false;
    }
    return true;
}

bool isPresent(string txt, string pat) {
    int CT[CHAR] = {0}, CP[CHAR] = {0};

    for (int i = 0; i < pat.length(); i++) {
        CT[txt[i]]++;
        CP[pat[i]]++;
    }

    for (int i = pat.length(); i < txt.length(); i++) {
        if (areSame(CT, CP))    return true;

        CT[txt[i]]++;
        CT[txt[i - pat.length()]]--;
    }

    return areSame(CT, CP);
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
        cout << "Anagram of pattern is present in text.\n";
    else
        cout << "Anagram of pattern is NOT present in text.\n";

    return 0;
}
