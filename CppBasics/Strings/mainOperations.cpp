#include <iostream>
#include <algorithm>
#include <string>
#include <limits>
using namespace std;

void str_operations(string &str1, string &str2) {

    cout<<"--- BASIC OPERATIONS ---"<<endl;
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Size of str2: " << str2.size() << endl;
    cout << "str1 == str2: " << (str1 == str2) << endl;
    cout << "Compare (str1 vs str2): " << str1.compare(str2) << endl;
    cout << "Concatenation (str1 + str2): " << str1 + str2 << endl;
    cout << "str1 > str2: " << (str1 > str2) << endl;
    cout << "str1 < str2: " << (str1 < str2) << endl;

    // Access characters
    cout<<endl<<"--- ACCESS CHARACTERS ---"<<endl;
    cout << "First character of str1: " << str1[0] << endl;
    cout << "Second character of str2: " << str2.at(1) << endl;

    // Substring
    cout<<endl<<"--- SUBSTRING ---"<<endl;
    cout << "Substring of str1 (0, 5): " << str1.substr(0, 5) << endl;

    // Find
    cout<<endl<<"--- FIND THE POSITION ---"<<endl;
    cout << "Position of 'world' in str1: " << str1.find("world") << endl;

    // Finding Last Occurrence
    cout<<endl<<"--- FIND THE LAST OCCURENCE ---"<<endl;
    cout << "Last occurrence of 'o' in str1: " << str1.rfind('o') << endl;

    // Insert
    cout<<endl<<"--- INSERT IN STRING ---"<<endl;
    string temp = str1;
    temp.insert(6, "beautiful ");
    cout << "After insertion in str1: " << temp << endl;

    // Erase
    cout<<endl<<"--- ERASE ---"<<endl;
    temp.erase(6, 9); // Remove "beautiful"
    cout << "After erasing: " << temp << endl;

    // Replace
    cout<<endl<<"--- REPLACE A PART OF STRING ---"<<endl;
    temp.replace(0, 5, "Hi");
    cout << "After replacing: " << temp << endl;

    // Append
    cout<<endl<<"--- APPEND IN STRING ---"<<endl;
    temp = str1;
    temp.append("! Welcome!");
    cout << "After appending: " << temp << endl;

    // Swapping Strings
    cout<<endl<<"--- SWAPPING TWO STRINGS ---"<<endl;
    string strA = "first", strB = "second";
    cout << "Before swapping: strA = " << strA << ", strB = " << strB << endl;
    strA.swap(strB);
    cout << "After swapping: strA = " << strA << ", strB = " << strB << endl;

    // Convert String to Number
    cout<<endl<<"--- STRING TO NUMBER(INT) ---"<<endl;
    string numStr = "12345";
    int num = stoi(numStr);
    cout << "String to int: " << num << endl;

    // Convert Number to String
    cout<<endl<<"--- NUMBER(INT) TO STRING ---"<<endl;
    int n = 42;
    string strNum = to_string(n);
    cout << "Int to string: " << strNum << endl;

    // Count Occurrences
    cout<<endl<<"--- COUNT OCCURENCE OF A CHARACTER IN STRING ---"<<endl;
    int countO = count(str1.begin(), str1.end(), 'o');
    cout << "Count of 'o' in str1: " << countO << endl;

    // Capacity and Reserve
    cout<<endl<<"--- REVERSE OF STRING AND ITS CAPACITY ---"<<endl;
    cout << "Capacity of str1: " << str1.capacity() << endl;
    str1.reserve(50);
    cout << "After reserve, capacity of str1: " << str1.capacity() << endl;

    // Multiline Strings
    cout<<endl<<"--- MULTILINE STRINGS ---"<<endl;
    string multiLine = R"(This is
    a multiline
    string example)";
    cout << "Multiline string:\n" << multiLine << endl;

    // Uppercase and lowercase
    cout<<endl<<"--- CONVERSION TO UPPERCASE AND LOWER OF A STRING ---"<<endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "Uppercase str1: " << str1 << endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    cout << "Lowercase str1: " << str1 << endl;

    // Reverse
    cout<<endl<<"--- REVERSE A STRING ---"<<endl;
    string reversed_str = str1;
    reverse(reversed_str.begin(), reversed_str.end());
    cout << "Reversed str1: " << reversed_str << endl;

    // Check if empty

    cout << endl << "Is str2 empty? " << (str2.empty() ? "Yes" : "No") << endl;

    // Clear
    string cleared_str = str1;
    cleared_str.clear();
    cout << endl << "After clearing str1: " << cleared_str << endl;

    // Iteration
    cout<<endl<<"--- ITERATION IN STRING TO FETCH ALL CHARACTERS ---"<<endl;
    cout << "Characters in str2: ";
    for (char c : str2) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    string str1 = "hello world";
    string str2 = " HELLO WORLD";
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    str_operations(str1, str2);

    return 0;
}


// write a problem that will take following details for each students: name(string), marks of 5 sub(float), registrationno(int),
// Need to calculate , total marks and percentage and display all the data together.