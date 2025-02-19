#include <iostream>
#include <string>
using namespace std;

//IN  - "aasaassbbbs"
//OUT - "a2sa2s2b3s"

//IN  - "abc"
//OUT - "abc"

string characterFrequencyCompression(string s) {
    int count = 1;
    string final = "";

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1])   count++;
        else {
            final += s[i] + (count > 1 ? to_string(count) : "");
            count = 1;
        }
    }

    final += s.at(s.length()-1);
    if (count > 1) final += to_string(count);
    return final;
}

int main() {
    // string s = "aasaassbbbs";

    string s;
    cout << "Enter any string : ";
    cin >> s;
    cout << characterFrequencyCompression(s) << endl;  
    return 0;
}

//TIME COMPLEXITY - O(n), where 'n' is the length of the string.
//SPACE COMPLEXITY - O(1)
