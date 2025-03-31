#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//UNOPTIMIZED APPROACH
void reverseWordsInAString(string s1) {
    int j = s1.length();
    
    for (int i = s1.length() - 1; i >= 0; i--) {
        if (s1[i] == ' ') {
            cout << s1.substr(i + 1, j - (i + 1)) << " ";
            j = i;
        }
    }
    
    cout << s1.substr(0, j);
}



int main() {
    // string str = "AvinasH The Great";

    string str;
    cout << "Enter a sentence : ";
    getline(cin, str);

    reverseWordsInAString(str);
    return 0;
}

// TIME  COMPLEXITY : O(n), where 'n' is the size of the array
// SPACE COMPLEXITY : O(1)