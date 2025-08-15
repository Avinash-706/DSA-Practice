#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void subsets(string str, string curr = "", int i = 0){
    if(i ==  str.length()){
        cout << curr << "   ";
        return ;
    }
    subsets(str, curr , i+1);
    subsets(str, curr + str[i] , i+1);
}


int main() {
    // string str = "ABC";

    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "All the Subsets of string " << str << " : ";
    subsets(str);
    return 0;
}