#include <iostream>
#include <string>
using namespace std;


// NON TAIL RECURSIVE METHOD (uses substr)
// TIME  COMPLEXITY  : O(n^2), where 'n' is the string length
//                   : Each recursive call is O(n) due to substr(), repeated O(n) times
// SPACE COMPLEXITY  : O(n) at peak due to substring storage and recursion stack
//                   : Total cumulative memory over calls is O(n^2)

bool palindrome(string str, int n) {
    if (n == 0 || n == 1)   return true;
    if (str[0] == str[n - 1])   return palindrome(str.substr(1, str.length() - 2), n - 2);
    return  false;
}


// TAIL RECURSIVE METHOD (uses index pointers)
// TIME  COMPLEXITY  : O(n), where 'n' is the string length
//                   : Each step compares two characters and moves inward
// SPACE COMPLEXITY  : O(n) without Tail Call Optimization (stack depth ~ n/2)
//                   : O(1) with Tail Call Optimization

bool palindromeTail(const string &str, int left, int right) {
    if (left >= right)  return true;     // Base case
    if (str[left] != str[right])    return false;

    return  palindromeTail(str, left + 1, right - 1);
}


int main() {
    string str;
    cout << "Enter a String : ";
    cin >> str;

    cout << "NON TAIL : Is Palindrome? : " << (palindrome(str, str.length()) ? "Yes" : "No") << endl;
    cout << "TAIL     : Is Palindrome? : " << (palindromeTail(str, 0, str.length() - 1) ? "Yes" : "No") << endl;
    return 0;
}
