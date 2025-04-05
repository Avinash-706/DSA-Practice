#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;

//FOR DISTINCT CHARACTER IN STRING
int factorial(int n){
    int res = 1;
    for(int i = 2 ; i <= n ; i++){
        res *= i;
    }
    return res;

}

int lexicoGraphicRankOfStringDISTINCT(string str){
    int rank = 1;
    int n = str.length();

    for(int i = 0 ; i < n ; i++){
        int small = 0;

        for(int j = i+1; j < n ; j++){
            if(str[j] < str[i])    small++;
        }

        rank += small * factorial( n - i - 1);
    }
    return rank;
}


int main() {
    // string str = "acb";

    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Lexicographic Rank of \"" << str << "\" is: " << lexicoGraphicRankOfStringDISTINCT(str) << endl;
    return 0;
}