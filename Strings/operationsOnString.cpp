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

    // 6. STRING REVERSAL
    string revStr = str3;
    reverse(revStr.begin(), revStr.end());
    cout << "Reversed String: " << revStr << endl;

    // 7. INSERTING INTO A STRING
    string insStr = "EpicEscapes";
    insStr.insert(4, " -"); // Insert '-' at position 4
    cout << "After Insertion: " << insStr << endl;

    // 8. ERASING PART OF A STRING
    string eraseStr = "Epic - Escapes";
    eraseStr.erase(4, 2); // Erase 2 characters from index 4
    cout << "After Erase: " << eraseStr << endl;

    // 9. FINDING A SUBSTRING
    string findStr = "I love programming!";
    size_t pos = findStr.find("love");
    if (pos != string::npos) 
        cout << "'love' found at position: " << pos << endl;
    else 
        cout << "'love' not found" << endl;

    // 10. REPLACING A SUBSTRING
    string repStr = "Hello World!";
    repStr.replace(6, 5, "C++"); // Replace "World" with "C++"
    cout << "After Replace: " << repStr << endl;

    return 0;
}
