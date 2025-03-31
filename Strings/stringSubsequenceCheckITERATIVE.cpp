#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(const string& s1, const string& s2) {
    int j = 0;
    for (int i = 0; i < s1.length() && j < s2.length(); i++)    if (s1[i] == s2[j])    j++;
    return j == s2.length();
}

int main() {
    // string str1 = "abcde";
    // string str2 = "acbe";

    string str1, str2;
    cout << "Enter a string1: ";
    cin >> str1;
    cout << "Enter a string2: ";
    cin >> str2;

    cout << "str2 is a SubSequence of str1: " << (isSubsequence(str1, str2) ? "Yes" : "No") << endl;
    return 0;
}

// TIME  COMPLEXITY  : O(n + m), where 'n' is the length of string1 (s1) and 'm' is the length of string2 (s2)  
// SPACE COMPLEXITY  : O(1)  
