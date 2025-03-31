#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//OPTIMIZED APPROACH
const int CHAR = 256;

int leftMost(string str) {
    int fIndex[CHAR]; 
    fill(fIndex, fIndex + CHAR, -1); 
    int res = INT_MAX;

    for (int i = 0; i < str.length(); i++) {
        int fi = fIndex[str[i]]; 
        if (fi == -1)   fIndex[str[i]] = i;
        else    res = min(res, fi);
    }

    return (res == INT_MAX) ? -1 : res;
}

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int index = leftMost(str);

    if (index == -1)    cout << "No repeating character found.";
    else    cout << "Leftmost Repeating Character: " << str[index] << " || Index: " << index;

    return 0;
}
