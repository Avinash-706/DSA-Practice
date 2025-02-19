#include <iostream>
#include <string>
using namespace std;

string compute(string s) {
    int count = 1;
    string final = "";
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        } 
        else {
            final += s[i];  
            if (count > 1) final += to_string(count); 
            count = 1;
        }
    }
    final += s.at(s.length()-1);
    if (count > 1) final += to_string(count);

    return final;
}

int main() {
    string s = "aasaassbbbs";
    cout << compute(s) << endl;  
    return 0;
}

//TIME COMPLEXITY - O(n), where 'n' is the length of the string.
//SPACE COMPLEXITY - O(1)
