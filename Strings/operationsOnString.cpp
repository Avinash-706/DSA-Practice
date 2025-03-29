#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 1. STRING INITIALIZATION & INPUT
    string str1 = "Epic"; 
    string str2(" Escapes");  
    string str3;
    
    cout << "Enter a string: ";
    getline(cin, str3); // Input with spaces

    // 2. STRING LENGTH
    cout << "\nLength of '" << str3 << "' is: " << str3.length() << endl;

    // 3. STRING CONCATENATION
    string concatStr = str1 + str2;
    cout << "Concatenated String: " << concatStr << endl;

    // 4. STRING COMPARISON
    string cmp1 = "Hello", cmp2 = "World";
    if (cmp1 == cmp2) 
        cout << "Strings are equal." << endl;
    else 
        cout << "Strings are not equal." << endl;

    // 5. SUBSTRING EXTRACTION
    cout << "Substring (0,4) of '" << concatStr << "': " << concatStr.substr(0, 4) << endl;



    return 0;
}
