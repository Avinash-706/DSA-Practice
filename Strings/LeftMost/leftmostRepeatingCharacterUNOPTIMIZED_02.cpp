#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//UNOPTIMIZED APPROACH
const int CHAR = 256;

int leftmostRepeatingCharacter(string s1){
    int count[CHAR] = {0};
    for(int i = 0 ; i < s1.length() ; i++)    count[s1[i]]++;
    for(int i = 0 ; i < s1.length() ; i++)    if(count[s1[i]] > 1)    return i;
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

// TIME  COMPLEXITY  : O(n), where 'n' is the length of the string  
// SPACE COMPLEXITY  : O(1), since the character array has a fixed size (256)  
