#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <limits>
using namespace std;

void str_func(string &str1, string &str2){
    cout << "Length : "<< str1.length() << endl;
    cout << "Size : "<< str2.size() << endl;
    cout << "str1==str2 : "<< (str1==str2) << endl;
    cout << "Compare : " << str1.compare(str2) << endl;
    cout << "str1+str2 : " << str1+str2 << endl;
    cout << "str1 > str2 : "<<(str1 > str2) << endl;
    cout << "str1 < str2 : "<< (str1 < str2) << endl;
}

int main() {
    string str1="hello world";
    string str2=" HELLO WORLD";
    // cout << str1.length();
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    str_func(str1, str2);
    // Your code here
    return 0;
}