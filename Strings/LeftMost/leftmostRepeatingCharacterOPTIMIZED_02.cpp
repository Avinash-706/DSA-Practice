#include <iostream>
#include <cstring>
using namespace std;


//OPTIMIZED APPROACH
const int CHAR = 256;

int leftmost(string s1) {
    bool visited[CHAR];
    fill(visited, visited + CHAR, false); 

    int res = -1;
    
    for (int i = s1.length() - 1; i >= 0; i--) {
        if (visited[s1[i]])    res = i; 
        else    visited[s1[i]] = true;
    }
    
    return res;
}

int main() {
    // string str = "cabbad";


    string str;
    cout << "Enter a string: ";
    cin >> str;

    int index = leftmost(str);

    if (index == -1)    cout << "No repeating characters found.";
    else    cout << "Leftmost repeating character: " << str[index] << " || Index: " << index;

    return 0;
}

// TIME  COMPLEXITY  : O(n), where 'n' is the length of the string  
// SPACE COMPLEXITY  : O(1), since the character array has a fixed size (256)  
