#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//UNOPTIMIZED APPROACH

// void callRotate(string &s){
//     int n = s.length();
//     char temp = s[n - 1];
//     for(int i = n - 1; i > 0; i--){
//         s[i] = s[i - 1];
//     }
//     s[0] = temp;
// }

void stringRotations(string &s1, string &s2){

    if(s1.length() != s2.length()){
        cout << "-1" << endl;
        return;
    }
    
    for(int i = 0 ; i < s1.length(); i++){
        //approach1:
        rotate(s2.begin(), s2.begin() + 1, s2.end());

        // // approach 2:
        // callRotate(s2);

        if(s1 == s2){
            cout << "TRUE : They are the Rotations of Each Other" << endl; 
            return ;
        }  
    }
    cout << "FALSE : They are not the Rotations of Each Other" << endl;

}


int main() {
    // string s1 = "abcde";
    // string s2 = "bcdea";

    string s1, s2;
    cout << "Enter the original string: ";
    cin >> s1;
    cout << "Enter the rotated string to check: ";
    cin >> s2;

    stringRotations(s1, s2);
    return 0;
}

// TIME  COMPLEXITY  : O(n^2), where 'n' is the length of the string
// SPACE COMPLEXITY  : O(1)  
