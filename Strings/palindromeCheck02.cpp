#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool palindromeCheck(string str1){
    string str2 = str1;
    reverse(str2.begin(), str2.end());
    if(str1 == str2)    return true;
    else    return false;
}


int main() {
    // string str = "ABCDCBA";

    string str;
    cout << "Enter a string : " ;
    cin >> str;

    cout << endl << "Is Palindrome ? : " << (palindromeCheck(str) ? "Yes" : "No");
    return 0;
}

// TIME COMPLEXITY : O(n), where 'n' is the lenght of the string
//SPACE COMPLEXITY : O(1)
