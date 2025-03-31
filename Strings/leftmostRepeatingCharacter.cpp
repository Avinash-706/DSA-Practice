#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


int leftmostRepeatingCharacter(string s1){
    for(int i = 0; i < s1.length() ; i++){
        for(int j = i+1 ; j < s1.length(); j++){
            if(s1[i] == s1[j])    return    i;
        }
    }
}


int main() {
    // string str = "cabbad";

    string str;
    cout << "Enter a string: ";
    cin >> str;

    int index = leftmostRepeatingCharacter(str);

    cout << "Lest Most Repeating Characters : " << str[index] << " || Index : " << index ;
    return 0;
}