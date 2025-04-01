#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//UNOPTIMIZED APPROACH
int leftmostNonRepeating(string str){
    for(int i = 0 ; i < str.length() ; i++){
        bool flag = true;
        for(int j = 0 ; j < str.length() ; j++){
            if(str[i] == str[j] && i != j){
                flag = false;
                break;
            }
        }
        if(flag)    return i;
    }
    return -1;
}


int main() {
    // string str = "abcda";

    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int index = leftmostNonRepeating(str);

    if (index == -1)    cout << "No non-repeating character found.";
    else   cout << "The Left Most Non - Repeating Character : " << str[index] << " | Index : " << index;
    return 0;
}