#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

const int CHAR  = 256;

int leftmostNonRepeating(string s1){
    int count[CHAR]={0};
    for(int i = 0 ; i < s1.length() ; i++)    count[s1[i]]++;
    for(int i = 0 ; i < s1.length() ; i++)    if(count[s1[i]] == 1)    return i;
    return -1;
}


int main() {
    // string str = "abbcad";

    string str;
    cout << "Enter a string: ";
    cin >> str;
   
    int index = leftmostNonRepeating(str);

    if (index == -1)    cout << "No non-repeating character found.";
    else   cout << "The Left Most Non - Repeating Character : " << str[index] << " | Index : " << index;
    return 0;
}