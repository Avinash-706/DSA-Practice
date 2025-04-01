#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//OPTIMIZED APPROACH
const int CHAR = 256;

int nonRepeatingLeftMost(string &str) {
    int FI[CHAR];  
    fill(FI, FI + CHAR, -1); 

    for (int i = 0; i < str.length(); i++) {
        if (FI[str[i]] == -1)   FI[str[i]] = i; 
        else    FI[str[i]] = -2; 
    }

    int res = INT_MAX;
    for (int i = 0; i < CHAR; i++)    if (FI[i] >= 0)    res = min(res, FI[i]);

    return (res == INT_MAX) ? -1 : res;  
}


int main() {
    // string str = "abbcbd";
 
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int index = nonRepeatingLeftMost(str);

    if (index == -1)    cout << "No non-repeating character found.";
    else    cout << "The Leftmost Non-Repeating Character: " << str[index] << " | Index: " << index;

    return 0;
}
