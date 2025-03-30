#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


bool palindromeCheck(string str){
    int n =  str.length();
    for(int i = 0 ; i < n/2 ; i++)    if(str[i] != str[n - i - 1])    return false;
    return true;
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
