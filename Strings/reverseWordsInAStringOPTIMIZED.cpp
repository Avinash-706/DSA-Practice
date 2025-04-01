#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <string>
#include <string.h>
#include <limits>
using namespace std;


//OPTIMIZED APPROACH
void reverse(string &s2, int low, int high){
    while(low <= high){
        swap(s2[low] , s2[high]);
        low++;
        high--;
    }
}

void reverseWordsInAString(string &s1) {
    int n = s1.length();
    int start = 0;
    for (int end = 0 ; end < n; end++) {
        if (s1[end] == ' ') {
            reverse(s1, start, end - 1);
            start = end + 1;
        }
    }
    reverse(s1, start , n - 1);
    reverse(s1, 0, n - 1);    
}


int main() {
    // string str = "AvinasH The Great";

    string str;
    cout << "Enter a sentence : ";
    getline(cin, str);

    reverseWordsInAString(str);
    cout << str;
    return 0;
}

// TIME  COMPLEXITY : O(n), where 'n' is the size of the array
// SPACE COMPLEXITY : O(1)